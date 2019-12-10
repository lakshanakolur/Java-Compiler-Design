%{
	#include "header.c"
	#define YYSTYPE YACC
	#include "y.tab.h"
    #include <stdio.h>
    extern void yyerror(const char *);
    int fg = 0;
    int line = 1;
%}
%%
["\t"]*"//".* {}
"/*"        {fg+=1;}
"*/"        {fg=0;}
"import" 	{if(fg == 0){yylval.v=strdup(yytext); return T_IMPORT;}}
"class" 	{if(fg == 0){yylval.v=strdup(yytext); return T_CLASS;}}
"public" 	{if(fg == 0){yylval.v=strdup(yytext); return T_PUBLIC;}}
"private" 	{if(fg == 0){yylval.v=strdup(yytext); return T_PRIVATE;}}
"protected" {if(fg == 0){yylval.v=strdup(yytext); return T_PROTECTED;}}
"static" 	{if(fg == 0){yylval.v=strdup(yytext); return T_STATIC;}}
"final" 	{if(fg == 0){yylval.v=strdup(yytext); return T_FINAL;}}
"void"		{if(fg == 0){yylval.v=strdup(yytext); return T_VOID;}}
"int" 		{if(fg == 0){yylval.v=strdup(yytext); return T_INT;}}
"char"		{if(fg == 0){yylval.v=strdup(yytext); return T_CHAR;}}
"double"	{if(fg == 0){yylval.v=strdup(yytext); return T_DOUBLE;}}
"while" 	{if(fg == 0){yylval.v=strdup(yytext); return T_WHILE;}}
"switch"	{if(fg == 0){yylval.v=strdup(yytext); return T_SWITCH;}}
"case"		{if(fg == 0){yylval.v=strdup(yytext); return T_CASE;}}
"default"	{if(fg == 0){yylval.v=strdup(yytext); return T_DEFAULT;}}
"break"		{if(fg == 0){yylval.v=strdup(yytext); return T_BREAK;}}
"continue"	{if(fg == 0){yylval.v=strdup(yytext); return T_CONTINUE;}}
"return"	{if(fg == 0){yylval.v=strdup(yytext); return T_RETURN;}}
"new"       {if(fg == 0){yylval.v=strdup(yytext); return T_NEW;}}
"++"		{if(fg == 0){yylval.v=strdup(yytext); return T_INC;}}
"--"		{if(fg == 0){yylval.v=strdup(yytext); return T_DEC;}}
"+="		{if(fg == 0){yylval.v=strdup(yytext); return T_SHORTHANDADD;}}
"-="		{if(fg == 0){yylval.v=strdup(yytext); return T_SHORTHANDSUB;}}
"*="		{if(fg == 0){yylval.v=strdup(yytext); return T_SHORTHANDMUL;}}
"/="		{if(fg == 0){yylval.v=strdup(yytext); return T_SHORTHANDDIV;}}
"&="		{if(fg == 0){yylval.v=strdup(yytext); return T_SHORTHANDAND;}}
"|="        {if(fg == 0){yylval.v=strdup(yytext); return T_SHORTHANDORE;}}
"^="		{if(fg == 0){yylval.v=strdup(yytext); return T_SHORTHANDCAR;}}
"%="		{if(fg == 0){yylval.v=strdup(yytext); return T_SHORTHANDMOD;}}
"||"		{if(fg == 0){yylval.v=strdup(yytext); return T_OROR;}}
"&&"		{if(fg == 0){yylval.v=strdup(yytext); return T_ANDAND;}}
"=="		{if(fg == 0){yylval.v=strdup(yytext); return T_EQCOMP;}}
"!="		{if(fg == 0){yylval.v=strdup(yytext); return T_NOTEQUAL;}}
">="        {if(fg == 0){yylval.v=strdup(yytext); return T_GREATEREQ;}}
"<="        {if(fg == 0){yylval.v=strdup(yytext); return T_LESSEREQ;}}
"<<"        {if(fg == 0){yylval.v=strdup(yytext); return T_LEFTSHIFT;}}
">>"        {if(fg == 0){yylval.v=strdup(yytext); return T_RIGHTSHIFT;}}
"("			{if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
")"			{if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"."         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
","         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"{"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"}"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"["         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"]"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"*"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"+"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
";"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"-"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"/"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"="         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"&"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"|"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"!"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"~"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"^"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"%"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
">"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
"<"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
":"         {if(fg == 0){yylval.v=strdup(yytext);  return *yytext;}}
[0-9]+[.]?[0-9]*	{if(fg == 0){yylval.val=atoi(strdup(yytext)); return T_NUM;}}
[A-Za-z][A-Za-z0-9]* 	{if(fg == 0) {yylval.v=strdup(yytext); return T_ID;}}
"\n"		{line++;}
.			{}
%%