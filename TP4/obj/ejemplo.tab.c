
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
#line 1 "../src/ejemplo.y"


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

extern int yylex();
int yyerror (char* );
int yywrap(){
return(1);
}
FILE* yyin;
char* tipoDato;
char* nombreFuncion;
char* nombreID;

int contadorVariables = 0;
int contadorParametros = 0;



/* Line 189 of yacc.c  */
#line 96 "ejemplo.tab.c"

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
     IF = 273,
     ELSE = 274,
     SWITCH = 275,
     WHILE = 276,
     DO = 277,
     FOR = 278,
     RETURN = 279,
     CONTINUE = 280,
     BREAK = 281,
     CASE = 282,
     DEFAULT = 283,
     VOID = 284,
     GOTO = 285,
     TIPO_DATO = 286,
     ID = 287,
     SIZEOF = 288,
     MAYORIGUAl = 289
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 23 "../src/ejemplo.y"

  int ival;
  double dval;
  char cval[30];



/* Line 214 of yacc.c  */
#line 174 "ejemplo.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 186 "ejemplo.tab.c"

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
#define YYLAST   1335

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNRULES -- Number of states.  */
#define YYNSTATES  208

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,     2,     2,    41,    57,     2,
      43,    44,    39,    37,    47,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    46,
      35,    50,    34,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,    42,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,    55,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    16,    17,
      23,    24,    25,    31,    36,    41,    42,    44,    48,    49,
      52,    57,    59,    61,    63,    65,    67,    69,    74,    75,
      77,    80,    81,    83,    86,    87,    92,    94,    98,    99,
     104,   105,   107,   109,   110,   113,   115,   118,   122,   127,
     129,   133,   135,   139,   142,   148,   156,   162,   168,   176,
     186,   191,   195,   199,   203,   206,   209,   213,   214,   218,
     224,   228,   232,   236,   240,   244,   248,   252,   256,   260,
     264,   268,   272,   276,   280,   283,   286,   289,   292,   295,
     298,   301,   304,   307,   310,   315,   318,   323,   327,   329,
     331,   333,   335,   336,   338,   342,   344,   346,   348,   350
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    -1,    59,    60,    -1,    45,    -1,    61,
      45,    -1,    69,    45,    -1,    -1,    -1,    31,    62,    32,
      63,    66,    -1,    -1,    -1,    29,    64,    32,    65,    66,
      -1,    43,    67,    44,    46,    -1,    43,    68,    44,    70,
      -1,    -1,    31,    -1,    67,    47,    31,    -1,    -1,    31,
      32,    -1,    68,    47,    31,    32,    -1,    70,    -1,    84,
      -1,    85,    -1,    86,    -1,    88,    -1,    87,    -1,    48,
      71,    72,    49,    -1,    -1,    73,    -1,    71,    73,    -1,
      -1,    69,    -1,    72,    69,    -1,    -1,    31,    74,    75,
      46,    -1,    76,    -1,    76,    47,    75,    -1,    -1,    32,
      77,    78,    79,    -1,    -1,    81,    -1,    80,    -1,    -1,
      50,    82,    -1,    39,    -1,    80,    39,    -1,    51,    89,
      52,    -1,    81,    51,    89,    52,    -1,    89,    -1,    48,
      83,    49,    -1,    82,    -1,    83,    47,    82,    -1,    89,
      46,    -1,    18,    43,    89,    44,    69,    -1,    18,    43,
      89,    44,    69,    19,    69,    -1,    20,    43,    89,    44,
      69,    -1,    21,    43,    89,    44,    69,    -1,    22,    69,
      21,    43,    89,    44,    46,    -1,    23,    43,    89,    46,
      89,    46,    89,    44,    69,    -1,    27,    89,    53,    69,
      -1,    28,    53,    69,    -1,    32,    53,    69,    -1,    24,
      89,    46,    -1,    26,    46,    -1,    25,    46,    -1,    30,
      32,    46,    -1,    -1,    89,    91,    89,    -1,    89,    54,
      89,    53,    89,    -1,    89,     6,    89,    -1,    89,     7,
      89,    -1,    89,     8,    89,    -1,    89,     9,    89,    -1,
      89,    10,    89,    -1,    89,    34,    89,    -1,    89,    11,
      89,    -1,    89,    35,    89,    -1,    89,    37,    89,    -1,
      89,    38,    89,    -1,    89,    39,    89,    -1,    89,    40,
      89,    -1,    89,    41,    89,    -1,    89,    42,    89,    -1,
      12,    89,    -1,    13,    89,    -1,    89,    12,    -1,    89,
      13,    -1,    38,    89,    -1,    37,    89,    -1,    55,    89,
      -1,    56,    89,    -1,    57,    89,    -1,    80,    89,    -1,
      33,    43,    31,    44,    -1,    89,    81,    -1,    89,    43,
      90,    44,    -1,    43,    89,    44,    -1,     4,    -1,     3,
      -1,     5,    -1,    32,    -1,    -1,    89,    -1,    90,    47,
      89,    -1,    50,    -1,    14,    -1,    15,    -1,    16,    -1,
      17,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    77,    77,    78,    81,    82,    83,    87,    87,    87,
      88,    88,    88,    91,    92,    95,    96,    97,   100,   101,
     102,   106,   107,   108,   109,   110,   111,   116,   119,   120,
     121,   124,   125,   126,   131,   131,   134,   135,   138,   138,
     141,   142,   143,   146,   147,   150,   151,   154,   155,   158,
     159,   162,   163,   168,   173,   174,   175,   180,   181,   182,
     187,   188,   189,   194,   195,   196,   197,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   239,   240,   241,   244,   245,   246,   247,   248
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
  "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "RETURN", "CONTINUE",
  "BREAK", "CASE", "DEFAULT", "VOID", "GOTO", "TIPO_DATO", "ID", "SIZEOF",
  "'>'", "'<'", "MAYORIGUAl", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "'('", "')'", "'\\n'", "';'", "','", "'{'", "'}'", "'='", "'['", "']'",
  "':'", "'?'", "'~'", "'!'", "'&'", "$accept", "input", "line", "funcion",
  "@1", "$@2", "@3", "$@4", "declaracionODefinicion",
  "listaParametrosDeclaracion", "listaParametrosDefinicion", "sentencia",
  "sentCompuesta", "listaDeclaraciones", "listaSentencias",
  "sentenciaDeclaracion", "$@5", "listaVarSimples", "unaVarSimple", "$@6",
  "tipoVariable", "asignacion", "puntero", "array", "inicializador",
  "listaDeInicializadores", "sentExpresion", "sentSeleccion",
  "sentIteracion", "sentEtiquetada", "sentSalto", "exp", "listaArgumentos",
  "operAsignacion", 0
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
     285,   286,   287,   288,    62,    60,   289,    43,    45,    42,
      47,    37,    94,    40,    41,    10,    59,    44,   123,   125,
      61,    91,    93,    58,    63,   126,    33,    38
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    60,    60,    60,    62,    63,    61,
      64,    65,    61,    66,    66,    67,    67,    67,    68,    68,
      68,    69,    69,    69,    69,    69,    69,    70,    71,    71,
      71,    72,    72,    72,    74,    73,    75,    75,    77,    76,
      78,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      82,    83,    83,    84,    85,    85,    85,    86,    86,    86,
      87,    87,    87,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    91,    91,    91,    91,    91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     0,     0,     5,
       0,     0,     5,     4,     4,     0,     1,     3,     0,     2,
       4,     1,     1,     1,     1,     1,     1,     4,     0,     1,
       2,     0,     1,     2,     0,     4,     1,     3,     0,     4,
       0,     1,     1,     0,     2,     1,     2,     3,     4,     1,
       3,     1,     3,     2,     5,     7,     5,     5,     7,     9,
       4,     3,     3,     3,     2,     2,     3,     0,     3,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     2,     4,     3,     1,     1,
       1,     1,     0,     1,     3,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    67,     1,    99,    98,   100,    67,    67,     0,     0,
       0,    67,     0,    67,     0,     0,    67,     0,    10,     0,
       7,   101,     0,    67,    67,    45,    67,     4,    28,    67,
      67,    67,     3,     0,     0,    21,    67,    22,    23,    24,
      26,    25,     0,   101,    84,    85,    67,    67,    67,     0,
      67,     0,    65,    64,     0,    67,     0,     0,     0,    67,
       0,    89,    88,     0,    34,    31,    29,    90,    91,    92,
       5,     6,    45,    93,    67,    67,    67,    67,    67,    67,
      86,    87,   106,   107,   108,   109,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    53,   105,    67,    67,    95,
      67,     0,     0,     0,     0,     0,    63,    67,    61,    11,
      66,     8,    62,     0,    97,     0,    32,    67,    30,    70,
      71,    72,    73,    74,    76,    75,    77,    78,    79,    80,
      81,    82,    83,   103,     0,     0,     0,    67,    68,    67,
      67,    67,    67,    67,    60,     0,     0,    94,    38,     0,
      36,    27,    33,    96,    67,    47,    67,     0,    54,    56,
      57,     0,     0,    15,    12,     9,    40,    35,     0,   104,
      69,    48,    67,     0,    67,    16,     0,     0,    43,    42,
      41,    37,    55,    58,     0,    19,     0,     0,     0,     0,
      67,    39,    46,    67,    13,    17,    14,     0,    67,    44,
      49,    59,    20,    51,     0,    67,    50,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    32,    33,    58,   146,    56,   145,   164,   176,
     177,    34,    35,    65,   117,    66,   115,   149,   150,   166,
     178,   191,    36,    99,   199,   204,    37,    38,    39,    40,
      41,    42,   134,   100
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -194
static const yytype_int16 yypact[] =
{
    -194,   185,  -194,  -194,  -194,  -194,   350,   350,   -34,   -21,
     -17,   313,   -16,   350,   -18,   -15,   350,   -38,  -194,    -3,
    -194,   -20,   -11,   350,   350,  -194,   350,  -194,     3,   350,
     350,   350,  -194,   -10,    -9,  -194,   387,  -194,  -194,  -194,
    -194,  -194,   439,  -194,  1125,  1125,   350,   350,   350,    16,
     350,   488,  -194,  -194,   537,   313,     6,    -1,     7,   313,
      12,  1281,  1281,   586,  -194,   231,  -194,  1125,  1125,  1125,
    -194,  -194,  -194,  1125,   350,   350,   350,   350,   350,   350,
    -194,  -194,  -194,  -194,  -194,  -194,   350,   350,   350,   350,
     350,   350,   350,   350,   350,  -194,  -194,   350,   350,    -5,
     350,   635,   684,   733,     4,   782,  -194,   313,  -194,  -194,
    -194,  -194,  -194,     5,  -194,    18,  -194,   272,  -194,  1173,
    1220,  1265,  1265,  1125,   421,   421,   421,  1281,  1281,    47,
      47,    47,   361,  1125,   -41,   831,   880,   350,  1125,   313,
     313,   313,   350,   350,  -194,     8,     8,  -194,  -194,     9,
      19,  -194,  -194,  -194,   350,  -194,   350,   929,    34,  -194,
    -194,   978,  1027,    23,  -194,  -194,   -37,  -194,    18,  1125,
    1125,  -194,   313,    10,   350,    33,   -36,   -31,    17,    35,
      -5,  -194,  -194,  -194,  1076,  -194,    29,    45,    30,    46,
     114,  -194,  -194,   313,  -194,  -194,  -194,    61,   114,  -194,
    1125,  -194,  -194,  -194,   -28,   114,  -194,  -194
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,   -67,  -194,
    -194,    -7,   -93,  -194,  -194,    31,  -194,   -69,  -194,  -194,
    -194,  -194,   -64,   -63,  -193,  -194,  -194,  -194,  -194,  -194,
    -194,    -6,  -194,  -194
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      44,    45,    25,   153,    49,   203,   154,    51,   186,    46,
      54,   187,   207,   188,    97,    55,   189,    61,    62,   205,
      63,   206,    47,    67,    68,    69,    48,    50,    52,    57,
      73,    53,    60,    59,    64,    70,    71,   104,   109,   111,
     101,   102,   103,   113,   105,   110,   137,   142,   108,   147,
     148,   163,   112,   172,   175,   167,   183,    78,   116,    80,
      81,    82,    83,    84,    85,   185,   168,   190,   119,   120,
     121,   122,   123,   124,   192,   194,   195,   197,    28,   165,
     125,   126,   127,   128,   129,   130,   131,   132,   133,    93,
      94,   135,   136,   202,   138,   196,   118,    96,    97,   181,
     144,    98,   179,   180,     0,     0,     0,     0,     0,     0,
     152,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       0,     0,     0,     0,     0,     0,     6,     7,     0,     0,
       0,   157,   158,   159,   160,     0,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,    43,    22,   169,     0,
     170,    23,    24,    25,     0,     0,     0,    26,     0,     0,
       0,     0,   198,     0,     0,   182,     0,     0,   184,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,     2,   201,     0,     3,     4,
       5,     0,   200,     0,     0,     0,     0,     6,     7,   200,
       0,     0,     0,     8,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,     0,    23,    24,    25,     0,     0,     0,    26,     0,
      27,     0,     0,    28,     3,     4,     5,     0,     0,     0,
      29,    30,    31,     6,     7,     0,     0,     0,     0,     8,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       0,    19,    64,    21,    22,     0,     0,     0,    23,    24,
      25,     0,     0,     0,    26,     3,     4,     5,     0,    28,
       0,     0,     0,     0,     6,     7,    29,    30,    31,     0,
       8,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     0,    19,     0,    21,    22,     0,     0,     0,    23,
      24,    25,     0,     0,     0,    26,     3,     4,     5,     0,
      28,   151,     0,     0,     0,     6,     7,    29,    30,    31,
       0,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     0,    19,     0,    21,    22,     0,     0,     0,
      23,    24,    25,     3,     4,     5,    26,     0,     0,     0,
       0,    28,     6,     7,     0,     0,     0,     0,    29,    30,
      31,    78,     0,    80,    81,    82,    83,    84,    85,     0,
       0,     0,    43,    22,     0,     0,     0,    23,    24,    25,
       3,     4,     5,    26,     0,     0,     0,     0,     0,     6,
       7,     0,     0,     0,    94,    29,    30,    31,     0,     0,
       0,    96,    97,     0,     0,    98,     0,     0,     0,    43,
      22,     0,     0,     0,    23,    24,    72,     0,     0,     0,
      26,    78,     0,    80,    81,    82,    83,    84,    85,     0,
       0,     0,    29,    30,    31,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     0,    88,    89,
      90,    91,    92,    93,    94,     0,     0,     0,     0,     0,
       0,    96,    97,    86,    87,    98,    88,    89,    90,    91,
      92,    93,    94,     0,     0,    95,     0,     0,     0,    96,
      97,     0,     0,    98,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,     0,    88,    89,    90,    91,    92,
      93,    94,     0,     0,   106,     0,     0,     0,    96,    97,
       0,     0,    98,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,     0,    88,    89,    90,    91,    92,    93,
      94,     0,     0,     0,     0,     0,     0,    96,    97,     0,
     107,    98,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,     0,    88,    89,    90,    91,    92,    93,    94,
     114,     0,     0,     0,     0,     0,    96,    97,     0,     0,
      98,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,     0,    88,    89,    90,    91,    92,    93,    94,   139,
       0,     0,     0,     0,     0,    96,    97,     0,     0,    98,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
       0,    88,    89,    90,    91,    92,    93,    94,   140,     0,
       0,     0,     0,     0,    96,    97,     0,     0,    98,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,     0,
      88,    89,    90,    91,    92,    93,    94,   141,     0,     0,
       0,     0,     0,    96,    97,     0,     0,    98,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,     0,    88,
      89,    90,    91,    92,    93,    94,     0,     0,   143,     0,
       0,     0,    96,    97,     0,     0,    98,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,     0,     0,     0,     0,
       0,    96,    97,   155,     0,    98,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,     0,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,     0,
      96,    97,     0,   156,    98,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,     0,    88,    89,    90,    91,
      92,    93,    94,     0,     0,     0,     0,     0,     0,    96,
      97,   171,     0,    98,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,     0,    88,    89,    90,    91,    92,
      93,    94,   173,     0,     0,     0,     0,     0,    96,    97,
       0,     0,    98,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,     0,    88,    89,    90,    91,    92,    93,
      94,     0,     0,   174,     0,     0,     0,    96,    97,     0,
       0,    98,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,     0,    88,    89,    90,    91,    92,    93,    94,
     193,     0,     0,     0,     0,     0,    96,    97,     0,     0,
      98,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,     0,    88,    89,    90,    91,    92,    93,    94,     0,
       0,     0,     0,     0,     0,    96,    97,     0,     0,    98,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,     0,
      88,    89,    90,    91,    92,    93,    94,     0,     0,     0,
       0,     0,     0,    96,    97,     0,     0,    98,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,     0,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,     0,
      96,    97,     0,     0,    98,    78,    79,    80,    81,    82,
      83,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,    80,    81,    82,    83,    84,    85,    86,
      87,     0,    88,    89,    90,    91,    92,    93,    94,     0,
       0,     0,     0,     0,     0,    96,    97,     0,     0,    98,
      90,    91,    92,    93,    94,     0,     0,     0,     0,     0,
       0,    96,    97,     0,     0,    98
};

static const yytype_int16 yycheck[] =
{
       6,     7,    39,    44,    11,   198,    47,    13,    44,    43,
      16,    47,   205,    44,    51,    53,    47,    23,    24,    47,
      26,    49,    43,    29,    30,    31,    43,    43,    46,    32,
      36,    46,    43,    53,    31,    45,    45,    21,    32,    32,
      46,    47,    48,    31,    50,    46,    51,    43,    55,    44,
      32,    43,    59,    19,    31,    46,    46,    10,    65,    12,
      13,    14,    15,    16,    17,    32,    47,    50,    74,    75,
      76,    77,    78,    79,    39,    46,    31,    31,    48,   146,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    42,
      43,    97,    98,    32,   100,   188,    65,    50,    51,   168,
     107,    54,   166,   166,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      -1,   137,   139,   140,   141,    -1,   142,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,   154,    -1,
     156,    37,    38,    39,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    -1,    -1,   172,    -1,    -1,   174,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   190,     0,   193,    -1,     3,     4,
       5,    -1,   198,    -1,    -1,    -1,    -1,    12,    13,   205,
      -1,    -1,    -1,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    -1,    37,    38,    39,    -1,    -1,    -1,    43,    -1,
      45,    -1,    -1,    48,     3,     4,     5,    -1,    -1,    -1,
      55,    56,    57,    12,    13,    -1,    -1,    -1,    -1,    18,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    37,    38,
      39,    -1,    -1,    -1,    43,     3,     4,     5,    -1,    48,
      -1,    -1,    -1,    -1,    12,    13,    55,    56,    57,    -1,
      18,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    -1,    32,    33,    -1,    -1,    -1,    37,
      38,    39,    -1,    -1,    -1,    43,     3,     4,     5,    -1,
      48,    49,    -1,    -1,    -1,    12,    13,    55,    56,    57,
      -1,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    -1,    32,    33,    -1,    -1,    -1,
      37,    38,    39,     3,     4,     5,    43,    -1,    -1,    -1,
      -1,    48,    12,    13,    -1,    -1,    -1,    -1,    55,    56,
      57,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    37,    38,    39,
       3,     4,     5,    43,    -1,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    43,    55,    56,    57,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,
      43,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    55,    56,    57,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    34,    35,    54,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    -1,    -1,    54,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      53,    54,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    54,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    -1,    54,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    53,    54,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    -1,    54,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,    -1,
      -1,    54,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    54,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    -1,    12,    13,    14,    15,    16,    17,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,     0,     3,     4,     5,    12,    13,    18,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    37,    38,    39,    43,    45,    48,    55,
      56,    57,    60,    61,    69,    70,    80,    84,    85,    86,
      87,    88,    89,    32,    89,    89,    43,    43,    43,    69,
      43,    89,    46,    46,    89,    53,    64,    32,    62,    53,
      43,    89,    89,    89,    31,    71,    73,    89,    89,    89,
      45,    45,    39,    89,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    34,    35,    37,    38,
      39,    40,    41,    42,    43,    46,    50,    51,    54,    81,
      91,    89,    89,    89,    21,    89,    46,    53,    69,    32,
      46,    32,    69,    31,    44,    74,    69,    72,    73,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    89,    89,    51,    89,    44,
      44,    44,    43,    46,    69,    65,    63,    44,    32,    75,
      76,    49,    69,    44,    47,    52,    53,    89,    69,    69,
      69,    89,    89,    43,    66,    66,    77,    46,    47,    89,
      89,    52,    19,    44,    46,    31,    67,    68,    78,    80,
      81,    75,    69,    46,    89,    32,    44,    47,    44,    47,
      50,    79,    39,    44,    46,    31,    70,    31,    48,    82,
      89,    69,    32,    82,    83,    47,    49,    82
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
#line 87 "../src/ejemplo.y"
    {tipoDato = (yyvsp[(1) - (1)].cval); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 87 "../src/ejemplo.y"
    {nombreFuncion = (yyvsp[(2) - (3)].cval); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 87 "../src/ejemplo.y"
    {contadorParametros = 0; ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 88 "../src/ejemplo.y"
    {tipoDato = (yyvsp[(1) - (1)].cval); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 88 "../src/ejemplo.y"
    {nombreFuncion = (yyvsp[(2) - (3)].cval); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 88 "../src/ejemplo.y"
    {contadorParametros = 0; ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 91 "../src/ejemplo.y"
    {printf("Se declara la funcion %s con %d parametros y devolucion de tipo %s  \n",nombreFuncion,contadorParametros,tipoDato); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 92 "../src/ejemplo.y"
    {printf("Se define la funcion %s con %d parametros y devolucion de tipo %s \n",nombreFuncion,contadorParametros,tipoDato); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 96 "../src/ejemplo.y"
    {contadorParametros++; printf(" -Tipo parametro %d = %s \n",contadorParametros ,(yyvsp[(1) - (1)].cval)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 97 "../src/ejemplo.y"
    {contadorParametros++; printf(" -Tipo parametro %d = %s \n",contadorParametros ,(yyvsp[(1) - (3)].cval)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 101 "../src/ejemplo.y"
    {contadorParametros++; printf(" -Tipo parametro %d = %s \n",contadorParametros ,(yyvsp[(1) - (2)].cval)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 102 "../src/ejemplo.y"
    {contadorParametros++; printf(" -Tipo parametro %d = %s \n",contadorParametros ,(yyvsp[(1) - (4)].cval)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 131 "../src/ejemplo.y"
    {tipoDato = (yyvsp[(1) - (1)].cval); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 131 "../src/ejemplo.y"
    {printf("Se declararon %d variables de tipo %s\n",contadorVariables,(yyvsp[(1) - (4)].cval)); contadorVariables = 0; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 138 "../src/ejemplo.y"
    {nombreID = (yyvsp[(1) - (1)].cval); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 141 "../src/ejemplo.y"
    {printf("Se declaro el identificador \"%s\" de tipo %s\n",nombreID,tipoDato); contadorVariables++; ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 142 "../src/ejemplo.y"
    {printf("Se declaro el array \"%s\" de tipo %s\n",nombreID,tipoDato); contadorVariables++; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 143 "../src/ejemplo.y"
    {printf("Se declaro el puntero \"%s\" de tipo %s\n",nombreID,tipoDato); contadorVariables++; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 158 "../src/ejemplo.y"
    {printf("-Valor de \"%s\" = %g \n",nombreID,(yyvsp[(1) - (1)].dval)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 168 "../src/ejemplo.y"
    {printf ("El resultado de la expresion es: %g \n", (yyvsp[(1) - (2)].dval)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 173 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Seleccion IF.\n"); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 174 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n"); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 175 "../src/ejemplo.y"
    {printf("Se enconto una Sentencia de Seleccion SWITCH.\n"); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 180 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion WHILE.\n"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 181 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion DO WHILE.\n"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 182 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion FOR.\n"); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 187 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Etiqueta CASE.\n"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 188 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n"); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 194 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Salto RETURN. \n"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 195 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Salto BREAK.\n"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 196 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Salto CONTINUE.\n"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 197 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Salto GOTO. \n"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 202 "../src/ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 203 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(3) - (3)].dval); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 204 "../src/ejemplo.y"
    {(yyvsp[(1) - (5)].dval) ? (yyvsp[(3) - (5)].dval) : (yyvsp[(5) - (5)].dval); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 205 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 206 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 207 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 208 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 209 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 210 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 211 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 212 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 213 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 214 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 215 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 216 "../src/ejemplo.y"
    {if((yyvsp[(3) - (3)].dval) == 0) {printf("ERROR/: No se puede dividir por 0 \n"); return 1; } else (yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 217 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].ival) % (yyvsp[(3) - (3)].ival); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 218 "../src/ejemplo.y"
    {if((yyvsp[(1) - (3)].dval) == 0 && (yyvsp[(3) - (3)].dval) == 0) {printf("ERROR/: No se puede elevear el 0 a la 0 \n"); return 1; } else (yyval.dval) = pow((yyvsp[(1) - (3)].dval),(yyvsp[(3) - (3)].dval)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 219 "../src/ejemplo.y"
    {(yyval.dval) = ++ (yyvsp[(2) - (2)].dval); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 220 "../src/ejemplo.y"
    {(yyval.dval) = -- (yyvsp[(2) - (2)].dval); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 221 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) ++; ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 222 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) --; ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 223 "../src/ejemplo.y"
    {(yyval.dval) = - (yyvsp[(2) - (2)].dval); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 224 "../src/ejemplo.y"
    {(yyval.dval) = + (yyvsp[(2) - (2)].dval); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 225 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 226 "../src/ejemplo.y"
    {(yyval.dval) = !(yyvsp[(2) - (2)].dval); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 227 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 228 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 229 "../src/ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 230 "../src/ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 231 "../src/ejemplo.y"
    {(yyval.dval) = 0; printf("Se invoco a la funcion %s \n",(yyvsp[(1) - (4)].cval)); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 232 "../src/ejemplo.y"
    {(yyval.dval) = ( (yyvsp[(2) - (3)].dval) ); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 233 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 234 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2248 "ejemplo.tab.c"
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
#line 252 "../src/ejemplo.y"
 

int yyerror (char *mensaje) 
{
  printf ("Error Sintactico: %s\n", mensaje);
}

void main(){

   #ifdef BISON_DEBUG
        yydebug = 1;
#endif 
   printf("Ingrese una expresion para resolver:\n");
   yyin = fopen("entrada.txt", "r");
   yyparse();
}
