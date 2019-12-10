%{
	#define YYSTYPE char*
	#include "y.tab.h"
    #include <stdio.h>
    extern void yyerror(const char *);
    int line = 1;
%}
%%
[\n]				{line++;}
"||"				{yylval = strdup(yytext);return T_OR_OP;}
"&&"				{yylval = strdup(yytext);return T_AND_OP;}
"=="				{yylval = strdup(yytext);return T_EQ_OP;}
"!="				{yylval = strdup(yytext);return T_NE_OP;}
"<="				{yylval = strdup(yytext);return T_LE_OP;}
">="				{yylval = strdup(yytext);return T_GE_OP;}
"%"					{yylval = strdup(yytext);return T_MOD_OP;}
":"					{yylval = strdup(yytext);return(':'); }
"-"					{yylval = strdup(yytext);return('-'); }
"+"					{yylval = strdup(yytext);return('+'); }
"*"					{yylval = strdup(yytext);return('*'); }
"/"					{yylval = strdup(yytext);return('/'); }
"<"					{yylval = strdup(yytext);return('<'); }
">"					{yylval = strdup(yytext);return('>'); }
"="					{yylval = strdup(yytext);return('='); }
"["					{yylval = strdup(yytext);return('['); }
"]"					{yylval = strdup(yytext);return(']'); }
"go to"				{yylval = strdup(yytext);return T_GOTO;}
"if"				{yylval = strdup(yytext);return T_IF;}
"start"				{yylval = strdup(yytext);return T_START;}
"stop"				{yylval = strdup(yytext);return T_STOP;}
[0-9]+|[0-9]+.[0-9]+		{yylval = strdup(yytext);return T_NUMBER;}
[a-zA-Z_][a-zA-Z_0-9]*				{yylval = strdup(yytext);return T_ID;}
[  \t\v\f]+				{}
.					{  }
%%
