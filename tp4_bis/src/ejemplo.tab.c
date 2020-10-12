
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
int tip = 0;
int tipDecla = 0;
int cantidad = 0;



/* Line 189 of yacc.c  */
#line 104 "ejemplo.tab.c"

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
     ERROR_LEXICO = 286,
     NULL1 = 287,
     TIPO_DATO = 288,
     CLASE_ALMACENAMIENTO = 289,
     STRUCT_UNION = 290,
     ID = 291,
     SIZEOF = 292,
     CTE_CARACTER = 293
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 31 "ejemplo.y"

  int ival;
  double dval;
  char cval[30];



/* Line 214 of yacc.c  */
#line 186 "ejemplo.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 198 "ejemplo.tab.c"

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
#define YYLAST   540

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  163
/* YYNRULES -- Number of states.  */
#define YYNSTATES  275

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,     2,     2,    45,    60,     2,
      46,    47,    43,    41,    49,    42,    56,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    48,
      40,    50,    39,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,    58,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    16,    20,
      21,    23,    26,    29,    30,    32,    34,    38,    40,    44,
      46,    50,    52,    56,    58,    60,    62,    66,    71,    73,
      76,    80,    83,    84,    86,    87,    91,    93,    97,    99,
     103,   106,   108,   109,   111,   113,   118,   123,   125,   131,
     132,   134,   136,   140,   143,   146,   149,   152,   154,   156,
     157,   159,   163,   166,   168,   172,   176,   178,   180,   182,
     184,   186,   188,   191,   193,   197,   198,   201,   204,   206,
     209,   210,   212,   214,   217,   219,   222,   228,   236,   242,
     248,   256,   266,   271,   275,   279,   283,   286,   289,   293,
     295,   299,   300,   302,   304,   308,   310,   316,   317,   319,
     321,   323,   325,   327,   329,   331,   335,   337,   341,   343,
     347,   351,   353,   357,   361,   365,   369,   371,   375,   379,
     381,   385,   389,   393,   395,   398,   401,   404,   407,   410,
     413,   416,   419,   424,   429,   431,   436,   441,   445,   449,
     452,   455,   457,   459,   461,   463,   465,   467,   471,   472,
     474,   478,   480,   482
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    -1,    62,    63,    -1,   122,    -1,    94,
      -1,    31,    -1,     1,    48,    -1,    66,    67,    48,    -1,
      -1,    66,    -1,    72,    65,    -1,    73,    65,    -1,    -1,
      68,    -1,    69,    -1,    68,    49,    69,    -1,    82,    -1,
      82,    50,    70,    -1,   108,    -1,    51,    71,    52,    -1,
      70,    -1,    71,    49,    70,    -1,    34,    -1,    33,    -1,
      74,    -1,    35,    36,    79,    -1,    35,    51,    75,    52,
      -1,    76,    -1,    75,    76,    -1,    77,    80,    48,    -1,
      73,    78,    -1,    -1,    77,    -1,    -1,    51,    75,    52,
      -1,    81,    -1,    80,    49,    81,    -1,    82,    -1,    83,
      53,   109,    -1,   101,    84,    -1,    84,    -1,    -1,    82,
      -1,    36,    -1,    84,    54,   110,    55,    -1,    84,    46,
      85,    47,    -1,    87,    -1,    87,    49,    56,    56,    56,
      -1,    -1,    85,    -1,    88,    -1,    87,    49,    88,    -1,
      66,    82,    -1,    66,    90,    -1,    77,    91,    -1,   101,
      92,    -1,    92,    -1,   101,    -1,    -1,    90,    -1,    46,
      90,    47,    -1,    92,    93,    -1,    93,    -1,    54,   110,
      55,    -1,    46,    86,    47,    -1,    96,    -1,    95,    -1,
     102,    -1,   103,    -1,   105,    -1,   104,    -1,   106,    48,
      -1,    48,    -1,    51,    97,    52,    -1,    -1,    97,    98,
      -1,    97,   100,    -1,   122,    -1,    98,   122,    -1,    -1,
      98,    -1,    94,    -1,   100,    94,    -1,    43,    -1,    43,
     101,    -1,    19,    46,   106,    47,    94,    -1,    19,    46,
     106,    47,    94,    20,    94,    -1,    21,    46,   106,    47,
      94,    -1,    22,    46,   106,    47,    94,    -1,    23,    94,
      22,    46,   106,    47,    48,    -1,    24,    46,   107,    48,
     107,    48,   107,    47,    94,    -1,    28,   109,    53,    94,
      -1,    29,    53,    94,    -1,    36,    53,    94,    -1,    25,
     107,    48,    -1,    27,    48,    -1,    26,    48,    -1,    30,
      36,    48,    -1,   108,    -1,   106,    49,   108,    -1,    -1,
     106,    -1,   109,    -1,   118,   111,   108,    -1,   112,    -1,
     112,    57,   106,    53,   109,    -1,    -1,   109,    -1,    50,
      -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,   113,
      -1,   112,     6,   113,    -1,   114,    -1,   113,     7,   114,
      -1,   115,    -1,   114,     8,   115,    -1,   114,     9,   115,
      -1,   116,    -1,   115,    40,   116,    -1,   115,    39,   116,
      -1,   115,    11,   116,    -1,   115,    10,   116,    -1,   117,
      -1,   116,    41,   117,    -1,   116,    42,   117,    -1,   118,
      -1,   117,    43,   118,    -1,   117,    44,   118,    -1,   117,
      45,   118,    -1,   119,    -1,    12,   118,    -1,    13,   118,
      -1,    42,   118,    -1,    41,   118,    -1,    58,   118,    -1,
      59,   118,    -1,    60,   118,    -1,   101,   118,    -1,    37,
      46,   118,    47,    -1,    37,    46,    89,    47,    -1,   120,
      -1,   119,    54,   106,    55,    -1,   119,    46,   121,    47,
      -1,   119,    56,    36,    -1,   119,    18,    36,    -1,   119,
      12,    -1,   119,    13,    -1,    36,    -1,     4,    -1,     3,
      -1,    38,    -1,     5,    -1,    32,    -1,    46,   106,    47,
      -1,    -1,   108,    -1,   121,    49,   108,    -1,   123,    -1,
      64,    -1,    66,    82,    99,    96,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    89,    92,    93,    94,    95,    99,   102,
     103,   106,   107,   110,   111,   114,   115,   118,   119,   122,
     123,   126,   127,   130,   133,   134,   137,   138,   141,   142,
     145,   148,   151,   152,   155,   156,   159,   160,   163,   164,
     167,   168,   171,   172,   175,   176,   177,   180,   181,   184,
     185,   188,   189,   192,   193,   196,   199,   200,   201,   204,
     205,   208,   209,   210,   213,   214,   218,   219,   220,   221,
     222,   223,   226,   227,   230,   233,   234,   235,   238,   239,
     242,   243,   246,   247,   250,   251,   254,   255,   256,   259,
     260,   261,   264,   265,   266,   269,   270,   271,   272,   276,
     277,   280,   281,   284,   285,   288,   289,   292,   293,   296,
     297,   298,   299,   300,   303,   304,   307,   308,   311,   312,
     313,   316,   317,   318,   319,   320,   323,   324,   325,   328,
     329,   330,   331,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   347,   348,   349,   350,   351,   352,
     353,   356,   357,   358,   359,   360,   361,   362,   365,   366,
     367,   371,   372,   420
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
  "CONTINUE", "BREAK", "CASE", "DEFAULT", "GOTO", "ERROR_LEXICO", "NULL1",
  "TIPO_DATO", "CLASE_ALMACENAMIENTO", "STRUCT_UNION", "ID", "SIZEOF",
  "CTE_CARACTER", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('",
  "')'", "';'", "','", "'='", "'{'", "'}'", "':'", "'['", "']'", "'.'",
  "'?'", "'~'", "'!'", "'&'", "$accept", "input", "line", "declaracion",
  "especDeclaracionBis", "especDeclaracion", "listaDeclaradoresBis",
  "listaDeclaradores", "declarador", "inicializador",
  "listaDeInicializadores", "especClase", "especTipo", "especStructUnion",
  "listaDeclaracionesStruct", "declaracionStruct", "listaCalificadores",
  "listaCalificadoresBis", "opcionLista", "declaradoresStruct",
  "declaStruct", "decla", "declaBis", "declaradorDirecto",
  "listaTiposParametros", "listaTiposParametrosBis", "listaParametros",
  "declaracionParametro", "nombreTipo", "declaradorAbstracto",
  "declaradorAbstractoBis", "declaradorAbstractoDirecto",
  "opcionExpresion", "sentencia", "sentExpresion", "sentCompuesta",
  "decalracionOSentencia", "listaDeclaraciones", "listaDeclaracionesBis",
  "listaSentencias", "puntero", "sentSeleccion", "sentIteracion",
  "sentEtiquetada", "sentSalto", "exp", "expOp", "expAsignacion",
  "expCondicional", "expCondicionalBis", "operAsignacion", "expOr",
  "expAnd", "expIgualdad", "expRelacional", "expAditiva",
  "expMultiplicativa", "expUnaria", "expSufijo", "expPrimaria",
  "listaArgumentos", "declaracionExterna", "definicionFuncion", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,    62,
      60,    43,    45,    42,    47,    37,    40,    41,    59,    44,
      61,   123,   125,    58,    91,    93,    46,    63,   126,    33,
      38
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    63,    63,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    73,    73,    74,    74,    75,    75,
      76,    77,    78,    78,    79,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    84,    84,    85,    85,    86,
      86,    87,    87,    88,    88,    89,    90,    90,    90,    91,
      91,    92,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    95,    95,    96,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   102,   103,
     103,   103,   104,   104,   104,   105,   105,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     111,   111,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   115,   115,   115,   115,   115,   116,   116,   116,   117,
     117,   117,   117,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   119,   119,   119,   119,   119,   119,
     119,   120,   120,   120,   120,   120,   120,   120,   121,   121,
     121,   122,   122,   123
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     3,     0,
       1,     2,     2,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     3,     4,     1,     2,
       3,     2,     0,     1,     0,     3,     1,     3,     1,     3,
       2,     1,     0,     1,     1,     4,     4,     1,     5,     0,
       1,     1,     3,     2,     2,     2,     2,     1,     1,     0,
       1,     3,     2,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     0,     2,     2,     1,     2,
       0,     1,     1,     2,     1,     2,     5,     7,     5,     5,
       7,     9,     4,     3,     3,     3,     2,     2,     3,     1,
       3,     0,     1,     1,     3,     1,     5,     0,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     4,     1,     4,     4,     3,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     3,     0,     1,
       3,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,   153,   152,   155,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       6,   156,    24,    23,     0,   151,     0,   154,     0,     0,
      84,     0,    73,    75,     0,     0,     0,     3,   162,    13,
       9,     9,    25,     5,    67,    66,     0,    68,    69,    71,
      70,     0,    99,   103,   105,   114,   116,   118,   121,   126,
     129,   133,   144,     4,   161,     7,   151,   134,   135,     0,
       0,     0,     0,   101,   102,     0,    97,    96,     0,   129,
       0,     0,    34,     0,     0,     0,   137,   136,    85,     0,
       0,   138,   139,   140,    44,     0,    14,    15,    17,    41,
       0,    11,    10,    12,   141,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,   112,   113,   109,     0,   149,   150,     0,
     158,     0,     0,     0,     0,     0,     0,     0,    95,     0,
      93,    98,     0,    26,    32,     0,    28,    42,    94,    59,
       0,     0,   157,    74,    82,    76,    77,    78,     8,     0,
       0,    81,     0,     0,   107,    40,   100,   115,     0,   117,
     119,   120,   125,   124,   123,   122,   127,   128,   130,   131,
     132,   104,   148,   159,     0,     0,   147,     0,     0,     0,
       0,   101,    92,     0,    33,    31,    27,    29,     0,    36,
      38,     0,    49,   107,    60,    55,    57,    63,    58,   143,
     142,    79,    83,    16,    17,     0,    18,    19,   163,     0,
       0,    47,    51,   108,     0,     0,   146,     0,   145,    86,
      88,    89,     0,     0,    35,    30,    42,     0,    50,     0,
       0,     0,    49,    62,    56,    21,     0,    53,    54,    58,
      46,     0,    45,   106,   160,     0,     0,   101,    37,    39,
      65,    61,    64,     0,    20,     0,    52,    87,    90,     0,
      22,     0,     0,    48,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    37,    38,   101,    39,    95,    96,    97,   216,
     246,    40,    41,    42,   145,   146,   147,   195,   143,   198,
     199,   200,   201,    99,   238,   239,   221,   222,   150,   204,
     205,   206,   207,    43,    44,    45,    90,   155,   162,   156,
      46,    47,    48,    49,    50,    51,    75,    52,    53,   224,
     126,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     184,   157,    64
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -207
static const yytype_int16 yypact[] =
{
    -207,   244,  -207,   -23,  -207,  -207,  -207,   480,   480,    25,
      80,    86,   343,    89,   480,    16,    39,   480,   125,   137,
    -207,  -207,  -207,  -207,    -5,   129,   143,  -207,   480,   480,
    -207,   480,  -207,  -207,   480,   480,   480,  -207,  -207,    18,
      83,    83,  -207,  -207,  -207,  -207,   480,  -207,  -207,  -207,
    -207,   108,  -207,  -207,    10,   188,    85,    41,   119,   126,
      27,    20,  -207,  -207,  -207,  -207,  -207,  -207,  -207,   480,
     480,   480,   177,   480,   159,   161,  -207,  -207,   157,  -207,
     343,   163,   162,   110,   343,   392,  -207,  -207,  -207,   100,
     293,  -207,  -207,  -207,  -207,   166,   168,  -207,    88,     9,
     179,  -207,  -207,  -207,  -207,  -207,   480,   480,   480,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   480,   480,
     480,  -207,  -207,  -207,  -207,  -207,   480,  -207,  -207,   184,
     480,   480,   185,   103,   134,   145,   176,   175,  -207,   343,
    -207,  -207,   110,  -207,   110,    63,  -207,    18,  -207,    45,
     178,   180,  -207,  -207,  -207,    83,   343,  -207,  -207,    18,
     436,    83,   181,    83,   480,     9,  -207,   188,    93,    85,
      41,    41,   119,   119,   119,   119,   126,   126,  -207,  -207,
    -207,  -207,  -207,  -207,   149,    40,  -207,   343,   343,   343,
     480,   480,  -207,    67,  -207,  -207,  -207,  -207,   116,  -207,
     173,   182,   120,   480,  -207,  -207,    36,  -207,    38,  -207,
    -207,  -207,  -207,  -207,   183,   436,  -207,  -207,  -207,    94,
     187,   189,  -207,  -207,   174,   480,  -207,   480,  -207,   208,
    -207,  -207,   153,   191,  -207,  -207,    18,   480,  -207,   190,
     193,   186,    83,  -207,    36,  -207,     1,  -207,  -207,    -9,
    -207,    14,  -207,  -207,  -207,   343,   194,   480,  -207,  -207,
    -207,  -207,  -207,   436,  -207,   195,  -207,  -207,  -207,   203,
    -207,   196,   343,  -207,  -207
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -207,  -207,  -207,  -207,   212,   -35,  -207,  -207,    71,  -206,
    -207,  -207,   -59,  -207,   112,  -128,   -71,  -207,  -207,  -207,
       0,   -26,  -207,   -90,    92,  -207,  -207,     8,  -207,  -183,
    -207,  -174,  -188,   -12,  -207,    96,  -207,   164,  -207,  -207,
     -18,  -207,  -207,  -207,  -207,   -11,   -66,   -91,   -13,    58,
    -207,  -207,   192,   155,    95,    73,    87,    -6,  -207,  -207,
    -207,     7,  -207
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -81
static const yytype_int16 yytable[] =
{
      72,    67,    68,    74,    78,   102,   102,   137,    63,   245,
     165,    79,    88,    98,   149,   166,   107,   197,   243,   240,
      89,   100,    86,    87,   144,    65,   144,    94,    91,    92,
      93,    82,   127,   128,   244,   181,   248,   202,   129,   183,
     104,   121,   122,   123,   124,   203,    83,    22,    23,    24,
     263,   112,   113,   264,    94,   163,   243,   270,   133,   134,
     135,    30,    74,   164,    76,   197,   130,   108,   140,   217,
     265,    69,   148,   194,   131,   244,   132,   125,   154,   151,
     114,   115,   242,   144,   202,   144,   144,    77,    30,   106,
     203,   202,   203,   110,   111,   228,    22,   168,    24,   203,
      22,    79,    24,    79,    79,    79,    79,    79,    79,    79,
      79,    79,   178,   179,   180,   196,    22,    23,    24,   234,
     185,    22,    23,    24,   217,   233,    70,   192,   219,   100,
      94,   208,    71,   214,   144,    73,   254,    30,   160,   -80,
     202,   100,   106,    22,   212,    24,   225,   152,   203,   106,
     187,   223,   106,    22,    23,    24,   105,   106,    79,   165,
     116,   117,   211,    30,   235,   236,   202,   219,   211,   118,
     119,   120,   217,    81,   203,   229,   230,   231,    80,   232,
      74,   188,    84,   106,   208,   172,   173,   174,   175,    85,
     223,   269,   189,   247,   106,   109,   226,    79,   227,   136,
     256,   249,   106,   176,   177,   170,   171,   219,   106,   138,
     139,   141,   253,   142,   158,    94,   219,   159,   100,    79,
     182,   186,   190,   191,   259,   209,   -43,   210,   255,   252,
     213,    79,    33,   160,   250,   237,   258,   260,   251,   257,
     261,   262,   268,   267,     2,     3,    74,     4,     5,     6,
     272,   271,   273,   103,   193,   220,     7,     8,   218,   266,
     274,   241,   161,     9,   169,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,     0,    28,    29,    30,     0,     0,
      31,     0,    32,     0,     0,    33,     4,     5,     6,   167,
       0,     0,    34,    35,    36,     7,     8,     0,     0,     0,
       0,     0,     9,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,    21,    22,    23,    24,    25,
      26,    27,     0,     0,    28,    29,    30,     0,     0,    31,
       0,    32,     0,     0,    33,   153,     4,     5,     6,     0,
       0,    34,    35,    36,     0,     7,     8,     0,     0,     0,
       0,     0,     9,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,    21,     0,     0,     0,    25,
      26,    27,     0,     0,    28,    29,    30,     0,     0,    31,
       0,    32,     0,     0,    33,     4,     5,     6,     0,     0,
       0,    34,    35,    36,     7,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     0,    24,    66,    26,
      27,     0,     0,    28,    29,    30,     0,     0,    31,     4,
       5,     6,     0,     0,     0,     0,     0,     0,     7,     8,
      34,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,    66,    26,    27,     0,     0,    28,    29,    30,
       0,     0,    31,     4,     5,     6,     0,   215,     0,     0,
       0,     0,     7,     8,    34,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,    66,    26,    27,     0,
       0,    28,    29,    30,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36
};

static const yytype_int16 yycheck[] =
{
      12,     7,     8,    14,    17,    40,    41,    73,     1,   215,
     100,    17,    30,    39,    85,   106,     6,   145,   206,   202,
      31,    39,    28,    29,    83,    48,    85,    36,    34,    35,
      36,    36,    12,    13,   208,   126,   219,    46,    18,   130,
      46,    14,    15,    16,    17,    54,    51,    33,    34,    35,
      49,    10,    11,    52,    36,    46,   244,   263,    69,    70,
      71,    43,    73,    54,    48,   193,    46,    57,    80,   160,
      56,    46,    84,   144,    54,   249,    56,    50,    90,    85,
      39,    40,    46,   142,    46,   144,   145,    48,    43,    49,
      54,    46,    54,     8,     9,    55,    33,   108,    35,    54,
      33,   107,    35,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,    52,    33,    34,    35,    52,
     131,    33,    34,    35,   215,   191,    46,   139,   163,   147,
      36,   149,    46,   159,   193,    46,   227,    43,    50,    51,
      46,   159,    49,    33,   156,    35,    53,    47,    54,    49,
      47,   164,    49,    33,    34,    35,    48,    49,   164,   249,
      41,    42,   155,    43,    48,    49,    46,   202,   161,    43,
      44,    45,   263,    36,    54,   187,   188,   189,    53,   190,
     191,    47,    53,    49,   202,   112,   113,   114,   115,    46,
     203,   257,    47,   219,    49,     7,    47,   203,    49,    22,
      47,   219,    49,   116,   117,   110,   111,   242,    49,    48,
      53,    48,   225,    51,    48,    36,   251,    49,   236,   225,
      36,    36,    46,    48,   237,    47,    53,    47,    20,    55,
     159,   237,    51,    50,    47,    53,   236,    47,    49,    48,
      47,    55,    48,   255,     0,     1,   257,     3,     4,     5,
      47,    56,    56,    41,   142,   163,    12,    13,   162,   251,
     272,   203,    98,    19,   109,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    -1,    -1,
      46,    -1,    48,    -1,    -1,    51,     3,     4,     5,   107,
      -1,    -1,    58,    59,    60,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,    -1,    -1,    46,
      -1,    48,    -1,    -1,    51,    52,     3,     4,     5,    -1,
      -1,    58,    59,    60,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    36,
      37,    38,    -1,    -1,    41,    42,    43,    -1,    -1,    46,
      -1,    48,    -1,    -1,    51,     3,     4,     5,    -1,    -1,
      -1,    58,    59,    60,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    -1,    -1,    46,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
      58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    36,    37,    38,    -1,    -1,    41,    42,    43,
      -1,    -1,    46,     3,     4,     5,    -1,    51,    -1,    -1,
      -1,    -1,    12,    13,    58,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    36,    37,    38,    -1,
      -1,    41,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,     0,     1,     3,     4,     5,    12,    13,    19,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    41,    42,
      43,    46,    48,    51,    58,    59,    60,    63,    64,    66,
      72,    73,    74,    94,    95,    96,   101,   102,   103,   104,
     105,   106,   108,   109,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   122,   123,    48,    36,   118,   118,    46,
      46,    46,    94,    46,   106,   107,    48,    48,   109,   118,
      53,    36,    36,    51,    53,    46,   118,   118,   101,   106,
      97,   118,   118,   118,    36,    67,    68,    69,    82,    84,
     101,    65,    66,    65,   118,    48,    49,     6,    57,     7,
       8,     9,    10,    11,    39,    40,    41,    42,    43,    44,
      45,    14,    15,    16,    17,    50,   111,    12,    13,    18,
      46,    54,    56,   106,   106,   106,    22,   107,    48,    53,
      94,    48,    51,    79,    73,    75,    76,    77,    94,    77,
      89,   118,    47,    52,    94,    98,   100,   122,    48,    49,
      50,    98,    99,    46,    54,    84,   108,   113,   106,   114,
     115,   115,   116,   116,   116,   116,   117,   117,   118,   118,
     118,   108,    36,   108,   121,   106,    36,    47,    47,    47,
      46,    48,    94,    75,    77,    78,    52,    76,    80,    81,
      82,    83,    46,    54,    90,    91,    92,    93,   101,    47,
      47,   122,    94,    69,    82,    51,    70,   108,    96,    66,
      85,    87,    88,   109,   110,    53,    47,    49,    55,    94,
      94,    94,   106,   107,    52,    48,    49,    53,    85,    86,
      90,   110,    46,    93,    92,    70,    71,    82,    90,   101,
      47,    49,    55,   109,   108,    20,    47,    48,    81,   109,
      47,    47,    55,    49,    52,    56,    88,    94,    48,   107,
      70,    56,    47,    56,    94
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
        case 7:

/* Line 1455 of yacc.c  */
#line 95 "ejemplo.y"
    {yyerrok; ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 99 "ejemplo.y"
    {tipoDatoFuncion = (yyvsp[(1) - (3)].cval); nombreFuncion = (yyvsp[(2) - (3)].cval);}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 114 "ejemplo.y"
    {cantidad = 1;;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 115 "ejemplo.y"
    {cantidad = 2;;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 118 "ejemplo.y"
    {tipDecla = 1; ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 119 "ejemplo.y"
    {tipDecla = 2;;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 175 "ejemplo.y"
    {tip = 1;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 176 "ejemplo.y"
    {tip = 2;;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 177 "ejemplo.y"
    {tip = 3;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 188 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 189 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 230 "ejemplo.y"
    {printf("Se encontro una Sentencia Compuesta. \n"); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 254 "ejemplo.y"
    {printf("Se encontro una Sentencia de Seleccion IF.\n"); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 255 "ejemplo.y"
    {printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n"); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 256 "ejemplo.y"
    {printf("Se enconto una Sentencia de Seleccion SWITCH.\n"); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 259 "ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion WHILE.\n"); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 260 "ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion DO WHILE.\n"); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 261 "ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion FOR.\n"); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 264 "ejemplo.y"
    {printf("Se encontro una Sentencia de Etiqueta CASE.\n"); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 265 "ejemplo.y"
    {printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n"); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 269 "ejemplo.y"
    {printf("Se encontro una Sentencia de Salto RETURN. \n"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 270 "ejemplo.y"
    {printf("Se encontro una Sentencia de Salto BREAK.\n"); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 271 "ejemplo.y"
    {printf("Se encontro una Sentencia de Salto CONTINUE.\n"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 272 "ejemplo.y"
    {printf("Se encontro una Sentencia de Salto GOTO. \n"); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 285 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(3) - (3)].dval); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 289 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 304 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 308 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 312 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 313 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 317 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 318 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 319 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 320 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 324 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 325 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 329 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 330 "ejemplo.y"
    {if((yyvsp[(3) - (3)].dval) == 0) {printf("ERROR/: No se puede dividir por 0 \n"); return 1; } else (yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 331 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].ival) % (yyvsp[(3) - (3)].ival); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 335 "ejemplo.y"
    {(yyval.dval) = ++ (yyvsp[(2) - (2)].dval); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 336 "ejemplo.y"
    {(yyval.dval) = -- (yyvsp[(2) - (2)].dval); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 337 "ejemplo.y"
    {(yyval.dval) = - (yyvsp[(2) - (2)].dval); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 338 "ejemplo.y"
    {(yyval.dval) = + (yyvsp[(2) - (2)].dval); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 339 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 340 "ejemplo.y"
    {(yyval.dval) = ! (yyvsp[(2) - (2)].dval); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 341 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 342 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 343 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 344 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 348 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 349 "ejemplo.y"
    {(yyval.dval) = 0; printf("Se invoco a la funcion %s \n",(yyvsp[(1) - (4)].cval)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 350 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 351 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 352 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) ++; ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 353 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) --; ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 357 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].ival);;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 358 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 362 "ejemplo.y"
    {(yyval.dval) = ( (yyvsp[(2) - (3)].dval) ); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 371 "ejemplo.y"
    {printf("Se define la funcion %s con %d parametros y devolucion de tipo %s  \n",nombreFuncion,contadorParametros,tipoDatoFuncion); contadorParametros = 0; ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 372 "ejemplo.y"
    {
                       switch(tip){
                         case 1:
                              if(tipDecla == 1){
                                   if(cantidad == 1){
                                        printf("Se declara la variable %s de tipo %s  \n",nombreFuncion,tipoDatoFuncion); 
                                   }
                                   else if(cantidad == 2){
                                        printf("Se declaran variables de tipo %s  \n",tipoDatoFuncion);
                                   } 
                              }
                              else if(tipDecla == 2){
                                   if(cantidad == 1){
                                        printf("Se inicializa la variable %s de tipo %s \n",nombreFuncion,tipoDatoFuncion); 
                                   }
                                   else if(cantidad == 2){
                                        printf("Se inicializan variables de tipo %s \n",tipoDatoFuncion);
                                   } 
                              }
                              break;
                         case 2:
                              if(tipDecla == 1){
                                   if(cantidad == 1){
                                        printf("Se declara el arreglo %s de tipo %s  \n",nombreFuncion,tipoDatoFuncion);
                                   }
                                   else if(cantidad == 2){
                                        printf("Se declaran arreglos de tipo %s \n",tipoDatoFuncion);
                                   }  
                              }
                              else if(tipDecla == 2){
                                   if(cantidad == 1){
                                        printf("Se inicializa el arreglo %s de tipo %s \n",nombreFuncion,tipoDatoFuncion);
                                   }
                                   else if(cantidad == 2){
                                        printf("Se inicializan arreglos de tipo %s \n",tipoDatoFuncion);
                                   }   
                              }
                              break;
                         case 3:
                              if(tipDecla == 1){
                                   printf("Se declara la funcion %s con %d parametros y devolucion de tipo %s  \n",nombreFuncion,contadorParametros,tipoDatoFuncion); 
                                   contadorParametros = 0;
                              }
                              break;     
                       }
                  ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 420 "ejemplo.y"
    {nombreFuncion = (yyvsp[(2) - (4)].cval); tipoDatoFuncion = (yyvsp[(1) - (4)].cval);;}
    break;



/* Line 1455 of yacc.c  */
#line 2195 "ejemplo.tab.c"
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
#line 424 "ejemplo.y"
 

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
