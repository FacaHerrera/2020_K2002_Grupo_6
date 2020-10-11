
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "ejemplo.y"


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern int yylex();
int yyerror (char* );
int yywrap(){
return(1);
}

extern FILE* yyin;
extern FILE* yyout;

char* tipoDatoVariable;
char* tipoDatoFuncion;
char* tipoDatoParametro;
char* nombreFuncion;
char* nombreID;

int contadorVariables = 0;
int contadorParametros = 0;



/* Line 189 of yacc.c  */
#line 101 "ejemplo.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     REAL = 258,
     ENTERO = 259,
     LITERAL_CADENA = 260,
     OR = 261,
     AND = 262,
     IGUALDAD = 263,
     DESIGUALDAD = 264,
     MAYORIGUAL = 265,
     MENORIGUAL = 266,
     INCREMENTO = 267,
     DECREMENTO = 268,
     ASIGNACION_INCREMENTO = 269,
     ASIGNACION_DECREMENTO = 270,
     ASIGNACION_PRODUCTO = 271,
     ASIGNACION_DIVISION = 272,
     FLECHA = 273,
     IF = 274,
     ELSE = 275,
     SWITCH = 276,
     WHILE = 277,
     DO = 278,
     FOR = 279,
     RETURN = 280,
     CONTINUE = 281,
     BREAK = 282,
     CASE = 283,
     DEFAULT = 284,
     GOTO = 285,
     TIPO_DATO = 286,
     CLASE_ALMACENAMIENTO = 287,
     STRUCT_UNION = 288,
     ID = 289,
     SIZEOF = 290,
     MAYORIGUAl = 291
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 28 "ejemplo.y"

  int ival;
  double dval;
  char cval[30];



/* Line 214 of yacc.c  */
#line 181 "ejemplo.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 193 "ejemplo.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   507

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNRULES -- Number of states.  */
#define YYNSTATES  278

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,    43,    58,     2,
      44,    45,    41,    39,    47,    40,    54,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    46,
      37,    48,    36,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,    56,     2,     2,     2,
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
      35,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    14,    18,    19,
      21,    24,    27,    28,    30,    32,    36,    38,    42,    44,
      48,    50,    54,    56,    58,    60,    64,    69,    71,    74,
      78,    81,    82,    84,    85,    89,    91,    95,    97,   101,
     104,   106,   107,   109,   111,   116,   121,   126,   128,   134,
     135,   137,   139,   143,   146,   149,   150,   152,   156,   159,
     162,   164,   166,   167,   169,   173,   176,   178,   182,   186,
     188,   190,   192,   194,   196,   198,   201,   203,   207,   208,
     211,   214,   216,   219,   220,   222,   224,   227,   229,   232,
     238,   246,   252,   258,   266,   276,   281,   285,   289,   293,
     296,   299,   303,   305,   309,   310,   312,   314,   318,   320,
     326,   327,   329,   331,   333,   335,   337,   339,   341,   345,
     347,   351,   353,   357,   361,   363,   367,   371,   375,   379,
     381,   385,   389,   391,   395,   399,   403,   405,   408,   411,
     414,   417,   420,   423,   426,   429,   434,   439,   441,   446,
     451,   455,   459,   462,   465,   467,   469,   471,   473,   477,
     478,   480,   484,   486,   488
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    -1,    60,    61,    -1,   121,    -1,    93,
      -1,     1,    46,    -1,    64,    65,    46,    -1,    -1,    64,
      -1,    70,    63,    -1,    71,    63,    -1,    -1,    66,    -1,
      67,    -1,    66,    47,    67,    -1,    80,    -1,    80,    48,
      68,    -1,   107,    -1,    49,    69,    50,    -1,    68,    -1,
      69,    47,    68,    -1,    32,    -1,    31,    -1,    72,    -1,
      33,    34,    77,    -1,    33,    49,    73,    50,    -1,    74,
      -1,    73,    74,    -1,    75,    78,    46,    -1,    71,    76,
      -1,    -1,    75,    -1,    -1,    49,    73,    50,    -1,    79,
      -1,    78,    47,    79,    -1,    80,    -1,    81,    51,   108,
      -1,   100,    82,    -1,    82,    -1,    -1,    80,    -1,    34,
      -1,    82,    52,   109,    53,    -1,    82,    44,    83,    45,
      -1,    82,    44,    87,    45,    -1,    85,    -1,    85,    47,
      54,    54,    54,    -1,    -1,    83,    -1,    86,    -1,    85,
      47,    86,    -1,    64,    80,    -1,    64,    89,    -1,    -1,
      34,    -1,    87,    47,    34,    -1,    75,    90,    -1,   100,
      91,    -1,    91,    -1,   100,    -1,    -1,    89,    -1,    44,
      89,    45,    -1,    91,    92,    -1,    92,    -1,    52,   109,
      53,    -1,    44,    84,    45,    -1,    95,    -1,    94,    -1,
     101,    -1,   102,    -1,   104,    -1,   103,    -1,   105,    46,
      -1,    46,    -1,    49,    96,    50,    -1,    -1,    96,    97,
      -1,    96,    99,    -1,    62,    -1,    97,    62,    -1,    -1,
      97,    -1,    93,    -1,    99,    93,    -1,    41,    -1,    41,
     100,    -1,    19,    44,   105,    45,    93,    -1,    19,    44,
     105,    45,    93,    20,    93,    -1,    21,    44,   105,    45,
      93,    -1,    22,    44,   105,    45,    93,    -1,    23,    93,
      22,    44,   105,    45,    46,    -1,    24,    44,   106,    46,
     106,    46,   106,    45,    93,    -1,    28,   108,    51,    93,
      -1,    29,    51,    93,    -1,    34,    51,    93,    -1,    25,
     106,    46,    -1,    27,    46,    -1,    26,    46,    -1,    30,
      34,    46,    -1,   107,    -1,   105,    47,   107,    -1,    -1,
     105,    -1,   108,    -1,   117,   110,   107,    -1,   111,    -1,
     111,    55,   105,    51,   108,    -1,    -1,   108,    -1,    48,
      -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,   112,
      -1,   111,     6,   112,    -1,   113,    -1,   112,     7,   113,
      -1,   114,    -1,   113,     8,   114,    -1,   113,     9,   114,
      -1,   115,    -1,   114,    37,   115,    -1,   114,    36,   115,
      -1,   114,    11,   115,    -1,   114,    10,   115,    -1,   116,
      -1,   115,    39,   116,    -1,   115,    40,   116,    -1,   117,
      -1,   116,    41,   117,    -1,   116,    42,   117,    -1,   116,
      43,   117,    -1,   118,    -1,    12,   117,    -1,    13,   117,
      -1,    40,   117,    -1,    39,   117,    -1,    56,   117,    -1,
      57,   117,    -1,    58,   117,    -1,   100,   117,    -1,    35,
      44,   117,    45,    -1,    35,    44,    88,    45,    -1,   119,
      -1,   118,    52,   105,    53,    -1,   118,    44,   120,    45,
      -1,   118,    54,    34,    -1,   118,    18,    34,    -1,   118,
      12,    -1,   118,    13,    -1,    34,    -1,     4,    -1,     3,
      -1,     5,    -1,    44,   105,    45,    -1,    -1,   107,    -1,
     120,    47,   107,    -1,   122,    -1,    62,    -1,    64,    80,
      98,    95,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    83,    86,    87,    88,    92,    95,    96,
      99,   100,   103,   104,   107,   108,   111,   112,   115,   116,
     119,   120,   123,   126,   127,   130,   131,   134,   135,   138,
     141,   144,   145,   148,   149,   152,   153,   156,   157,   160,
     161,   164,   165,   168,   169,   170,   171,   174,   175,   178,
     179,   182,   183,   186,   187,   190,   191,   192,   195,   198,
     199,   200,   203,   204,   207,   208,   209,   212,   213,   217,
     218,   219,   220,   221,   222,   225,   226,   229,   232,   233,
     234,   237,   238,   241,   242,   245,   246,   249,   250,   253,
     254,   255,   258,   259,   260,   263,   264,   265,   268,   269,
     270,   271,   275,   276,   279,   280,   283,   284,   287,   288,
     291,   292,   295,   296,   297,   298,   299,   302,   303,   306,
     307,   310,   311,   312,   315,   316,   317,   318,   319,   322,
     323,   324,   327,   328,   329,   330,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   346,   347,   348,
     349,   350,   351,   352,   355,   356,   357,   358,   359,   362,
     363,   364,   368,   369,   372
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "ENTERO", "LITERAL_CADENA", "OR",
  "AND", "IGUALDAD", "DESIGUALDAD", "MAYORIGUAL", "MENORIGUAL",
  "INCREMENTO", "DECREMENTO", "ASIGNACION_INCREMENTO",
  "ASIGNACION_DECREMENTO", "ASIGNACION_PRODUCTO", "ASIGNACION_DIVISION",
  "FLECHA", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "RETURN",
  "CONTINUE", "BREAK", "CASE", "DEFAULT", "GOTO", "TIPO_DATO",
  "CLASE_ALMACENAMIENTO", "STRUCT_UNION", "ID", "SIZEOF", "'>'", "'<'",
  "MAYORIGUAl", "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'", "';'",
  "','", "'='", "'{'", "'}'", "':'", "'['", "']'", "'.'", "'?'", "'~'",
  "'!'", "'&'", "$accept", "input", "line", "declaracion",
  "especDeclaracionBis", "especDeclaracion", "listaDeclaradoresBis",
  "listaDeclaradores", "declarador", "inicializador",
  "listaDeInicializadores", "especClase", "especTipo", "especStructUnion",
  "listaDeclaracionesStruct", "declaracionStruct", "listaCalificadores",
  "listaCalificadoresBis", "opcionLista", "declaradoresStruct",
  "declaStruct", "decla", "declaBis", "declaradorDirecto",
  "listaTiposParametros", "listaTiposParametrosBis", "listaParametros",
  "declaracionParametro", "listaIdentificadores", "nombreTipo",
  "declaradorAbstracto", "declaradorAbstractoBis",
  "declaradorAbstractoDirecto", "opcionExpresion", "sentencia",
  "sentExpresion", "sentCompuesta", "decalracionOSentencia",
  "listaDeclaraciones", "listaDeclaracionesBis", "listaSentencias",
  "puntero", "sentSeleccion", "sentIteracion", "sentEtiquetada",
  "sentSalto", "exp", "expOp", "expAsignacion", "expCondicional",
  "expCondicionalBis", "operAsignacion", "expOr", "expAnd", "expIgualdad",
  "expRelacional", "expAditiva", "expMultiplicativa", "expUnaria",
  "expSufijo", "expPrimaria", "listaArgumentos", "declaracionExterna",
  "definicionFuncion", 0
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
     285,   286,   287,   288,   289,   290,    62,    60,   291,    43,
      45,    42,    47,    37,    40,    41,    59,    44,    61,   123,
     125,    58,    91,    93,    46,    63,   126,    33,    38
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    61,    61,    61,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      69,    69,    70,    71,    71,    72,    72,    73,    73,    74,
      75,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    82,    82,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    87,    88,    89,
      89,    89,    90,    90,    91,    91,    91,    92,    92,    93,
      93,    93,    93,    93,    93,    94,    94,    95,    96,    96,
      96,    97,    97,    98,    98,    99,    99,   100,   100,   101,
     101,   101,   102,   102,   102,   103,   103,   103,   104,   104,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   110,   110,   110,   111,   111,   112,
     112,   113,   113,   113,   114,   114,   114,   114,   114,   115,
     115,   115,   116,   116,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   118,   118,   118,
     118,   118,   118,   118,   119,   119,   119,   119,   119,   120,
     120,   120,   121,   121,   122
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     3,     0,     1,
       2,     2,     0,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     3,     4,     1,     2,     3,
       2,     0,     1,     0,     3,     1,     3,     1,     3,     2,
       1,     0,     1,     1,     4,     4,     4,     1,     5,     0,
       1,     1,     3,     2,     2,     0,     1,     3,     2,     2,
       1,     1,     0,     1,     3,     2,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     0,     2,
       2,     1,     2,     0,     1,     1,     2,     1,     2,     5,
       7,     5,     5,     7,     9,     4,     3,     3,     3,     2,
       2,     3,     1,     3,     0,     1,     1,     3,     1,     5,
       0,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     4,     4,     1,     4,     4,
       3,     3,     2,     2,     1,     1,     1,     1,     3,     0,
       1,     3,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,   156,   155,   157,     0,     0,     0,
       0,     0,     0,     0,   104,     0,     0,     0,     0,     0,
      23,    22,     0,   154,     0,     0,     0,    87,     0,    76,
      78,     0,     0,     0,     3,   163,    12,     8,     8,    24,
       5,    70,    69,     0,    71,    72,    74,    73,     0,   102,
     106,   108,   117,   119,   121,   124,   129,   132,   136,   147,
       4,   162,     6,   154,   137,   138,     0,     0,     0,     0,
     104,   105,     0,   100,    99,     0,   132,     0,     0,    33,
       0,     0,     0,   140,   139,    88,     0,     0,   141,   142,
     143,    43,     0,    13,    14,    16,    40,     0,    10,     9,
      11,   144,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   114,
     115,   116,   112,     0,   152,   153,     0,   159,     0,     0,
       0,     0,     0,     0,     0,    98,     0,    96,   101,     0,
      25,    31,     0,    27,    41,    97,    62,     0,     0,   158,
      77,    81,    12,    85,    79,    80,     7,     0,     0,    84,
       0,    55,   110,    39,   103,   118,     0,   120,   122,   123,
     128,   127,   126,   125,   130,   131,   133,   134,   135,   107,
     151,   160,     0,     0,   150,     0,     0,     0,     0,   104,
      95,     0,    32,    30,    26,    28,     0,    35,    37,     0,
      49,   110,    63,    58,    60,    66,    61,   146,   145,    16,
      82,    86,    15,     0,    17,    18,   164,    56,     0,     0,
      47,    51,     0,   111,     0,     0,   149,     0,   148,    89,
      91,    92,     0,     0,    34,    29,    41,     0,    50,     0,
       0,     0,    49,    65,    59,    20,     0,    53,    54,    61,
      45,     0,    46,     0,    44,   109,   161,     0,     0,   104,
      36,    38,    68,    64,    67,     0,    19,     0,    52,    57,
      90,    93,     0,    21,     0,     0,    48,    94
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    34,   151,    98,   152,    92,    93,    94,   214,
     246,    37,    38,    39,   142,   143,   144,   193,   140,   196,
     197,   198,   199,    96,   238,   239,   220,   221,   222,   147,
     202,   203,   204,   205,    40,    41,    42,    87,   154,   160,
     155,    43,    44,    45,    46,    47,    48,    72,    49,    50,
     224,   123,    51,    52,    53,    54,    55,    56,    57,    58,
      59,   182,    60,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -199
static const yytype_int16 yypact[] =
{
    -199,   249,  -199,    12,  -199,  -199,  -199,   449,   449,    -8,
       3,    24,   344,    42,   449,    17,    47,   449,    70,    96,
    -199,  -199,    50,    90,   100,   449,   449,  -199,   449,  -199,
    -199,   449,   449,   449,  -199,  -199,    85,   148,   148,  -199,
    -199,  -199,  -199,   449,  -199,  -199,  -199,  -199,   164,  -199,
    -199,    19,   165,   139,    41,   173,   144,    18,    36,  -199,
    -199,  -199,  -199,  -199,  -199,  -199,   449,   449,   449,   129,
     449,   135,   130,  -199,  -199,   138,  -199,   344,   147,   169,
     125,   344,   391,  -199,  -199,  -199,   145,   296,  -199,  -199,
    -199,  -199,   168,   178,  -199,   106,   -28,   192,  -199,  -199,
    -199,  -199,  -199,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,  -199,  -199,
    -199,  -199,  -199,   449,  -199,  -199,   194,   449,   449,   195,
     149,   152,   157,   186,   185,  -199,   344,  -199,  -199,   125,
    -199,   125,    52,  -199,    85,  -199,   105,   187,   188,  -199,
    -199,  -199,    85,  -199,   148,   344,  -199,    85,   402,   148,
     189,   132,   449,   -28,  -199,   165,    69,   139,    41,    41,
     173,   173,   173,   173,   144,   144,  -199,  -199,  -199,  -199,
    -199,  -199,   158,    44,  -199,   344,   344,   344,   449,   449,
    -199,    65,  -199,  -199,  -199,  -199,   170,  -199,   184,   190,
     101,   449,  -199,  -199,     1,  -199,    43,  -199,  -199,   191,
    -199,  -199,  -199,   402,  -199,  -199,  -199,  -199,    48,   198,
     193,  -199,   161,  -199,   183,   449,  -199,   449,  -199,   217,
    -199,  -199,   162,   200,  -199,  -199,    85,   449,  -199,   199,
     202,   203,   148,  -199,     1,  -199,    81,  -199,  -199,   -13,
    -199,    10,  -199,   221,  -199,  -199,  -199,   344,   211,   449,
    -199,  -199,  -199,  -199,  -199,   402,  -199,   204,  -199,  -199,
    -199,  -199,   214,  -199,   206,   344,  -199,  -199
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -199,  -199,  -199,     8,   226,     0,  -199,  -199,   108,  -198,
    -199,  -199,   -69,  -199,   127,  -115,   -70,  -199,  -199,  -199,
      31,   -34,  -199,   -89,   124,  -199,  -199,    35,  -199,  -199,
    -156,  -199,  -188,  -184,   -12,  -199,   109,  -199,   196,  -199,
    -199,   -17,  -199,  -199,  -199,  -199,   -11,   -64,   -77,   -10,
      86,  -199,  -199,   207,   197,   113,    59,   110,    -3,  -199,
    -199,  -199,  -199,  -199
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -84
static const yytype_int16 yytable[] =
{
      69,    36,    95,    71,    64,    65,   134,    75,   163,    35,
      85,   141,   146,   141,    76,   245,   161,    86,   244,    97,
     243,    91,    83,    84,   162,   104,   164,   195,    88,    89,
      90,   200,   118,   119,   120,   121,    66,    99,    99,   201,
     101,    20,    21,    22,   240,   242,   179,    67,   124,   125,
     181,   109,   110,   201,   126,   130,   131,   132,    62,    71,
     243,   244,   248,    73,   267,   137,   122,   273,    68,   145,
     141,   192,   141,   141,   105,   153,   195,   111,   112,   148,
     127,   215,    91,    20,    79,    22,    70,   200,   128,    27,
     129,   103,   200,    74,   166,   201,    20,   228,    22,    80,
     201,    76,   194,    76,    76,    76,    76,    76,    76,    76,
      76,    76,   176,   177,   178,   234,   103,   183,   209,    91,
     225,    77,   141,   209,   190,   233,    27,    97,   265,   206,
      78,   266,    20,    21,    22,    97,   215,    20,    21,    22,
      97,    81,    27,   211,    82,   200,    27,   107,   108,   200,
     256,   133,   223,   201,   158,   -83,    20,   201,    22,    76,
     163,   218,   210,    20,    21,    22,   217,   210,   170,   171,
     172,   173,   106,   229,   230,   231,   135,   232,    71,    20,
      21,    22,   103,   206,   247,   115,   116,   117,   215,   136,
     149,   223,   103,   138,   185,   272,   103,   186,    76,   103,
     218,   249,   187,   226,   103,   227,   252,   258,   253,   103,
     102,   103,   113,   114,   156,   255,   235,   236,   139,    97,
     168,   169,    76,   174,   175,   157,    91,   261,   180,   184,
     188,   189,   207,   208,    76,   -42,   254,   257,    30,   158,
     251,   237,   218,   250,   262,   270,   259,   263,    71,     2,
       3,   218,     4,     5,     6,   269,   264,   271,   274,   275,
     276,     7,     8,   277,   100,   212,   191,   260,     9,   216,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   219,   268,   241,    25,    26,
      27,   159,     0,    28,     0,    29,     0,     0,    30,     4,
       5,     6,     0,   167,     0,    31,    32,    33,     7,     8,
       0,   165,     0,     0,     0,     9,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,     0,    25,    26,    27,     0,     0,
      28,     0,    29,     0,     0,    30,   150,     4,     5,     6,
       0,     0,    31,    32,    33,     0,     7,     8,     0,     0,
       0,     0,     0,     9,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,    23,    24,
       0,     0,     0,    25,    26,    27,     0,     0,    28,     0,
      29,     0,     0,    30,     4,     5,     6,     0,     0,     0,
      31,    32,    33,     7,     8,     4,     5,     6,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,     0,    20,     0,    22,    63,    24,     0,     0,     0,
      25,    26,    27,     0,     0,    28,    63,    24,     0,     0,
       0,    25,    26,    27,     0,     0,    28,    31,    32,    33,
       0,   213,     4,     5,     6,     0,     0,     0,    31,    32,
      33,     7,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,    24,     0,     0,     0,    25,    26,
      27,     0,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33
};

static const yytype_int16 yycheck[] =
{
      12,     1,    36,    14,     7,     8,    70,    17,    97,     1,
      27,    80,    82,    82,    17,   213,    44,    28,   206,    36,
     204,    34,    25,    26,    52,     6,   103,   142,    31,    32,
      33,    44,    14,    15,    16,    17,    44,    37,    38,    52,
      43,    31,    32,    33,   200,    44,   123,    44,    12,    13,
     127,    10,    11,    52,    18,    66,    67,    68,    46,    70,
     244,   249,   218,    46,    54,    77,    48,   265,    44,    81,
     139,   141,   141,   142,    55,    87,   191,    36,    37,    82,
      44,   158,    34,    31,    34,    33,    44,    44,    52,    41,
      54,    47,    44,    46,   105,    52,    31,    53,    33,    49,
      52,   104,    50,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,    50,    47,   128,   152,    34,
      51,    51,   191,   157,   136,   189,    41,   144,    47,   146,
      34,    50,    31,    32,    33,   152,   213,    31,    32,    33,
     157,    51,    41,   155,    44,    44,    41,     8,     9,    44,
     227,    22,   162,    52,    48,    49,    31,    52,    33,   162,
     249,   161,   154,    31,    32,    33,    34,   159,   109,   110,
     111,   112,     7,   185,   186,   187,    46,   188,   189,    31,
      32,    33,    47,   200,   218,    41,    42,    43,   265,    51,
      45,   201,    47,    46,    45,   259,    47,    45,   201,    47,
     200,   218,    45,    45,    47,    47,    45,    45,    47,    47,
      46,    47,    39,    40,    46,   225,    46,    47,    49,   236,
     107,   108,   225,   113,   114,    47,    34,   237,    34,    34,
      44,    46,    45,    45,   237,    51,    53,    20,    49,    48,
      47,    51,   242,    45,    45,   257,    46,    45,   259,     0,
       1,   251,     3,     4,     5,    34,    53,    46,    54,    45,
      54,    12,    13,   275,    38,   157,   139,   236,    19,   160,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   161,   251,   201,    39,    40,
      41,    95,    -1,    44,    -1,    46,    -1,    -1,    49,     3,
       4,     5,    -1,   106,    -1,    56,    57,    58,    12,    13,
      -1,   104,    -1,    -1,    -1,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    -1,    46,    -1,    -1,    49,    50,     3,     4,     5,
      -1,    -1,    56,    57,    58,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    34,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    -1,
      46,    -1,    -1,    49,     3,     4,     5,    -1,    -1,    -1,
      56,    57,    58,    12,    13,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    56,    57,    58,
      -1,    49,     3,     4,     5,    -1,    -1,    -1,    56,    57,
      58,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,     0,     1,     3,     4,     5,    12,    13,    19,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    39,    40,    41,    44,    46,
      49,    56,    57,    58,    61,    62,    64,    70,    71,    72,
      93,    94,    95,   100,   101,   102,   103,   104,   105,   107,
     108,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     121,   122,    46,    34,   117,   117,    44,    44,    44,    93,
      44,   105,   106,    46,    46,   108,   117,    51,    34,    34,
      49,    51,    44,   117,   117,   100,   105,    96,   117,   117,
     117,    34,    65,    66,    67,    80,    82,   100,    63,    64,
      63,   117,    46,    47,     6,    55,     7,     8,     9,    10,
      11,    36,    37,    39,    40,    41,    42,    43,    14,    15,
      16,    17,    48,   110,    12,    13,    18,    44,    52,    54,
     105,   105,   105,    22,   106,    46,    51,    93,    46,    49,
      77,    71,    73,    74,    75,    93,    75,    88,   117,    45,
      50,    62,    64,    93,    97,    99,    46,    47,    48,    97,
      98,    44,    52,    82,   107,   112,   105,   113,   114,   114,
     115,   115,   115,   115,   116,   116,   117,   117,   117,   107,
      34,   107,   120,   105,    34,    45,    45,    45,    44,    46,
      93,    73,    75,    76,    50,    74,    78,    79,    80,    81,
      44,    52,    89,    90,    91,    92,   100,    45,    45,    80,
      62,    93,    67,    49,    68,   107,    95,    34,    64,    83,
      85,    86,    87,   108,   109,    51,    45,    47,    53,    93,
      93,    93,   105,   106,    50,    46,    47,    51,    83,    84,
      89,   109,    44,    92,    91,    68,    69,    80,    89,   100,
      45,    47,    45,    47,    53,   108,   107,    20,    45,    46,
      79,   108,    45,    45,    53,    47,    50,    54,    86,    34,
      93,    46,   106,    68,    54,    45,    54,    93
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 6:

/* Line 1455 of yacc.c  */
#line 88 "ejemplo.y"
    {yyerrok; ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 92 "ejemplo.y"
    {tipoDatoFuncion = (yyvsp[(1) - (3)].cval); nombreFuncion = (yyvsp[(2) - (3)].cval);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 168 "ejemplo.y"
    {printf("Se declara la variable %s de tipo %s  \n",nombreFuncion,tipoDatoFuncion); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 169 "ejemplo.y"
    {printf("Se declara el arreglo %s de tipo %s  \n",nombreFuncion,tipoDatoFuncion); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 170 "ejemplo.y"
    {printf("Se declara la funcion %s con %d parametros y devolucion de tipo %s  \n",nombreFuncion,contadorParametros,tipoDatoFuncion); contadorParametros = 0; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 171 "ejemplo.y"
    {printf("Se invoca la funcion %s con %d parametros y devolucion de tipo %s  \n",nombreFuncion,contadorParametros,tipoDatoFuncion); contadorParametros = 0; ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 182 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 183 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 191 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 192 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 229 "ejemplo.y"
    {printf("Se encontro una Sentencia Compuesta. \n"); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 253 "ejemplo.y"
    {printf("Se encontro una Sentencia de Seleccion IF.\n"); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 254 "ejemplo.y"
    {printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n"); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 255 "ejemplo.y"
    {printf("Se enconto una Sentencia de Seleccion SWITCH.\n"); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 258 "ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion WHILE.\n"); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 259 "ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion DO WHILE.\n"); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 260 "ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion FOR.\n"); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 263 "ejemplo.y"
    {printf("Se encontro una Sentencia de Etiqueta CASE.\n"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 264 "ejemplo.y"
    {printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 268 "ejemplo.y"
    {printf("Se encontro una Sentencia de Salto RETURN. \n"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 269 "ejemplo.y"
    {printf("Se encontro una Sentencia de Salto BREAK.\n"); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 270 "ejemplo.y"
    {printf("Se encontro una Sentencia de Salto CONTINUE.\n"); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 271 "ejemplo.y"
    {printf("Se encontro una Sentencia de Salto GOTO. \n"); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 284 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(3) - (3)].dval); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 288 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 303 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 307 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 311 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 312 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 316 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 317 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 318 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 319 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 323 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 324 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 328 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 329 "ejemplo.y"
    {if((yyvsp[(3) - (3)].dval) == 0) {printf("ERROR/: No se puede dividir por 0 \n"); return 1; } else (yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 330 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].ival) % (yyvsp[(3) - (3)].ival); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 334 "ejemplo.y"
    {(yyval.dval) = ++ (yyvsp[(2) - (2)].dval); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 335 "ejemplo.y"
    {(yyval.dval) = -- (yyvsp[(2) - (2)].dval); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 336 "ejemplo.y"
    {(yyval.dval) = - (yyvsp[(2) - (2)].dval); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 337 "ejemplo.y"
    {(yyval.dval) = + (yyvsp[(2) - (2)].dval); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 338 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 339 "ejemplo.y"
    {(yyval.dval) = ! (yyvsp[(2) - (2)].dval); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 340 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 341 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 342 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 343 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 347 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 348 "ejemplo.y"
    {(yyval.dval) = 0; printf("Se invoco a la funcion %s \n",(yyvsp[(1) - (4)].cval)); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 349 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 350 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 351 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) ++; ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 352 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) --; ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 356 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 357 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 359 "ejemplo.y"
    {(yyval.dval) = ( (yyvsp[(2) - (3)].dval) ); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 368 "ejemplo.y"
    {printf("Se define la funcion %s con %d parametros y devolucion de tipo %s  \n",nombreFuncion,contadorParametros,tipoDatoFuncion); contadorParametros = 0; ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 372 "ejemplo.y"
    {nombreFuncion = (yyvsp[(2) - (4)].cval); tipoDatoFuncion = (yyvsp[(1) - (4)].cval);;}
    break;



/* Line 1455 of yacc.c  */
#line 2124 "ejemplo.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 376 "ejemplo.y"
 

int yyerror (char *mensaje) 
{
  printf ("Error Sintactico: %s\n", mensaje);
}

void main(){

   #ifdef BISON_DEBUG
        yydebug = 1;
#endif 
   printf("Ingrese una expresion para resolver:\n");
   yyout = fopen("salida.txt","w");
   yyin = fopen("entrada.txt", "r");
   yyparse();
}
