
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
#line 27 "ejemplo.y"

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
#define YYLAST   430

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNRULES -- Number of states.  */
#define YYNSTATES  228

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,     2,     2,    42,    57,     2,
      43,    44,    40,    38,    47,    39,    58,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    46,
      36,    50,    35,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    18,    19,
      24,    30,    32,    34,    35,    37,    41,    44,    45,    47,
      50,    52,    54,    56,    59,    61,    67,    68,    70,    73,
      74,    77,    80,    82,    85,    87,    90,    91,    97,    99,
     103,   104,   109,   110,   112,   114,   115,   118,   120,   123,
     127,   132,   134,   138,   140,   144,   148,   154,   162,   168,
     174,   183,   193,   198,   202,   206,   210,   213,   216,   220,
     222,   226,   228,   232,   234,   240,   242,   244,   246,   248,
     250,   252,   256,   258,   262,   264,   268,   272,   274,   278,
     282,   286,   290,   292,   296,   300,   302,   306,   310,   314,
     316,   319,   322,   325,   328,   331,   334,   337,   340,   345,
     350,   352,   355,   360,   364,   368,   371,   374,   376,   378,
     380,   382,   386,   387,   389
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    -1,    60,    61,    -1,    45,    -1,    62,
      71,    -1,    69,    71,    -1,     1,    45,    -1,    -1,    32,
      33,    63,    64,    -1,    43,    66,    44,    71,    65,    -1,
      46,    -1,    70,    -1,    -1,    67,    -1,    66,    47,    67,
      -1,    32,    68,    -1,    -1,    33,    -1,    70,    71,    -1,
      86,    -1,    87,    -1,    88,    -1,    90,    71,    -1,    89,
      -1,    48,    71,    72,    71,    49,    -1,    -1,    45,    -1,
      71,    45,    -1,    -1,    72,    73,    -1,    72,    74,    -1,
      75,    -1,    73,    75,    -1,    69,    -1,    74,    69,    -1,
      -1,    32,    76,    77,    46,    71,    -1,    78,    -1,    78,
      47,    77,    -1,    -1,    33,    79,    80,    81,    -1,    -1,
      83,    -1,    82,    -1,    -1,    50,    84,    -1,    40,    -1,
      40,    82,    -1,    51,    91,    52,    -1,    51,    91,    52,
      83,    -1,    92,    -1,    48,    85,    49,    -1,    84,    -1,
      85,    47,    84,    -1,    91,    46,    71,    -1,    19,    43,
      91,    44,    69,    -1,    19,    43,    91,    44,    69,    20,
      69,    -1,    21,    43,    91,    44,    69,    -1,    22,    43,
      91,    44,    69,    -1,    23,    69,    22,    43,    91,    44,
      46,    71,    -1,    24,    43,    91,    46,    91,    46,    91,
      44,    69,    -1,    28,    91,    53,    69,    -1,    29,    53,
      69,    -1,    33,    53,    69,    -1,    25,    91,    46,    -1,
      27,    46,    -1,    26,    46,    -1,    31,    33,    46,    -1,
      92,    -1,    91,    47,    92,    -1,    93,    -1,   101,    94,
      92,    -1,    95,    -1,    95,    54,    91,    53,    93,    -1,
      50,    -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,
      96,    -1,    95,     6,    96,    -1,    97,    -1,    96,     7,
      97,    -1,    98,    -1,    97,     8,    98,    -1,    97,     9,
      98,    -1,    99,    -1,    98,    36,    99,    -1,    98,    35,
      99,    -1,    98,    11,    99,    -1,    98,    10,    99,    -1,
     100,    -1,    99,    38,   100,    -1,    99,    39,   100,    -1,
     101,    -1,   100,    40,   101,    -1,   100,    41,   101,    -1,
     100,    42,   101,    -1,   102,    -1,    12,   101,    -1,    13,
     101,    -1,    39,   101,    -1,    38,   101,    -1,    55,   101,
      -1,    56,   101,    -1,    57,   101,    -1,    82,   101,    -1,
      34,    43,   101,    44,    -1,    34,    43,    32,    44,    -1,
     103,    -1,   102,    83,    -1,   102,    43,   104,    44,    -1,
     102,    58,    33,    -1,   102,    18,    33,    -1,   102,    12,
      -1,   102,    13,    -1,    33,    -1,     4,    -1,     3,    -1,
       5,    -1,    43,    91,    44,    -1,    -1,    92,    -1,   104,
      47,    92,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    81,    84,    85,    86,    87,    91,    91,
      94,    97,    98,   100,   101,   102,   105,   108,   109,   113,
     114,   115,   116,   117,   118,   122,   125,   126,   127,   130,
     131,   132,   135,   136,   139,   140,   145,   145,   148,   149,
     152,   152,   154,   155,   156,   159,   160,   163,   164,   167,
     168,   171,   172,   175,   176,   181,   186,   187,   188,   193,
     194,   195,   200,   201,   202,   207,   208,   209,   210,   214,
     215,   218,   219,   222,   223,   226,   227,   228,   229,   230,
     233,   234,   237,   238,   241,   242,   243,   246,   247,   248,
     249,   250,   253,   254,   255,   258,   259,   260,   261,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     277,   278,   279,   280,   281,   282,   283,   286,   287,   288,
     289,   290,   293,   294,   295
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
  "'%'", "'('", "')'", "'\\n'", "';'", "','", "'{'", "'}'", "'='", "'['",
  "']'", "':'", "'?'", "'~'", "'!'", "'&'", "'.'", "$accept", "input",
  "line", "funcion", "$@1", "parametros", "declaracionODefinicion",
  "listaParametros", "tipo", "opcionId", "sentencia", "sentCompuesta",
  "saltoLinea", "decalracionOSentencia", "listaDeclaraciones",
  "listaSentencias", "sentenciaDeclaracion", "$@2", "listaVarSimples",
  "unaVarSimple", "$@3", "tipoVariable", "asignacion", "puntero", "array",
  "inicializador", "listaDeInicializadores", "sentExpresion",
  "sentSeleccion", "sentIteracion", "sentEtiquetada", "sentSalto", "exp",
  "expAsignacion", "expCondicional", "operAsignacion", "expOr", "expAnd",
  "expIgualdad", "expRelacional", "expAditiva", "expMultiplicativa",
  "expUnaria", "expSufijo", "expPrimaria", "listaArgumentos", 0
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
      42,    47,    37,    40,    41,    10,    59,    44,   123,   125,
      61,    91,    93,    58,    63,   126,    33,    38,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    61,    61,    61,    61,    63,    62,
      64,    65,    65,    66,    66,    66,    67,    68,    68,    69,
      69,    69,    69,    69,    69,    70,    71,    71,    71,    72,
      72,    72,    73,    73,    74,    74,    76,    75,    77,    77,
      79,    78,    80,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    87,    87,    87,    88,
      88,    88,    89,    89,    89,    90,    90,    90,    90,    91,
      91,    92,    92,    93,    93,    94,    94,    94,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    98,    98,    98,
      98,    98,    99,    99,    99,   100,   100,   100,   100,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     102,   102,   102,   102,   102,   102,   102,   103,   103,   103,
     103,   103,   104,   104,   104
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     0,     4,
       5,     1,     1,     0,     1,     3,     2,     0,     1,     2,
       1,     1,     1,     2,     1,     5,     0,     1,     2,     0,
       2,     2,     1,     2,     1,     2,     0,     5,     1,     3,
       0,     4,     0,     1,     1,     0,     2,     1,     2,     3,
       4,     1,     3,     1,     3,     3,     5,     7,     5,     5,
       8,     9,     4,     3,     3,     3,     2,     2,     3,     1,
       3,     1,     3,     1,     5,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     4,
       1,     2,     4,     3,     3,     2,     2,     1,     1,     1,
       1,     3,     0,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,   119,   118,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,     0,    47,     0,     4,    26,     0,
       0,     0,     3,    26,    26,    26,     0,    20,    21,    22,
      24,    26,     0,    69,    71,    73,    80,    82,    84,    87,
      92,    95,    99,   110,     7,   117,   100,   101,     0,     0,
       0,     0,     0,     0,    67,    66,     0,     0,     0,     8,
       0,     0,   103,   102,    48,     0,    27,    29,   104,   105,
     106,     5,     6,    19,   107,    23,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    75,     0,   115,   116,
       0,   122,     0,     0,   111,     0,     0,     0,     0,     0,
      65,     0,    63,    68,     0,    64,     0,     0,   121,    28,
      26,    55,    70,    81,    95,     0,    83,    85,    86,    91,
      90,    89,    88,    93,    94,    96,    97,    98,    72,   114,
     123,     0,     0,   113,     0,     0,     0,     0,     0,    62,
      13,     9,   109,   108,    36,    34,     0,    30,    31,    32,
       0,   112,     0,    49,    56,    58,    59,     0,     0,    17,
       0,    14,     0,    25,    33,    35,    74,   124,    50,     0,
       0,     0,    18,    16,    26,     0,    40,     0,    38,    57,
      26,     0,     0,    15,    42,    26,     0,    60,     0,    11,
      10,    12,    45,    44,    43,    37,    39,    61,     0,    41,
       0,    46,    51,    53,     0,     0,    52,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    32,    33,   124,   161,   210,   180,   181,   193,
      34,    35,    77,   130,   167,   168,   169,   182,   197,   198,
     204,   212,   219,    36,   114,   221,   224,    37,    38,    39,
      40,    41,    42,    43,    44,   107,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   151
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -172
static const yytype_int16 yypact[] =
{
    -172,   185,  -172,   -13,  -172,  -172,  -172,   373,   373,     2,
      19,    33,   277,    57,   373,    58,    71,   373,    79,    90,
      97,    80,    88,   373,   373,  -172,   373,  -172,    89,   373,
     373,   373,  -172,    89,    89,    89,   373,  -172,  -172,  -172,
    -172,    89,    60,  -172,  -172,    -3,   128,   105,     7,    77,
      70,     9,    -4,  -172,  -172,  -172,  -172,  -172,   373,   373,
     373,   114,   373,    73,  -172,  -172,   -17,   277,    91,  -172,
     277,   309,  -172,  -172,  -172,    -6,  -172,    93,  -172,  -172,
    -172,    93,    93,    93,  -172,    93,    89,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,  -172,  -172,  -172,  -172,  -172,   373,  -172,  -172,
     106,   373,   373,   107,  -172,    16,    28,    30,    98,    75,
    -172,   277,  -172,  -172,   102,  -172,   108,   110,  -172,  -172,
     231,    93,  -172,   128,  -172,   -16,   105,     7,     7,    77,
      77,    77,    77,    70,    70,  -172,  -172,  -172,  -172,  -172,
    -172,    34,   -37,  -172,   277,   277,   277,   373,   373,  -172,
     117,  -172,  -172,  -172,  -172,  -172,     8,   118,   277,  -172,
     373,  -172,   373,    95,   135,  -172,  -172,    36,    78,   124,
      38,  -172,   126,  -172,  -172,  -172,  -172,  -172,  -172,   277,
     115,   373,  -172,  -172,    89,   117,  -172,   116,   113,  -172,
      89,    40,    25,  -172,    -5,    89,   126,    93,   277,  -172,
    -172,  -172,   119,  -172,  -172,    93,  -172,  -172,   341,  -172,
     341,  -172,  -172,  -172,    54,   341,  -172,  -172
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,   -32,  -172,
     -12,   -38,   -22,  -172,  -172,  -172,    -1,  -172,   -41,  -172,
    -172,  -172,  -172,   -24,  -171,  -164,  -172,  -172,  -172,  -172,
    -172,  -172,   -10,   -67,     0,  -172,  -172,    83,    84,    35,
     -28,    31,    -2,  -172,  -172,  -172
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      61,    74,   188,    88,    63,    56,    57,    66,   108,   109,
      87,    81,    82,    83,   110,   173,    75,    93,    94,    85,
     132,    72,    73,   102,   103,   104,   105,    78,    79,    80,
      87,    87,    54,   214,    84,    25,   121,   170,   128,   111,
     148,    87,    95,    96,   150,    58,   112,   112,   115,   116,
     117,    89,   119,   129,   113,   122,   223,   183,   125,   106,
     154,   227,    59,    87,   131,   139,   140,   141,   142,   127,
     129,   209,   155,    28,   156,    87,    60,    87,   171,   135,
     190,   172,   194,    87,   208,   195,   134,    87,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   145,   146,   147,
      62,   225,   152,   226,    64,   187,    86,    87,   166,   159,
      99,   100,   101,    91,    92,    97,    98,    65,   165,   120,
      87,   158,    87,    68,   191,    87,   137,   138,   143,   144,
      69,    71,    67,    70,    76,    90,   118,   123,   129,   149,
     153,   157,   174,   175,   176,   160,   112,   177,   178,   179,
     164,   222,   162,   222,   163,   189,   185,   192,   222,   196,
     206,   200,   205,   203,   211,   216,   184,     0,   134,   218,
     186,   133,   202,     0,   136,     0,     0,   199,   207,     0,
     213,   201,     0,   215,     0,     2,     3,     0,     4,     5,
       6,     0,     0,     0,     0,     0,   217,     7,     8,     0,
       0,     0,     0,     0,     9,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     0,    19,    20,    21,    22,
       0,     0,     0,    23,    24,    25,     0,     0,    26,     0,
      27,     0,     0,    28,     4,     5,     6,     0,     0,     0,
      29,    30,    31,     7,     8,     0,     0,     0,     0,     0,
       9,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     0,    19,   164,    21,    22,     0,     0,     0,    23,
      24,    25,     0,     0,    26,     0,    76,     0,     0,    28,
       4,     5,     6,     0,     0,     0,    29,    30,    31,     7,
       8,     0,     0,     0,     0,     0,     9,     0,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     0,    19,     0,
      21,    22,     4,     5,     6,    23,    24,    25,     0,     0,
      26,     7,     8,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    29,    30,    31,     0,     0,     0,     0,     0,
       0,   126,    55,    22,     4,     5,     6,    23,    24,    25,
       0,     0,    26,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,    55,    22,     4,     5,     6,    23,
      24,    25,     0,     0,    26,     7,     8,     0,     0,   220,
       0,     0,     0,     0,     0,     0,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,    55,    22,     0,     0,
       0,    23,    24,    25,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,    30,
      31
};

static const yytype_int16 yycheck[] =
{
      12,    25,   173,     6,    14,     7,     8,    17,    12,    13,
      47,    33,    34,    35,    18,    52,    26,    10,    11,    41,
      87,    23,    24,    14,    15,    16,    17,    29,    30,    31,
      47,    47,    45,   204,    36,    40,    53,    53,    44,    43,
     107,    47,    35,    36,   111,    43,    51,    51,    58,    59,
      60,    54,    62,    45,    58,    67,   220,    49,    70,    50,
      44,   225,    43,    47,    86,    93,    94,    95,    96,    71,
      45,    46,    44,    48,    44,    47,    43,    47,    44,    89,
      44,    47,    44,    47,    44,    47,    88,    47,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      43,    47,   112,    49,    46,   172,    46,    47,   130,   121,
      40,    41,    42,     8,     9,    38,    39,    46,   130,    46,
      47,    46,    47,    33,    46,    47,    91,    92,    97,    98,
      33,    43,    53,    53,    45,     7,    22,    46,    45,    33,
      33,    43,   154,   155,   156,    43,    51,   157,   158,    32,
      32,   218,    44,   220,    44,    20,   168,    33,   225,    33,
      47,    46,    46,   195,   202,   206,   167,    -1,   170,    50,
     170,    88,   194,    -1,    90,    -1,    -1,   189,   200,    -1,
     204,   191,    -1,   205,    -1,     0,     1,    -1,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,   208,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    43,    -1,
      45,    -1,    -1,    48,     3,     4,     5,    -1,    -1,    -1,
      55,    56,    57,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    43,    -1,    45,    -1,    -1,    48,
       3,     4,     5,    -1,    -1,    -1,    55,    56,    57,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    -1,
      33,    34,     3,     4,     5,    38,    39,    40,    -1,    -1,
      43,    12,    13,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,     3,     4,     5,    38,    39,    40,
      -1,    -1,    43,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,     3,     4,     5,    38,
      39,    40,    -1,    -1,    43,    12,    13,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,     0,     1,     3,     4,     5,    12,    13,    19,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    31,
      32,    33,    34,    38,    39,    40,    43,    45,    48,    55,
      56,    57,    61,    62,    69,    70,    82,    86,    87,    88,
      89,    90,    91,    92,    93,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    45,    33,   101,   101,    43,    43,
      43,    69,    43,    91,    46,    46,    91,    53,    33,    33,
      53,    43,   101,   101,    82,    91,    45,    71,   101,   101,
     101,    71,    71,    71,   101,    71,    46,    47,     6,    54,
       7,     8,     9,    10,    11,    35,    36,    38,    39,    40,
      41,    42,    14,    15,    16,    17,    50,    94,    12,    13,
      18,    43,    51,    58,    83,    91,    91,    91,    22,    91,
      46,    53,    69,    46,    63,    69,    32,   101,    44,    45,
      72,    71,    92,    96,   101,    91,    97,    98,    98,    99,
      99,    99,    99,   100,   100,   101,   101,   101,    92,    33,
      92,   104,    91,    33,    44,    44,    44,    43,    46,    69,
      43,    64,    44,    44,    32,    69,    71,    73,    74,    75,
      53,    44,    47,    52,    69,    69,    69,    91,    91,    32,
      66,    67,    76,    49,    75,    69,    93,    92,    83,    20,
      44,    46,    33,    68,    44,    47,    33,    77,    78,    69,
      46,    91,    71,    67,    79,    46,    47,    71,    44,    46,
      65,    70,    80,    82,    83,    71,    77,    69,    50,    81,
      48,    84,    92,    84,    85,    47,    49,    84
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
#line 87 "ejemplo.y"
    {yyerrok; ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 91 "ejemplo.y"
    {nombreFuncion = (yyvsp[(2) - (2)].cval); tipoDato = (yyvsp[(1) - (2)].cval);  ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 91 "ejemplo.y"
    {contadorParametros = 0; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 97 "ejemplo.y"
    {printf("Se declara la funcion %s con %d parametros y devolucion de tipo %s  \n",nombreFuncion,contadorParametros,tipoDato); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 98 "ejemplo.y"
    {printf("Se define la funcion %s con %d parametros y devolucion de tipo %s \n",nombreFuncion,contadorParametros,tipoDato); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 101 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 102 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 122 "ejemplo.y"
    {printf("Se encontro una Sentencia Compuesta. \n"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 145 "ejemplo.y"
    {tipoDato = (yyvsp[(1) - (1)].cval); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 145 "ejemplo.y"
    {printf("Se declararon %d variables de tipo %s\n",contadorVariables,(yyvsp[(1) - (5)].cval)); contadorVariables = 0; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 152 "ejemplo.y"
    {nombreID = (yyvsp[(1) - (1)].cval); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 152 "ejemplo.y"
    {contadorVariables++; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 154 "ejemplo.y"
    {printf("Se declaro el identificador \"%s\" de tipo %s\n",nombreID,tipoDato);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 155 "ejemplo.y"
    {printf("Se declaro el array \"%s\" de tipo %s\n",nombreID,tipoDato); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 156 "ejemplo.y"
    {printf("Se declaro el puntero \"%s\" de tipo %s\n",nombreID,tipoDato) ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 181 "ejemplo.y"
    {printf ("El resultado de la expresion es: %g \n", (yyvsp[(1) - (3)].dval)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 186 "ejemplo.y"
    {printf("Se encontro una Sentencia de Seleccion IF.\n"); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 187 "ejemplo.y"
    {printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 188 "ejemplo.y"
    {printf("Se enconto una Sentencia de Seleccion SWITCH.\n"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 193 "ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion WHILE.\n"); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 194 "ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion DO WHILE.\n"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 195 "ejemplo.y"
    {printf("Se encontro una Sentencia de Iteracion FOR.\n"); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 200 "ejemplo.y"
    {printf("Se encontro una Sentencia de Etiqueta CASE.\n"); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 201 "ejemplo.y"
    {printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 207 "ejemplo.y"
    {printf("Se encontro una Sentencia de Salto RETURN. \n"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 208 "ejemplo.y"
    {printf("Se encontro una Sentencia de Salto BREAK.\n"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 209 "ejemplo.y"
    {printf("Se encontro una Sentencia de Salto CONTINUE.\n"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 210 "ejemplo.y"
    {printf("Se encontro una Sentencia de Salto GOTO. \n"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 219 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(3) - (3)].dval); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 223 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 234 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 238 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 242 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 243 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 247 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 248 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 249 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 250 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 254 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 255 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 259 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 260 "ejemplo.y"
    {if((yyvsp[(3) - (3)].dval) == 0) {printf("ERROR/: No se puede dividir por 0 \n"); return 1; } else (yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 261 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].ival) % (yyvsp[(3) - (3)].ival); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 265 "ejemplo.y"
    {(yyval.dval) = ++ (yyvsp[(2) - (2)].dval); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 266 "ejemplo.y"
    {(yyval.dval) = -- (yyvsp[(2) - (2)].dval); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 267 "ejemplo.y"
    {(yyval.dval) = - (yyvsp[(2) - (2)].dval); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 268 "ejemplo.y"
    {(yyval.dval) = + (yyvsp[(2) - (2)].dval); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 269 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 270 "ejemplo.y"
    {(yyval.dval) = ! (yyvsp[(2) - (2)].dval); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 271 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 272 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 273 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 274 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 278 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 279 "ejemplo.y"
    {(yyval.dval) = 0; printf("Se invoco a la funcion %s \n",(yyvsp[(1) - (4)].cval)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 280 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 281 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 282 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) ++; ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 283 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) --; ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 287 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 288 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 290 "ejemplo.y"
    {(yyval.dval) = ( (yyvsp[(2) - (3)].dval) ); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2075 "ejemplo.tab.c"
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
#line 298 "ejemplo.y"
 

int yyerror (char *mensaje) 
{
  printf ("Error Sintactico: %s\n", mensaje);
}

void main(){

   #ifdef BISON_DEBUG
        yydebug = 1;
#endif 
   yyout = fopen("salida.txt","w");
   yyin = fopen("entrada.txt", "r");
   yyparse();
}
