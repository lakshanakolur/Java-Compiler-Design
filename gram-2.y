%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "header.c"
	void yyerror(const char *);
	#define YYSTYPE YACC
	FILE *yyin;
	int yylex();
	FILE* fp;
	int ln = 1, tn = 1;
	char* newLabel();
	char* newTemp();
	char* cont;
	char* br;
	char* sw;
	char* snxt;
	char* swt;
	char* tru;
	char* fals;
	extern int line;
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
	Modifier T_CLASS T_ID '{'ClassBody'}' 	
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
	T_STATIC Modifier
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
	'{' Statement'}'
	;

Statement:
	Assign Statement
	|T_BREAK';' {int l=strlen(br)-1; if(l == -1){printf("Error - break not Expected"); YYACCEPT;} while(br[l]!='L')l--; char s1[3]; strcpy(s1,&br[l]); fprintf(fp,"go to %s\n",s1);} Statement
	|T_CONTINUE';' {int l=strlen(cont)-1; if(l == -1){printf("Error - continue not Expected"); YYACCEPT;} while(cont[l]!='L')l--; char s1[3]; strcpy(s1,&cont[l]); fprintf(fp,"go to %s\n",s1);} Statement
	|T_WHILE'('{$1.next = newLabel(); strcat(cont,$1.next); $1.tr = newLabel(); $1.fal = newLabel(); strcat(br,$1.fal); fprintf(fp,"%s:",$1.next); tru = $1.tr; fals = $1.fal;}Expression{fprintf(fp," go to %s \n",$1.tr); fprintf(fp,"go to %s \n%s:",$1.fal,$1.tr);}')' Block {fprintf(fp,"go to %s\n%s:",$1.next,$1.fal); int l; l=strlen(br); while(br[l-1]!='L')l--; br[l-1]='\0'; l=strlen(cont); while(cont[l-1]!='L')l--; cont[l-1]='\0';} Statement
	|T_RETURN Expression';' Statement
	|T_SWITCH'('Expression {strcpy(sw,$3.v); strcpy(br,newLabel()); strcpy(snxt,newLabel());}')' '{' SwitchBlock'}'  {fprintf(fp,"%s:%s:",br,snxt);}Statement
	|VarDec Statement
	|ArrDec Statement
	|ArrInit Statement
	|
	;

SwitchBlock:
	SwitchLabel {if(strcmp($1.v,"default")){$$.v = newLabel(); strcpy(swt,$$.v); $1.a = newTemp(); fprintf(fp,"%s = %s == %s\n",$1.a,$1.v,snxt); fprintf(fp,"if %s go to %s\ngo to %s\n%s:",$1.a,snxt,$$.v,sw);} } ':'Statement {if(strcmp($1.v,"default")){strcpy(snxt,newLabel()); fprintf(fp,"go to %s\n%s:",snxt,swt);}} SwitchBlock
	|
	;

SwitchLabel:
	T_CASE Expression 	{$$.v = $1.v;}
	| T_DEFAULT			{$$.v = "default";}
	;

VarDec:
	Type T_ID '=' Expression DecIdenList';' 	{fprintf(fp,"%s = %s\n",$2.v,$4.v);}
	|Type T_ID DecIdenList';'
	;

DecIdenList:
	','T_ID '=' Expression DecIdenList			{fprintf(fp,"%s = %s\n",$2.v,$4.v);}
	|','T_ID DecIdenList
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
	T_ID'['Expression']'					{$$.a = newTemp(); fprintf(fp,"%s = %s * 4\n",$$.a,$3.v); sprintf($1.v,"%s[%s]",$1.v,$$.a); $$.v=$1.v; }
	|T_ID'['Expression']''['Expression']'	{$$.a = newTemp(); $$.v = "A"; fprintf(fp,"%s = %s * 4\n",$$.a,$3.v); $$.fal = newTemp(); fprintf(fp,"%s = %s * 4\n",$$.fal,$5.v); $$.tr = newTemp(); fprintf(fp,"%s = %s + %s\n",$$.tr,$$.fal,$$.a); sprintf($1.v,"%s[%s]",$1.v,$$.tr); $$.v=$1.v; }
	|T_ID
	;

Type:
	T_INT
	|T_DOUBLE
	|T_CHAR
	;

Assign: 
    ArrExp AssignOp Expression';' {if(strlen($2.v)==1)fprintf(fp,"%s %s %s\n",$1.v,$2.v,$3.v); else
    {$$.a = newTemp(); fprintf(fp,"%s = %s %c %s\n",$$.a,$1.v,$2.v[0],$3.v); fprintf(fp,"%s = %s\n",$1.v,$$.a);}}
	;

AssignOp: 	
    '='					{$$.v = "=";}
    |T_SHORTHANDADD		{$$.v = "+=";}
    |T_SHORTHANDSUB		{$$.v = "-=";}
    |T_SHORTHANDMUL		{$$.v = "*=";}
    |T_SHORTHANDDIV		{$$.v = "/=";}
    |T_SHORTHANDAND		{$$.v = "&=";}
    |T_SHORTHANDORE		{$$.v = "|=";}
    |T_SHORTHANDCAR		{$$.v = "^=";}
    |T_SHORTHANDMOD		{$$.v = "%=";}
    ;

InfixOp: 
    '|'			{$$.v = "|";}
    |'^'		{$$.v = "^";}
    |'&'		{$$.v = "&";}
    |'+'		{$$.v = "+";}	
    |'-'		{$$.v = "-";}
    |'*'		{$$.v = "*";}
    |'/'		{$$.v = "/";}
    |'%'		{$$.v = "%";}
    ;

InfixOp1:
	T_OROR
    |T_ANDAND
	|T_EQCOMP
    |T_NOTEQUAL
    |'<'
    |'>'
    |T_LESSEREQ
    |T_GREATEREQ
    |T_LEFTSHIFT
    |T_RIGHTSHIFT
    ;

PrefixOp: 
    T_INC		{$$.v = "++";}
    |T_DEC		{$$.v = "--";}
    |'!'		{$$.v = "!";}
    |'~'		{$$.v = "~";}
    |'+'		{$$.v = "";}
    |'-'		{$$.v = "MINUS";}
    ;

PostfixOp: 
    T_INC		{$$.v = "++";}
    |T_DEC		{$$.v = "--";}
    ;

Expression: 
	Expr 						{$$.v = $1.v;}
	|Expr InfixOp Expression	{$$.v = newTemp(); fprintf(fp,"%s = %s %s %s\n",$$.v,$1.v,$2.v,$3.v); }
	|Expr InfixOp1 Expression	{if(strcmp($2.v,"&&") && strcmp($2.v,"||")){$1.a = newTemp(); fprintf(fp,"%s = %s %s %s\n",$1.a,$1.v,$2.v,$3.v); fprintf(fp,"if %s",$1.a); }else if(!strcmp($2.v,"&&")) {$2.a = newLabel(); fprintf(fp," go to %s\ngo to %s\n%s:",$2.a,fals,$2.a);} else if(!strcmp($2.v,"||")) {$2.a = newLabel(); fprintf(fp," go to %s\ngo to %s\n%s:",tru,$2.a,$2.a);}}
	;

Expr:
	PrefixOp Epr		{if(strlen($1.v)==2){$$.v = newTemp(); fprintf(fp,"%s = %s %c 1\n",$$.v,$2.v,$1.v[0]); fprintf(fp,"%s = %s\n",$2.v,$$.v);} else {$$.v = newTemp(); fprintf(fp,"%s = %s %s\n",$$.v,$1.v,$2.v);} }
	|Epr
	|Epr PostfixOp				{$$.v = newTemp(); $$.a = newTemp(); fprintf(fp,"%s = %s\n",$$.v,$1.v); fprintf(fp,"%s = %s %c 1\n",$$.a,$1.v,$2.v[0]); fprintf(fp,"%s = %s\n",$1.v,$$.a);}
	|PrefixOp Epr PostfixOp		{$$.v = newTemp(); $$.a = newTemp(); fprintf(fp,"%s = %s %c 1\n",$$.v,$2.v,$1.v[0]); fprintf(fp,"%s = %s %c 1\n",$$.a,$2.v,$3.v[0]); fprintf(fp,"%s = %s\n",$2.v,$$.a);}
	;

Epr:
	'('Expression')'
	|ArrExp
	|T_NUM 				{sprintf($$.v,"%d",$1.val);}
	;

%%
void yyerror(const char *s)
{
	printf("%s", s);
}
int main(int argc, char* argv[])
{
	fp = fopen("icg.txt","w");
	fprintf(fp,"start\n");
	cont = (char*)malloc(sizeof(char)*10);
	br = (char*)malloc(sizeof(char)*10);
	sw = (char*)malloc(sizeof(char)*10);
	snxt = (char*)malloc(sizeof(char)*10);
	swt = (char*)malloc(sizeof(char)*10);
	tru = (char*)malloc(sizeof(char)*10);
	fals = (char*)malloc(sizeof(char)*10);
	yyin = fopen(argv[1], "r"); 
	if(!yyparse())
	{
		fprintf(fp,"stop\n");
		printf("Parsing successful \n");
	}
	else
		printf("Unsuccessful \n");
	return 0;

	//start

}

char* newLabel()
{
	char *s = (char*)malloc(4*sizeof(char));
	sprintf(s,"L%d",ln);
	ln++;
	return s;
}

char* newTemp()
{
	char *s = (char*)malloc(4*sizeof(char));
	sprintf(s,"T%d",tn);
	tn++;
	return s;
}