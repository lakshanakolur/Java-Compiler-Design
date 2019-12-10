/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_IMPORT = 258,
     T_CLASS = 259,
     T_PUBLIC = 260,
     T_PRIVATE = 261,
     T_PROTECTED = 262,
     T_STATIC = 263,
     T_FINAL = 264,
     T_VOID = 265,
     T_INT = 266,
     T_CHAR = 267,
     T_DOUBLE = 268,
     T_WHILE = 269,
     T_SWITCH = 270,
     T_CASE = 271,
     T_DEFAULT = 272,
     T_BREAK = 273,
     T_CONTINUE = 274,
     T_RETURN = 275,
     T_NEW = 276,
     T_INC = 277,
     T_DEC = 278,
     T_SHORTHANDADD = 279,
     T_SHORTHANDSUB = 280,
     T_SHORTHANDMUL = 281,
     T_SHORTHANDDIV = 282,
     T_SHORTHANDAND = 283,
     T_SHORTHANDORE = 284,
     T_SHORTHANDCAR = 285,
     T_SHORTHANDMOD = 286,
     T_OROR = 287,
     T_ANDAND = 288,
     T_EQCOMP = 289,
     T_NOTEQUAL = 290,
     T_GREATEREQ = 291,
     T_LESSEREQ = 292,
     T_LEFTSHIFT = 293,
     T_RIGHTSHIFT = 294,
     T_NUM = 295,
     T_ID = 296
   };
#endif
/* Tokens.  */
#define T_IMPORT 258
#define T_CLASS 259
#define T_PUBLIC 260
#define T_PRIVATE 261
#define T_PROTECTED 262
#define T_STATIC 263
#define T_FINAL 264
#define T_VOID 265
#define T_INT 266
#define T_CHAR 267
#define T_DOUBLE 268
#define T_WHILE 269
#define T_SWITCH 270
#define T_CASE 271
#define T_DEFAULT 272
#define T_BREAK 273
#define T_CONTINUE 274
#define T_RETURN 275
#define T_NEW 276
#define T_INC 277
#define T_DEC 278
#define T_SHORTHANDADD 279
#define T_SHORTHANDSUB 280
#define T_SHORTHANDMUL 281
#define T_SHORTHANDDIV 282
#define T_SHORTHANDAND 283
#define T_SHORTHANDORE 284
#define T_SHORTHANDCAR 285
#define T_SHORTHANDMOD 286
#define T_OROR 287
#define T_ANDAND 288
#define T_EQCOMP 289
#define T_NOTEQUAL 290
#define T_GREATEREQ 291
#define T_LESSEREQ 292
#define T_LEFTSHIFT 293
#define T_RIGHTSHIFT 294
#define T_NUM 295
#define T_ID 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

