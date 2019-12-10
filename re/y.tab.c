/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "sym.y"

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



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 226 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   272

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  237

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,     2,     2,    62,    56,     2,
      47,    48,    43,    59,    49,    60,    42,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    44,
      57,    51,    58,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,    55,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,    54,    46,    64,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    16,    23,    26,    29,    30,
      33,    41,    49,    52,    55,    58,    60,    63,    65,    67,
      68,    70,    73,    78,    79,    80,    85,    88,    92,    96,
     102,   108,   113,   114,   115,   126,   129,   132,   135,   136,
     141,   142,   147,   149,   150,   158,   159,   165,   171,   175,
     176,   183,   190,   193,   198,   205,   208,   209,   221,   238,
     250,   267,   272,   280,   282,   284,   286,   288,   293,   295,
     297,   299,   301,   303,   305,   307,   309,   311,   313,   315,
     317,   319,   321,   323,   325,   327,   329,   331,   333,   335,
     337,   339,   341,   343,   345,   347,   349,   351,   353,   355,
     357,   359,   361,   363,   365,   369,   372,   374,   377,   381,
     385,   387
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      66,     0,    -1,    67,    66,    -1,    68,    -1,     3,    41,
      42,    41,    42,    43,    44,    -1,    72,     4,    41,    45,
      69,    46,    -1,    70,    69,    -1,    71,    69,    -1,    -1,
      72,    84,    -1,    72,    92,    41,    47,    75,    48,    77,
      -1,    72,    10,    41,    47,    75,    48,    77,    -1,     5,
      73,    -1,     6,    73,    -1,     7,    73,    -1,    73,    -1,
       8,    74,    -1,    74,    -1,     9,    -1,    -1,    76,    -1,
      92,    41,    -1,    92,    41,    49,    75,    -1,    -1,    -1,
      45,    78,    79,    46,    -1,    93,    79,    -1,    18,    44,
      79,    -1,    19,    44,    79,    -1,    14,    47,    98,    48,
      77,    -1,    14,    47,    98,    48,    79,    -1,    20,    98,
      44,    79,    -1,    -1,    -1,    15,    47,    98,    48,    45,
      80,    82,    46,    81,    79,    -1,    84,    79,    -1,    88,
      79,    -1,    90,    79,    -1,    -1,    83,    50,    79,    82,
      -1,    -1,    16,    47,    98,    48,    -1,    17,    -1,    -1,
      92,    41,    51,    98,    85,    87,    44,    -1,    -1,    92,
      41,    86,    87,    44,    -1,    49,    41,    51,    98,    87,
      -1,    49,    41,    87,    -1,    -1,    92,    41,    52,    53,
      89,    44,    -1,    41,    52,    53,    52,    53,    89,    -1,
      41,    89,    -1,    49,    41,    52,    53,    -1,    49,    41,
      52,    53,    52,    53,    -1,    49,    41,    -1,    -1,    92,
      41,    52,    53,    51,    21,    92,    52,    98,    53,    44,
      -1,    92,    41,    52,    53,    52,    53,    51,    21,    92,
      52,    98,    53,    52,    98,    53,    44,    -1,    92,    52,
      53,    41,    51,    21,    92,    52,    98,    53,    44,    -1,
      92,    52,    53,    52,    53,    41,    51,    21,    92,    52,
      98,    53,    52,    98,    53,    44,    -1,    41,    52,    98,
      53,    -1,    41,    52,    98,    53,    52,    98,    53,    -1,
      41,    -1,    11,    -1,    13,    -1,    12,    -1,    91,    94,
      98,    44,    -1,    51,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,    31,
      -1,    32,    -1,    33,    -1,    54,    -1,    55,    -1,    56,
      -1,    34,    -1,    35,    -1,    57,    -1,    58,    -1,    37,
      -1,    36,    -1,    38,    -1,    39,    -1,    59,    -1,    60,
      -1,    43,    -1,    61,    -1,    62,    -1,    22,    -1,    23,
      -1,    63,    -1,    64,    -1,    59,    -1,    60,    -1,    22,
      -1,    23,    -1,    99,    -1,    99,    95,    98,    -1,    96,
     100,    -1,   100,    -1,   100,    97,    -1,    96,   100,    97,
      -1,    47,    98,    48,    -1,    91,    -1,    40,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    44,    48,    52,    56,    57,    58,    62,
      66,    67,    71,    72,    73,    74,    78,    79,    83,    84,
      88,    92,    93,    94,    98,    98,   102,   103,   104,   105,
     106,   107,   108,   108,   108,   109,   110,   111,   112,   116,
     117,   121,   122,   127,   126,   134,   133,   143,   148,   153,
     157,   158,   159,   163,   164,   165,   166,   170,   171,   172,
     173,   177,   178,   179,   183,   184,   185,   189,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   235,   236,   237,   238,   239,
     240,   244,   245,   249,   250,   258,   259,   260,   261,   265,
     266,   279
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IMPORT", "T_CLASS", "T_PUBLIC",
  "T_PRIVATE", "T_PROTECTED", "T_STATIC", "T_FINAL", "T_VOID", "T_INT",
  "T_CHAR", "T_DOUBLE", "T_WHILE", "T_SWITCH", "T_CASE", "T_DEFAULT",
  "T_BREAK", "T_CONTINUE", "T_RETURN", "T_NEW", "T_INC", "T_DEC",
  "T_SHORTHANDADD", "T_SHORTHANDSUB", "T_SHORTHANDMUL", "T_SHORTHANDDIV",
  "T_SHORTHANDAND", "T_SHORTHANDORE", "T_SHORTHANDCAR", "T_SHORTHANDMOD",
  "T_OROR", "T_ANDAND", "T_EQCOMP", "T_NOTEQUAL", "T_GREATEREQ",
  "T_LESSEREQ", "T_LEFTSHIFT", "T_RIGHTSHIFT", "T_NUM", "T_ID", "'.'",
  "'*'", "';'", "'{'", "'}'", "'('", "')'", "','", "':'", "'='", "'['",
  "']'", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'/'", "'%'",
  "'!'", "'~'", "$accept", "CompilationUnit", "ImportDec", "ClassDec",
  "ClassBody", "GlobVarDec", "MethodDec", "Modifier", "Modifier1",
  "Modifier2", "Params", "ParamList", "Block", "@1", "Statement", "@2",
  "@3", "SwitchBlock", "SwitchLabel", "VarDec", "@4", "@5", "DecIdenList",
  "ArrDec", "ArrList", "ArrInit", "ArrExp", "Type", "Assign", "AssignOp",
  "InfixOp", "PrefixOp", "PostfixOp", "Expression", "Expr", "Epr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    46,    42,    59,   123,   125,    40,    41,    44,
      58,    61,    91,    93,   124,    94,    38,    60,    62,    43,
      45,    47,    37,    33,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    67,    68,    69,    69,    69,    70,
      71,    71,    72,    72,    72,    72,    73,    73,    74,    74,
      75,    76,    76,    76,    78,    77,    79,    79,    79,    79,
      79,    79,    80,    81,    79,    79,    79,    79,    79,    82,
      82,    83,    83,    85,    84,    86,    84,    87,    87,    87,
      88,    88,    88,    89,    89,    89,    89,    90,    90,    90,
      90,    91,    91,    91,    92,    92,    92,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    96,    96,    96,
      96,    97,    97,    98,    98,    99,    99,    99,    99,   100,
     100,   100
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     7,     6,     2,     2,     0,     2,
       7,     7,     2,     2,     2,     1,     2,     1,     1,     0,
       1,     2,     4,     0,     0,     4,     2,     3,     3,     5,
       5,     4,     0,     0,    10,     2,     2,     2,     0,     4,
       0,     4,     1,     0,     7,     0,     5,     5,     3,     0,
       6,     6,     2,     4,     6,     2,     0,    11,    16,    11,
      16,     4,     7,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     2,     3,     3,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      19,     0,    19,    19,    19,    19,    18,     0,    19,     3,
       0,    15,    17,     0,    12,    13,    14,    16,     1,     2,
       0,     0,     0,     0,    19,     0,     0,    19,    19,     0,
       0,     5,     6,     7,     0,    64,    66,    65,     9,     0,
       4,     0,    45,    23,    23,     0,    49,     0,    20,     0,
       0,    95,    96,   111,    63,     0,    99,   100,    97,    98,
     110,     0,    43,   103,   106,     0,     0,     0,    21,     0,
       0,     0,   105,    49,    77,    78,    82,    83,    87,    86,
      88,    89,    92,    79,    80,    81,    84,    85,    90,    91,
      93,    94,     0,   101,   102,   107,    49,    46,    24,    11,
      23,    10,     0,   109,   108,     0,   104,     0,    48,    38,
      22,    61,    44,    49,     0,     0,     0,     0,     0,    56,
       0,    38,    38,    38,     0,     0,    38,     0,    47,     0,
       0,    38,    38,     0,     0,     0,    52,    25,    35,    36,
      37,    69,    70,    71,    72,    73,    74,    75,    76,    68,
       0,    45,     0,    26,     0,     0,     0,    27,    28,    38,
      55,     0,     0,     0,     0,    62,    38,     0,    31,     0,
       0,    67,    56,     0,     0,    29,    30,    32,    53,    56,
       0,     0,     0,     0,     0,    40,     0,    51,     0,     0,
      50,     0,     0,     0,    42,     0,     0,    54,     0,     0,
       0,     0,     0,    33,    38,     0,     0,     0,     0,     0,
      38,    40,     0,     0,     0,     0,    41,    34,    39,     0,
       0,     0,     0,    57,     0,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,    60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    26,    27,    28,    29,    11,    12,
      47,    48,    99,   109,   120,   185,   210,   195,   196,   121,
      73,    46,    66,   122,   136,   123,    60,   125,   126,   150,
      92,    61,    95,   102,    63,    64
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -138
static const yytype_int16 yypact[] =
{
     131,   -17,     5,     5,     5,    21,  -138,    36,   131,  -138,
      39,  -138,  -138,     6,  -138,  -138,  -138,  -138,  -138,  -138,
      22,    30,    38,    61,     0,    74,    35,     0,     0,    84,
      79,  -138,  -138,  -138,    91,  -138,  -138,  -138,  -138,   101,
    -138,    86,    -6,    66,    66,    29,    94,    96,  -138,   114,
     108,  -138,  -138,  -138,   106,    29,  -138,  -138,  -138,  -138,
    -138,    -7,  -138,    92,    32,   118,   117,   119,   116,   119,
      29,   120,    32,    94,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,    29,  -138,  -138,  -138,    15,  -138,  -138,  -138,
      66,  -138,   121,  -138,  -138,   123,  -138,    29,  -138,   175,
    -138,   124,  -138,    94,   122,   125,   126,   127,    29,   172,
     132,   175,   175,   175,   180,   -30,   175,    29,  -138,    29,
      29,   175,   175,   129,   138,    27,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
      29,    55,   139,  -138,   159,   134,   143,  -138,  -138,   175,
     128,   161,   170,   162,   -29,  -138,   100,   173,  -138,   164,
     166,  -138,     7,   169,   174,  -138,  -138,  -138,   176,   177,
     201,   179,   181,   208,   189,   105,   182,  -138,    66,   183,
    -138,    66,   185,   186,  -138,   191,   188,  -138,   187,   219,
     190,   220,    29,  -138,   175,    29,    66,    29,    66,   195,
     175,   105,   192,   194,   196,   198,  -138,  -138,  -138,   200,
      29,   203,    29,  -138,   199,  -138,   202,   204,   205,    29,
      29,   206,   207,   209,   210,  -138,  -138
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,   240,  -138,  -138,    81,  -138,  -138,    31,    98,   246,
     -43,  -138,   -67,  -138,   -94,  -138,  -138,    47,  -138,   232,
    -138,  -138,   -52,  -138,  -137,  -138,  -106,   -25,  -138,  -138,
    -138,  -138,   193,   -45,  -138,   211
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -64
static const yytype_int16 yytable[] =
{
      62,    50,   101,   124,    39,     2,     3,     4,     5,     6,
      71,   151,   173,     5,     6,   124,   124,   124,    49,    49,
     124,   105,   152,   174,    13,   124,   124,   138,   139,   140,
       6,    10,   153,    53,    54,   182,    18,   157,   158,    10,
      55,    44,   187,    20,   108,    45,    -8,   106,    21,    51,
      52,    51,    52,   124,    93,    94,   134,   110,   180,   181,
     124,   128,   113,    22,    65,   168,   107,    53,    54,    53,
      54,    23,   176,   133,    55,    49,    55,    35,    36,    37,
     161,    31,   154,    24,   155,   156,    56,    57,    56,    57,
      58,    59,    58,    59,    34,    35,    36,    37,   124,   175,
      14,    15,    16,    25,   124,   162,    45,   163,    32,    33,
     211,    35,    36,    37,   114,   115,   217,    30,   116,   117,
     118,   193,   194,    40,    74,    75,    76,    77,    78,    79,
      80,    81,    41,    43,     1,    82,     2,     3,     4,     5,
       6,   119,    42,    65,    67,    98,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    68,    69,   209,    70,    96,
     212,    97,   214,   198,    98,   100,   200,   112,   103,   129,
     131,   132,   130,   159,   111,   224,   127,   226,   137,   160,
     169,   213,   166,   215,   231,   232,    35,    36,    37,   114,
     115,   167,   164,   116,   117,   118,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   141,   142,   143,   144,   145,   146,
     147,   148,   165,   170,   171,   172,   119,   178,   177,   179,
     183,   134,   188,   -63,   135,   190,   134,   184,   186,   191,
     192,   149,   189,   202,   199,   197,   201,   203,   204,   205,
     206,   208,   207,   216,   223,   219,   220,   225,    19,   221,
     222,    17,   227,   235,   236,   228,   229,   230,   218,   233,
     234,    38,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,    72
};

static const yytype_int16 yycheck[] =
{
      45,    44,    69,   109,    29,     5,     6,     7,     8,     9,
      55,    41,    41,     8,     9,   121,   122,   123,    43,    44,
     126,    73,    52,    52,    41,   131,   132,   121,   122,   123,
       9,     0,   126,    40,    41,   172,     0,   131,   132,     8,
      47,    47,   179,     4,    96,    51,    46,    92,    42,    22,
      23,    22,    23,   159,    22,    23,    49,   100,    51,    52,
     166,   113,   107,    41,    49,   159,    51,    40,    41,    40,
      41,    41,   166,   118,    47,   100,    47,    11,    12,    13,
      53,    46,   127,    45,   129,   130,    59,    60,    59,    60,
      63,    64,    63,    64,    10,    11,    12,    13,   204,   166,
       2,     3,     4,    42,   210,   150,    51,    52,    27,    28,
     204,    11,    12,    13,    14,    15,   210,    43,    18,    19,
      20,    16,    17,    44,    32,    33,    34,    35,    36,    37,
      38,    39,    41,    47,     3,    43,     5,     6,     7,     8,
       9,    41,    41,    49,    48,    45,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    41,    48,   202,    52,    41,
     205,    44,   207,   188,    45,    49,   191,    44,    48,    47,
      44,    44,    47,    44,    53,   220,    52,   222,    46,    41,
      52,   206,    48,   208,   229,   230,    11,    12,    13,    14,
      15,    48,    53,    18,    19,    20,    24,    25,    26,    27,
      28,    29,    30,    31,    24,    25,    26,    27,    28,    29,
      30,    31,    53,    52,    44,    53,    41,    53,    45,    53,
      51,    49,    21,    51,    52,    44,    49,    53,    52,    21,
      41,    51,    53,    47,    51,    53,    51,    46,    50,    52,
      21,    21,    52,    48,    44,    53,    52,    44,     8,    53,
      52,     5,    53,    44,    44,    53,    52,    52,   211,    53,
      53,    29,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    61
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     8,     9,    66,    67,    68,
      72,    73,    74,    41,    73,    73,    73,    74,     0,    66,
       4,    42,    41,    41,    45,    42,    69,    70,    71,    72,
      43,    46,    69,    69,    10,    11,    12,    13,    84,    92,
      44,    41,    41,    47,    47,    51,    86,    75,    76,    92,
      75,    22,    23,    40,    41,    47,    59,    60,    63,    64,
      91,    96,    98,    99,   100,    49,    87,    48,    41,    48,
      52,    98,   100,    85,    32,    33,    34,    35,    36,    37,
      38,    39,    43,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    95,    22,    23,    97,    41,    44,    45,    77,
      49,    77,    98,    48,    97,    87,    98,    51,    87,    78,
      75,    53,    44,    98,    14,    15,    18,    19,    20,    41,
      79,    84,    88,    90,    91,    92,    93,    52,    87,    47,
      47,    44,    44,    98,    49,    52,    89,    46,    79,    79,
      79,    24,    25,    26,    27,    28,    29,    30,    31,    51,
      94,    41,    52,    79,    98,    98,    98,    79,    79,    44,
      41,    53,    98,    52,    53,    53,    48,    48,    79,    52,
      52,    44,    53,    41,    52,    77,    79,    45,    53,    53,
      51,    52,    89,    51,    53,    80,    52,    89,    21,    53,
      44,    21,    41,    16,    17,    82,    83,    53,    92,    51,
      92,    51,    47,    46,    50,    52,    21,    52,    21,    98,
      81,    79,    98,    92,    98,    92,    48,    79,    82,    53,
      52,    53,    52,    44,    98,    44,    98,    53,    53,    52,
      52,    98,    98,    53,    53,    44,    44
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 52 "sym.y"
    {funcend();}
    break;

  case 24:
#line 98 "sym.y"
    {scope+=1;}
    break;

  case 25:
#line 98 "sym.y"
    {scopered(scope);scope-=1;}
    break;

  case 32:
#line 108 "sym.y"
    {scope+=1;}
    break;

  case 33:
#line 108 "sym.y"
    {scopered(scope);scope-=1;}
    break;

  case 43:
#line 127 "sym.y"
    {
			//printf("declaration: $$=%s $1=%s $2=%s $4=%s\n",$$, $1, $2, $4);
			insert((yyvsp[(2) - (4)]), atoi((yyvsp[(4) - (4)])), (yyvsp[(1) - (4)]));
			//strcpy(type,$1);
		}
    break;

  case 45:
#line 134 "sym.y"
    {
			//printf("declaration: $$=%s $1=%s $2=%s $4=%s\n",$$, $1, $2, $4);
			insert((yyvsp[(2) - (2)]), 0, (yyvsp[(1) - (2)]));
			//strcpy(type,$1);
		}
    break;

  case 47:
#line 144 "sym.y"
    {
			//printf("declaration: $$=%s $1=%s $2=%s $4=%s\n",$$, $1, $2, $4);
			insert((yyvsp[(2) - (5)]), atoi((yyvsp[(4) - (5)])), type);
		}
    break;

  case 48:
#line 149 "sym.y"
    {
			//printf("declaration: $$=%s $1=%s $2=%s $4=%s\n",$$, $1, $2, $4);
			insert((yyvsp[(2) - (3)]), 0, type);
		}
    break;

  case 67:
#line 190 "sym.y"
    {
		//printf("declaration: $$=%s $1=%s $2=%s $3=%s\n",$$, $1, $2, $3);
		if(exists((yyvsp[(1) - (4)]))){
			update((yyvsp[(1) - (4)]),atoi((yyvsp[(3) - (4)])));
		}
		else
		{
			printf("Variable %s not declared\n",(yyvsp[(1) - (4)]));
		}
	}
    break;

  case 104:
#line 251 "sym.y"
    {	//printf("scope %d\n",scope);
			//printf("expr Infix expr: %s = %s %s %s\n",$$, $1, $2, $3);
			/*$$ = calculate_infix($1, $3, $2);
			printf("result: %d\n", $$);*/
		}
    break;

  case 105:
#line 258 "sym.y"
    {printf("exp pretfix: %s = %s %s \n",(yyval), (yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));/* $$ = calculate_postfix($1, $2); printf("postfix expression: %d\n", $$);*/ }
    break;

  case 107:
#line 260 "sym.y"
    {printf("exp postfix: %s = %s %s \n",(yyval), (yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])); /*$$ = calculate_postfix($1, $2); printf("postfix expression: %d\n", $$);*/ }
    break;

  case 110:
#line 266 "sym.y"
    {if(exists((yyvsp[(1) - (1)]))){
	NODE* temp = s->head;
	while(temp != NULL)
	{
		if(strcmp(temp->name,(yyvsp[(1) - (1)])) == 0 && temp->scope <= scope)
			sprintf((yyval),"%d\n",temp->value);
		temp = temp->next;
	}
	}
	else
	{
		printf("Variable %s not declared\n",(yyvsp[(1) - (1)]));
	}}
    break;

  case 111:
#line 279 "sym.y"
    {/*printf("num: %s\n ",$1); $$=atoi($1);*/}
    break;


/* Line 1267 of yacc.c.  */
#line 1754 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 282 "sym.y"

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

