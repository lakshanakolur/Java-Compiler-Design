%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	void yyerror(const char *);
	#define YYSTYPE char*
	FILE *yyin;
	int yylex();
	char* type;
	int err = 0;
	FILE* fp;
	typedef struct NODE
	{
	char name[10];
	int value;
	char type[10];
	int scope;
	struct NODE* next;
	}NODE;

	typedef struct symbol_table
	{
		NODE* head;
		int entries;
	}TABLE;
	TABLE* s;
	int scope = 0;

	void print();
	void funcend();
	int exists(char* name);
	void scopered(int scope);
	void update(char* name, int val);
	void insert(char* name, int value, char* type) ;

%}
%error-verbose
%token T_IMPORT T_CLASS T_PUBLIC T_PRIVATE T_PROTECTED T_STATIC T_FINAL T_VOID T_INT T_CHAR T_DOUBLE T_WHILE T_SWITCH T_CASE T_DEFAULT T_BREAK T_CONTINUE T_RETURN T_NEW T_INC T_DEC T_SHORTHANDADD T_SHORTHANDSUB T_SHORTHANDMUL T_SHORTHANDDIV T_SHORTHANDAND T_SHORTHANDORE T_SHORTHANDCAR T_SHORTHANDMOD T_OROR T_ANDAND T_EQCOMP T_NOTEQUAL T_GREATEREQ T_LESSEREQ T_LEFTSHIFT T_RIGHTSHIFT T_NUM T_ID

%%
CompilationUnit:
	ImportDec CompilationUnit
	|ClassDec
	;

ImportDec:
	T_IMPORT T_ID'.'T_ID'.''*'';'
	;

ClassDec:
	Modifier T_CLASS T_ID '{'ClassBody'}'  	{funcend();}
	;

ClassBody:
	GlobVarDec ClassBody
	|MethodDec ClassBody
	|
	;

GlobVarDec:
	Modifier VarDec
	;

MethodDec:
	Modifier Type T_ID'('Params')'Block
	|Modifier T_VOID T_ID'('Params')'Block
	;

Modifier:
	T_PUBLIC Modifier1
	|T_PRIVATE Modifier1
	|T_PROTECTED Modifier1
	|Modifier1
	;

Modifier1:
	T_STATIC Modifier2
	|Modifier2
	;

Modifier2:
	T_FINAL
	|
	;

Params:
	ParamList
	;

ParamList:
	Type T_ID
	|Type T_ID',' Params
	|
	;

Block:
	'{' {scope+=1;} Statement'}'	{scopered(scope);scope-=1;}
	;

Statement:
	Assign Statement
	|T_BREAK';' Statement
	|T_CONTINUE';' Statement
	|T_WHILE'('Expression')'Block
	|T_WHILE'('Expression')'Statement
	|T_RETURN Expression';' Statement
	|T_SWITCH'('Expression')' '{'{scope+=1;} SwitchBlock'}' {scopered(scope);scope-=1;} Statement
	|VarDec Statement
	|ArrDec Statement
	|ArrInit Statement
	|
	;

SwitchBlock:
	SwitchLabel':' Statement SwitchBlock
	|
	;

SwitchLabel:
	T_CASE '('Expression')'
	| T_DEFAULT
	;

VarDec:
	Type T_ID '=' Expression
		{
			//printf("declaration: $$=%s $1=%s $2=%s $4=%s\n",$$, $1, $2, $4);
			insert($2, atoi($4), $1);
			//strcpy(type,$1);
		}
		DecIdenList';'
	|Type T_ID
		{
			//printf("declaration: $$=%s $1=%s $2=%s $4=%s\n",$$, $1, $2, $4);
			insert($2, 0, $1);
			//strcpy(type,$1);
		}
		DecIdenList';'
	;

DecIdenList:
	','T_ID '=' Expression DecIdenList
		{
			//printf("declaration: $$=%s $1=%s $2=%s $4=%s\n",$$, $1, $2, $4);
			insert($2, atoi($4), type);
		}
	|','T_ID DecIdenList
		{
			//printf("declaration: $$=%s $1=%s $2=%s $4=%s\n",$$, $1, $2, $4);
			insert($2, 0, type);
		}
	|
	;

ArrDec:
	Type T_ID'['']' ArrList';'
	|T_ID'['']''['']' ArrList;
	|T_ID ArrList;
	;

ArrList:
	','T_ID'['']'
	|','T_ID'['']''['']'
	|','T_ID
	|
	;

ArrInit:
	Type T_ID '['']' '=' T_NEW Type'['Expression']'';'
	|Type T_ID '['']''['']' '=' T_NEW Type'['Expression']''['Expression']'';'
	|Type'['']' T_ID '=' T_NEW Type'['Expression']'';'
	|Type'['']''['']' T_ID '=' T_NEW Type'['Expression']''['Expression']'';'
	;

ArrExp:
	T_ID'['Expression']'
	|T_ID'['Expression']''['Expression']'
	|T_ID
	;

Type:
	T_INT
	|T_DOUBLE
	|T_CHAR
	;

Assign:
    ArrExp AssignOp Expression';'
	{
		//printf("declaration: $$=%s $1=%s $2=%s $3=%s\n",$$, $1, $2, $3);
		if(exists($1)){
			update($1,atoi($3));
		}
		else
		{
			printf("Variable %s not declared\n",$1);
		}
	}

AssignOp:
    '='
    |T_SHORTHANDADD
    |T_SHORTHANDSUB
    |T_SHORTHANDMUL
    |T_SHORTHANDDIV
    |T_SHORTHANDAND
    |T_SHORTHANDORE
    |T_SHORTHANDCAR
    |T_SHORTHANDMOD
    ;

InfixOp:
    T_OROR
    |T_ANDAND
    |'|'
    |'^'
    |'&'
    |T_EQCOMP
    |T_NOTEQUAL
    |'<'
    |'>'
    |T_LESSEREQ
    |T_GREATEREQ
    |T_LEFTSHIFT
    |T_RIGHTSHIFT
    |'+'
    |'-'
    |'*'
    |'/'
    |'%'
    ;

PrefixOp:
    T_INC
    |T_DEC
    |'!'
    |'~'
    |'+'
    |'-'
    ;

PostfixOp:
    T_INC
    |T_DEC
    ;

Expression:
	Expr
	|Expr InfixOp Expression
		{	//printf("scope %d\n",scope);
			//printf("expr Infix expr: %s = %s %s %s\n",$$, $1, $2, $3);
			/*$$ = calculate_infix($1, $3, $2);
			printf("result: %d\n", $$);*/
		};

Expr:
	PrefixOp Epr		{printf("exp pretfix: %s = %s %s \n",$$, $1,$2);/* $$ = calculate_postfix($1, $2); printf("postfix expression: %d\n", $$);*/ }
	|Epr
	|Epr PostfixOp				{printf("exp postfix: %s = %s %s \n",$$, $1,$2); /*$$ = calculate_postfix($1, $2); printf("postfix expression: %d\n", $$);*/ }
	|PrefixOp Epr PostfixOp
	;

Epr:
	'('Expression')'
	|ArrExp						{if(exists($1)){
	NODE* temp = s->head;
	while(temp != NULL)
	{
		if(strcmp(temp->name,$1) == 0 && temp->scope <= scope)
			sprintf($$,"%d\n",temp->value);
		temp = temp->next;
	}
	}
	else
	{
		printf("Variable %s not declared\n",$1);
	}}
	|T_NUM 						{/*printf("num: %s\n ",$1); $$=atoi($1);*/}
	;

%%
void yyerror(const char *s)
{
	printf("%s", s);
}
int main(int argc, char* argv[])
{
	s = (TABLE *)malloc(sizeof(TABLE));
	s->head=NULL;
	s->entries=0;
	/*char name[5];
	strcpy(name,"TEST");
	char type[5];
	strcpy(type, "int");
	insert(name, 0, type);
	print(s);*/
	yyin = fopen(argv[1], "r");
	fp = fopen("symbol_table.txt","w");
	if(!yyparse())
		return 0;
	else
		printf("Unsuccessful \n");
	return 0;

	//start

}

int calculate_infix(int e1, int e2, char* op)
{
	switch (op[0])
	{
		case '+': return e1+e2;
				  break;
		case '-': return e1-e2;
				  break;
		case '*': return e1*e2;
				  break;
		case '/': return e1/e2;
				  break;
	}
return 0;
}

int calculate_postfix(int e, char* op)
{
	switch (op[0])
	{
		case '+': return e + 1;
				  break;
		case '-': return e - 1;
	}
return 0;
}

int calculate_prefix(int e, char* op)
{
	switch (op[0])
	{
		case '+': return e + 1;
				  break;
		case '-': return e - 1;
				  break;
	}
return 0;
}

void insert(char* name, int value, char* type)
{
	if(exists(name))
	{
		printf("Variable %s already declared\n",name);
		err++;
		return;
	}
    	NODE* test = (NODE*) malloc(sizeof(NODE));
    	strcpy(test->name,name);
	test->value=value;
	test->next=NULL ;
	test->scope=scope;
	strcpy(test->type, type);

	NODE* h = s->head;

	if(h==NULL)
	{

		s->head=test;
		s->entries+=1;
		print();
		return;
	}
	while(h->next!=NULL)
	{
		h=h->next;
	}
	h->next=test;
	s->entries+=1;
	print();
}

int exists(char* name)
{
	NODE* temp = s->head;
	if(s->head == NULL)
		return 0;
	while(temp != NULL)
	{
		if(strcmp(temp->name,name) == 0 && temp->scope <= scope)
			return 1;
		temp = temp->next;
	}
	return 0;
}

void update(char* name, int val)
{
	NODE* temp = s->head;
	while(temp->next != NULL)
	{
	//printf("%s\n",temp->name);
		if(strcmp(temp->name,name) == 0){
		//printf("%d\n",temp->value);
			temp->value = val;
		}
		temp = temp->next;
	}
	print();
}

void funcend()
{
	scopered(0);
	if(err == 0)
	printf("Semantic Analysis Successful\n");
	else
	printf("Please fix Semantic Errors\n");
	if(s->head == NULL)
		free(s);
}

void scopered(int scope)
{
	/*if(s->head == NULL)
		return;
	NODE* temp = s->head;
	NODE* temp1 = s->head->next;
	if(temp->scope == scope)
	{
		printf("1");
		s->head = NULL;
		return;
	}
	while(temp1 != NULL)
	{
		if(temp1->scope == scope)
		{
			printf("2");
			temp->next = NULL;
			return;
		}
		temp1 = temp1->next;
	}*/
}

void print()
{
	NODE* h = s->head;
	fprintf(fp,"\nSymbol table \nName  Value  Type  Scope\n");
	for(int i=0;i<s->entries; i++ )
	{
		fprintf(fp,"%s  %d  %s  %d\n", h->name, h->value, h->type, h->scope);
		h=h->next;
	}
printf("\n\n");
}
