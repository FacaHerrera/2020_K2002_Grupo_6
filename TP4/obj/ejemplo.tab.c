
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
FILE* yyout;

char* tipoDato;
char* tipoDatoParametro;
char* nombreFuncion;
char* nombreID;

int contadorVariables = 0;
int contadorParametros = 0;



/* Line 189 of yacc.c  */
#line 100 "ejemplo.tab.c"

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
     VOID = 285,
     GOTO = 286,
     TIPO_DATO = 287,
     ID = 288,
     SIZEOF = 289,
     MAYORIGUAl = 290
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 27 "../src/ejemplo.y"

  int ival;
  double dval;
  char cval[30];



/* Line 214 of yacc.c  */
#line 179 "ejemplo.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 191 "ejemplo.tab.c"

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
#define YYLAST   387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  223

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,    42,    58,     2,
      44,    45,    40,    38,    48,    39,    59,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    47,
      36,    51,    35,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,    43,     2,     2,     2,     2,     2,
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
      37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    16,    21,
      22,    27,    32,    34,    36,    37,    39,    43,    46,    47,
      49,    51,    53,    55,    57,    59,    61,    67,    68,    70,
      73,    74,    76,    79,    80,    82,    85,    86,    91,    93,
      97,    98,   103,   104,   106,   108,   109,   112,   114,   117,
     121,   126,   128,   132,   134,   138,   141,   147,   155,   161,
     167,   175,   185,   190,   194,   198,   202,   205,   208,   212,
     214,   218,   220,   224,   226,   229,   231,   233,   237,   239,
     243,   245,   249,   253,   255,   259,   263,   267,   271,   273,
     277,   281,   283,   287,   291,   295,   297,   300,   303,   306,
     309,   312,   315,   318,   321,   326,   331,   333,   336,   341,
     345,   349,   352,   355,   357,   359,   361,   363,   367,   368,
     370,   374,   376,   378,   380,   382
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    -1,    61,    62,    -1,    46,    -1,    63,
      46,    -1,    71,    46,    -1,    -1,    32,    33,    64,    66,
      -1,    -1,    30,    33,    65,    66,    -1,    44,    68,    45,
      67,    -1,    47,    -1,    72,    -1,    -1,    69,    -1,    68,
      48,    69,    -1,    32,    70,    -1,    -1,    33,    -1,    72,
      -1,    87,    -1,    88,    -1,    89,    -1,    91,    -1,    90,
      -1,    49,    74,    75,    73,    50,    -1,    -1,    46,    -1,
      73,    46,    -1,    -1,    76,    -1,    74,    76,    -1,    -1,
      71,    -1,    75,    71,    -1,    -1,    32,    77,    78,    47,
      -1,    79,    -1,    79,    48,    78,    -1,    -1,    33,    80,
      81,    82,    -1,    -1,    84,    -1,    83,    -1,    -1,    51,
      85,    -1,    40,    -1,    83,    40,    -1,    52,    92,    53,
      -1,    84,    52,    92,    53,    -1,    92,    -1,    49,    86,
      50,    -1,    85,    -1,    86,    48,    85,    -1,    92,    47,
      -1,    19,    44,    92,    45,    71,    -1,    19,    44,    92,
      45,    71,    20,    71,    -1,    21,    44,    92,    45,    71,
      -1,    22,    44,    92,    45,    71,    -1,    23,    71,    22,
      44,    92,    45,    47,    -1,    24,    44,    92,    47,    92,
      47,    92,    45,    71,    -1,    28,    92,    54,    71,    -1,
      29,    54,    71,    -1,    33,    54,    71,    -1,    25,    92,
      47,    -1,    27,    47,    -1,    26,    47,    -1,    31,    33,
      47,    -1,    93,    -1,    92,    48,    93,    -1,    94,    -1,
     101,   105,    93,    -1,    95,    -1,    95,    55,    -1,    94,
      -1,    96,    -1,    95,     6,    96,    -1,    97,    -1,    96,
       7,    97,    -1,    98,    -1,    97,     8,    98,    -1,    97,
       9,    98,    -1,    99,    -1,    98,    10,    99,    -1,    98,
      35,    99,    -1,    98,    11,    99,    -1,    98,    36,    99,
      -1,   100,    -1,    99,    38,   100,    -1,    99,    39,   100,
      -1,   101,    -1,   100,    40,   101,    -1,   100,    41,   101,
      -1,   100,    42,   101,    -1,   102,    -1,    12,   101,    -1,
      13,   101,    -1,    39,   101,    -1,    38,   101,    -1,    56,
     101,    -1,    57,   101,    -1,    58,   101,    -1,    83,   101,
      -1,    34,    44,   101,    45,    -1,    34,    44,    32,    45,
      -1,   103,    -1,   102,    84,    -1,   102,    44,   104,    45,
      -1,   102,    59,    33,    -1,   102,    18,    33,    -1,   102,
      12,    -1,   102,    13,    -1,    33,    -1,     4,    -1,     3,
      -1,     5,    -1,    44,    92,    45,    -1,    -1,    92,    -1,
     104,    48,    92,    -1,    51,    -1,    14,    -1,    15,    -1,
      16,    -1,    17,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    81,    81,    82,    85,    86,    87,    91,    91,    92,
      92,    95,    98,    99,   101,   102,   103,   106,   109,   110,
     114,   115,   116,   117,   118,   119,   123,   126,   127,   128,
     131,   132,   133,   136,   137,   138,   143,   143,   146,   147,
     150,   150,   153,   154,   155,   158,   159,   162,   163,   166,
     167,   170,   171,   174,   175,   180,   185,   186,   187,   192,
     193,   194,   199,   200,   201,   206,   207,   208,   209,   214,
     215,   217,   218,   220,   221,   221,   223,   224,   226,   227,
     229,   230,   231,   233,   234,   235,   236,   237,   239,   240,
     241,   243,   244,   245,   246,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   260,   261,   262,   263,
     264,   265,   266,   268,   269,   270,   271,   272,   275,   276,
     277,   280,   281,   282,   283,   284
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
  "CONTINUE", "BREAK", "CASE", "DEFAULT", "VOID", "GOTO", "TIPO_DATO",
  "ID", "SIZEOF", "'>'", "'<'", "MAYORIGUAl", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "'('", "')'", "'\\n'", "';'", "','", "'{'", "'}'", "'='",
  "'['", "']'", "':'", "'?'", "'~'", "'!'", "'&'", "'.'", "$accept",
  "input", "line", "funcion", "$@1", "$@2", "parametros",
  "declaracionODefinicion", "listaParametros", "tipo", "opcionId",
  "sentencia", "sentCompuesta", "barraN", "listaDeclaraciones",
  "listaSentencias", "sentenciaDeclaracion", "$@3", "listaVarSimples",
  "unaVarSimple", "$@4", "tipoVariable", "asignacion", "puntero", "array",
  "inicializador", "listaDeInicializadores", "sentExpresion",
  "sentSeleccion", "sentIteracion", "sentEtiquetada", "sentSalto", "exp",
  "expAsignacion", "expCondicional", "expOr", "expAnd", "expIgualdad",
  "expRelacional", "expAditiva", "expMultiplicativa", "expUnaria",
  "expSufijo", "expPrimaria", "listaArgumentos", "operAsignacion", 0
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
     285,   286,   287,   288,   289,    62,    60,   290,    43,    45,
      42,    47,    37,    94,    40,    41,    10,    59,    44,   123,
     125,    61,    91,    93,    58,    63,   126,    33,    38,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    62,    64,    63,    65,
      63,    66,    67,    67,    68,    68,    68,    69,    70,    70,
      71,    71,    71,    71,    71,    71,    72,    73,    73,    73,
      74,    74,    74,    75,    75,    75,    77,    76,    78,    78,
      80,    79,    81,    81,    81,    82,    82,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    88,    88,    88,    89,
      89,    89,    90,    90,    90,    91,    91,    91,    91,    92,
      92,    93,    93,    94,    94,    92,    95,    95,    96,    96,
      97,    97,    97,    98,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   103,   104,   104,
     104,   105,   105,   105,   105,   105
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     0,     4,     0,
       4,     4,     1,     1,     0,     1,     3,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     5,     0,     1,     2,
       0,     1,     2,     0,     1,     2,     0,     4,     1,     3,
       0,     4,     0,     1,     1,     0,     2,     1,     2,     3,
       4,     1,     3,     1,     3,     2,     5,     7,     5,     5,
       7,     9,     4,     3,     3,     3,     2,     2,     3,     1,
       3,     1,     3,     1,     2,     1,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     4,     1,     2,     4,     3,
       3,     2,     2,     1,     1,     1,     1,     3,     0,     1,
       3,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,   115,   114,   116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,    47,     0,     4,    30,     0,
       0,     0,     3,     0,     0,    20,     0,    21,    22,    23,
      25,    24,     0,    69,    71,    73,    76,    78,    80,    83,
      88,    91,    95,   106,   113,    96,    97,     0,     0,     0,
       0,     0,     0,    67,    66,     0,     0,     9,     0,     7,
       0,     0,    99,    98,     0,    36,    33,    31,   100,   101,
     102,     5,     6,    47,   103,    55,     0,     0,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,   125,   121,     0,   111,   112,     0,
     118,     0,     0,   107,     0,     0,     0,     0,     0,    65,
       0,    63,     0,    68,     0,    64,     0,     0,   117,     0,
      34,    27,    32,    70,    71,    77,    91,    79,    81,    82,
      84,    86,    85,    87,    89,    90,    92,    93,    94,    72,
     110,   119,     0,     0,   109,     0,     0,     0,     0,     0,
       0,    62,    14,    10,     8,   105,   104,    40,     0,    38,
      28,    35,     0,   108,     0,    49,     0,    56,    58,    59,
       0,     0,    18,     0,    15,    42,    37,     0,    29,    26,
     120,    50,     0,     0,     0,    19,    17,     0,     0,    45,
      44,    43,    39,    57,    60,     0,    12,    11,    13,    16,
       0,    41,    48,     0,     0,    46,    51,    61,    53,     0,
       0,    52,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    32,    33,   124,   122,   163,   207,   183,   184,
     196,    34,    35,   172,    76,   131,    77,   129,   168,   169,
     185,   199,   211,    36,   113,   215,   219,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   152,   106
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -174
static const yytype_int16 yypact[] =
{
    -174,   190,  -174,  -174,  -174,  -174,    99,    99,   -21,   -16,
      -4,   326,     9,    99,    29,    36,    99,    16,    63,    95,
      98,    87,   100,    99,    99,  -174,    99,  -174,   116,    99,
      99,    99,  -174,   113,   117,  -174,   329,  -174,  -174,  -174,
    -174,  -174,    58,  -174,  -174,    -1,   168,   157,     0,   129,
      85,    -8,    20,  -174,  -174,  -174,  -174,    99,    99,    99,
     158,    99,   122,  -174,  -174,     4,   326,  -174,   135,  -174,
     326,    17,  -174,  -174,    -6,  -174,   237,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,  -174,    99,    99,  -174,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,  -174,  -174,  -174,  -174,  -174,    99,  -174,  -174,   150,
      99,    99,   151,   134,    23,    32,    33,   143,   124,  -174,
     326,  -174,   144,  -174,   144,  -174,   146,   147,  -174,   156,
    -174,   279,  -174,  -174,  -174,   168,  -174,   157,     0,     0,
     129,   129,   129,   129,    85,    85,  -174,  -174,  -174,  -174,
    -174,   148,    62,    12,  -174,    99,   326,   326,   326,    99,
      99,  -174,   166,  -174,  -174,  -174,  -174,  -174,   152,   160,
    -174,  -174,   -34,  -174,    99,  -174,    14,   180,  -174,  -174,
      73,   126,   171,    74,  -174,   -25,  -174,   156,  -174,  -174,
     148,  -174,   326,   163,    99,  -174,  -174,   111,   166,   154,
     185,   134,  -174,  -174,  -174,    75,  -174,  -174,  -174,  -174,
      96,  -174,  -174,   326,    96,  -174,   148,  -174,  -174,   114,
      96,  -174,  -174
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,  -174,  -174,  -174,  -174,  -174,   102,  -174,  -174,    34,
    -174,    -7,    30,  -174,  -174,  -174,   155,  -174,    46,  -174,
    -174,  -174,  -174,    50,    52,  -173,  -174,  -174,  -174,  -174,
    -174,  -174,   -13,   -72,   -69,  -174,   164,   149,    86,    22,
      82,    -5,  -174,  -174,  -174,  -174
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      62,    55,    56,    65,    60,    87,   101,   102,   103,   104,
      92,    93,   188,    74,   133,    25,   189,   134,    72,    73,
       3,     4,     5,    57,    78,    79,    80,   111,    58,     6,
       7,    84,   107,   108,   149,    94,    95,   134,   109,   128,
      59,   218,    86,   105,   114,   115,   116,   222,   118,   126,
      54,    22,    86,    61,    88,    23,    24,    25,   120,   121,
      86,    26,    86,   125,   110,   175,   127,   191,   156,   130,
      66,    86,   111,    29,    30,    31,    63,   157,   158,   112,
      86,    86,   136,    64,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   146,   147,   148,    67,   151,   153,     3,
       4,     5,     3,     4,     5,    85,    86,   173,     6,     7,
     174,     6,     7,   161,   140,   141,   142,   143,   193,   197,
     213,    86,   198,    86,   171,    98,    99,   100,    68,    54,
      22,    69,    54,    22,    23,    24,    25,    23,    24,    25,
      26,    70,   176,    26,    71,   214,   180,   181,    75,   177,
     178,   179,    29,    30,    31,    29,    30,    31,   206,    81,
      28,   190,   220,    82,   221,    90,    91,    96,    97,   119,
      86,   160,    86,   194,    86,    89,   138,   139,   144,   145,
     117,   205,   123,   150,   154,   203,   155,   159,   162,   167,
       2,   165,   166,     3,     4,     5,    86,   216,   182,   186,
     192,   216,     6,     7,   195,   210,   217,   216,   187,     8,
     204,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,   212,   164,   208,    23,    24,
      25,   132,   209,   202,    26,   200,    27,   201,   137,    28,
       3,     4,     5,     0,     0,     0,    29,    30,    31,     6,
       7,   135,     0,     0,     0,     0,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     0,    19,    75,
      21,    22,     0,     0,     0,    23,    24,    25,     0,     0,
       0,    26,     3,     4,     5,     0,    28,     0,     0,     0,
       0,     6,     7,    29,    30,    31,     0,     0,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
      19,     0,    21,    22,     0,     0,     0,    23,    24,    25,
       0,     0,     0,    26,     0,   170,     0,     0,    28,     3,
       4,     5,     3,     4,     5,    29,    30,    31,     6,     7,
       0,     6,     7,     0,     0,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     0,    19,     0,    21,
      22,     0,    54,    22,    23,    24,    25,    23,    24,    83,
      26,     0,     0,    26,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    29,    30,    31
};

static const yytype_int16 yycheck[] =
{
      13,     6,     7,    16,    11,     6,    14,    15,    16,    17,
      10,    11,    46,    26,    86,    40,    50,    86,    23,    24,
       3,     4,     5,    44,    29,    30,    31,    52,    44,    12,
      13,    36,    12,    13,   106,    35,    36,   106,    18,    45,
      44,   214,    48,    51,    57,    58,    59,   220,    61,    32,
      33,    34,    48,    44,    55,    38,    39,    40,    54,    66,
      48,    44,    48,    70,    44,    53,    71,    53,    45,    76,
      54,    48,    52,    56,    57,    58,    47,    45,    45,    59,
      48,    48,    87,    47,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    33,   110,   111,     3,
       4,     5,     3,     4,     5,    47,    48,    45,    12,    13,
      48,    12,    13,   120,    92,    93,    94,    95,    45,    45,
      45,    48,    48,    48,   131,    40,    41,    42,    33,    33,
      34,    33,    33,    34,    38,    39,    40,    38,    39,    40,
      44,    54,   155,    44,    44,    49,   159,   160,    32,   156,
     157,   158,    56,    57,    58,    56,    57,    58,    47,    46,
      49,   174,    48,    46,    50,     8,     9,    38,    39,    47,
      48,    47,    48,    47,    48,     7,    90,    91,    96,    97,
      22,   194,    47,    33,    33,   192,    52,    44,    44,    33,
       0,    45,    45,     3,     4,     5,    48,   210,    32,    47,
      20,   214,    12,    13,    33,    51,   213,   220,    48,    19,
      47,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    40,   124,   197,    38,    39,
      40,    76,   198,   187,    44,   185,    46,   185,    89,    49,
       3,     4,     5,    -1,    -1,    -1,    56,    57,    58,    12,
      13,    87,    -1,    -1,    -1,    -1,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    44,     3,     4,     5,    -1,    49,    -1,    -1,    -1,
      -1,    12,    13,    56,    57,    58,    -1,    -1,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    -1,    33,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    44,    -1,    46,    -1,    -1,    49,     3,
       4,     5,     3,     4,     5,    56,    57,    58,    12,    13,
      -1,    12,    13,    -1,    -1,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    -1,    33,
      34,    -1,    33,    34,    38,    39,    40,    38,    39,    40,
      44,    -1,    -1,    44,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    56,    57,    58
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,     0,     3,     4,     5,    12,    13,    19,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    38,    39,    40,    44,    46,    49,    56,
      57,    58,    62,    63,    71,    72,    83,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    33,   101,   101,    44,    44,    44,
      71,    44,    92,    47,    47,    92,    54,    33,    33,    33,
      54,    44,   101,   101,    92,    32,    74,    76,   101,   101,
     101,    46,    46,    40,   101,    47,    48,     6,    55,     7,
       8,     9,    10,    11,    35,    36,    38,    39,    40,    41,
      42,    14,    15,    16,    17,    51,   105,    12,    13,    18,
      44,    52,    59,    84,    92,    92,    92,    22,    92,    47,
      54,    71,    65,    47,    64,    71,    32,   101,    45,    77,
      71,    75,    76,    93,    94,    96,   101,    97,    98,    98,
      99,    99,    99,    99,   100,   100,   101,   101,   101,    93,
      33,    92,   104,    92,    33,    52,    45,    45,    45,    44,
      47,    71,    44,    66,    66,    45,    45,    33,    78,    79,
      46,    71,    73,    45,    48,    53,    92,    71,    71,    71,
      92,    92,    32,    68,    69,    80,    47,    48,    46,    50,
      92,    53,    20,    45,    47,    33,    70,    45,    48,    81,
      83,    84,    78,    71,    47,    92,    47,    67,    72,    69,
      51,    82,    40,    45,    49,    85,    92,    71,    85,    86,
      48,    50,    85
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
#line 91 "../src/ejemplo.y"
    {tipoDato = (yyvsp[(1) - (2)].cval); nombreFuncion = (yyvsp[(2) - (2)].cval); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 91 "../src/ejemplo.y"
    {contadorParametros = 0; ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 92 "../src/ejemplo.y"
    {tipoDato = (yyvsp[(1) - (2)].cval); nombreFuncion = (yyvsp[(2) - (2)].cval); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 92 "../src/ejemplo.y"
    {contadorParametros = 0; ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 98 "../src/ejemplo.y"
    {printf("Se declara la funcion %s con %d parametros y devolucion de tipo %s  \n",nombreFuncion,contadorParametros,tipoDato); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 99 "../src/ejemplo.y"
    {printf("Se define la funcion %s con %d parametros y devolucion de tipo %s \n",nombreFuncion,contadorParametros,tipoDato); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 102 "../src/ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 103 "../src/ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 123 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia Compuesta. \n"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 143 "../src/ejemplo.y"
    {tipoDato = (yyvsp[(1) - (1)].cval); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 143 "../src/ejemplo.y"
    {printf("Se declararon %d variables de tipo %s\n",contadorVariables,(yyvsp[(1) - (4)].cval)); contadorVariables = 0; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 150 "../src/ejemplo.y"
    {nombreID = (yyvsp[(1) - (1)].cval); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 153 "../src/ejemplo.y"
    {printf("Se declaro el identificador \"%s\" de tipo %s\n",nombreID,tipoDato); contadorVariables++; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 154 "../src/ejemplo.y"
    {printf("Se declaro el array \"%s\" de tipo %s\n",nombreID,tipoDato); contadorVariables++; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 155 "../src/ejemplo.y"
    {printf("Se declaro el puntero \"%s\" de tipo %s\n",nombreID,tipoDato); contadorVariables++; ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 180 "../src/ejemplo.y"
    {printf ("El resultado de la expresion es: %g \n", (yyvsp[(1) - (2)].dval)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 185 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Seleccion IF.\n"); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 186 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 187 "../src/ejemplo.y"
    {printf("Se enconto una Sentencia de Seleccion SWITCH.\n"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 192 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion WHILE.\n"); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 193 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion DO WHILE.\n"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 194 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion FOR.\n"); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 199 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Etiqueta CASE.\n"); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 200 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 206 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Salto RETURN. \n"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 207 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Salto BREAK.\n"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 208 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Salto CONTINUE.\n"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 209 "../src/ejemplo.y"
    {printf("Se encontro una Sentencia de Salto GOTO. \n"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 218 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(3) - (3)].dval); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 221 "../src/ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 224 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 227 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 230 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 231 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 234 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 235 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 236 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 237 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 240 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 241 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 244 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 245 "../src/ejemplo.y"
    {if((yyvsp[(3) - (3)].dval) == 0) {printf("ERROR/: No se puede dividir por 0 \n"); return 1; } else (yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 246 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].ival) % (yyvsp[(3) - (3)].ival); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 249 "../src/ejemplo.y"
    {(yyval.dval) = ++ (yyvsp[(2) - (2)].dval); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 250 "../src/ejemplo.y"
    {(yyval.dval) = -- (yyvsp[(2) - (2)].dval); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 251 "../src/ejemplo.y"
    {(yyval.dval) = - (yyvsp[(2) - (2)].dval); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 252 "../src/ejemplo.y"
    {(yyval.dval) = + (yyvsp[(2) - (2)].dval); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 253 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 254 "../src/ejemplo.y"
    {(yyval.dval) = !(yyvsp[(2) - (2)].dval); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 255 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 256 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 257 "../src/ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 258 "../src/ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 261 "../src/ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 262 "../src/ejemplo.y"
    {(yyval.dval) = 0; printf("Se invoco a la funcion %s \n",(yyvsp[(1) - (4)].cval)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 263 "../src/ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 264 "../src/ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 265 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) ++; ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 266 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) --; ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 269 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 270 "../src/ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 272 "../src/ejemplo.y"
    {(yyval.dval) = ( (yyvsp[(2) - (3)].dval) ); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2064 "ejemplo.tab.c"
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
#line 288 "../src/ejemplo.y"
 

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
