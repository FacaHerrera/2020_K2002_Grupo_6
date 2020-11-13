
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
#include "tablaDeSimbolos.h"

extern int yylineno;
extern int yylex();
int yyerror (char* );
int yywrap(){
return(1);
}

extern FILE* yyin;
extern FILE* yyout;

char* tipoInicializador = "vacio";
char* tipoDato;
char* nombre;
char* variable[20];
char* variableExpresion[20];
char* tipoParametroInvocacion;

char flagError = 0;
char flagOperacionBinaria = 0; 

int contadorVariables = 0;
int contadorParametros = 0;
int tip = 0;
int tipDecla = 0;
int cantidad = 0;
int cantidadPuntero = 0;
int contadorVariableExpresion = 0;

Nodo *parametrosInvocacion = NULL;
ListaParametros *listaParametros = NULL;
TablaDeSimbolos tabla;




/* Line 189 of yacc.c  */
#line 117 "ejemplo.tab.c"

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
     NULL1 = 286,
     TIPO_DATO = 287,
     CLASE_ALMACENAMIENTO = 288,
     STRUCT_UNION = 289,
     ID = 290,
     SIZEOF = 291,
     CTE_CARACTER = 292
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 44 "ejemplo.y"

  int ival;
  double dval;
  char cval[30];



/* Line 214 of yacc.c  */
#line 198 "ejemplo.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 210 "ejemplo.tab.c"

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
#define YYLAST   493

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNRULES -- Number of states.  */
#define YYNSTATES  278

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,     2,     2,    44,    59,     2,
      45,    46,    42,    40,    48,    41,    55,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,    47,
      39,    49,    38,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,    57,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    14,    18,    19,
      21,    24,    27,    28,    30,    32,    36,    38,    42,    44,
      48,    50,    54,    56,    58,    62,    67,    69,    72,    76,
      79,    80,    82,    83,    87,    89,    93,    95,    99,   102,
     104,   107,   109,   110,   112,   114,   119,   124,   126,   132,
     133,   135,   137,   141,   143,   146,   149,   152,   155,   157,
     159,   160,   162,   166,   169,   171,   175,   179,   181,   183,
     185,   187,   189,   191,   194,   196,   200,   201,   204,   207,
     209,   212,   213,   215,   217,   220,   222,   225,   231,   239,
     245,   251,   259,   269,   274,   278,   282,   286,   289,   292,
     296,   298,   300,   302,   304,   306,   308,   312,   314,   318,
     319,   321,   323,   327,   329,   335,   336,   338,   340,   342,
     344,   346,   348,   350,   354,   356,   360,   362,   366,   370,
     372,   376,   380,   384,   388,   390,   394,   398,   400,   404,
     408,   412,   414,   417,   420,   423,   426,   429,   432,   435,
     438,   443,   448,   450,   455,   460,   464,   468,   471,   474,
     475,   477,   481,   483,   485
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    -1,    61,    62,    -1,   121,    -1,    93,
      -1,     1,    47,    -1,    65,    66,    47,    -1,    -1,    65,
      -1,    33,    64,    -1,    71,    64,    -1,    -1,    67,    -1,
      68,    -1,    67,    48,    68,    -1,    80,    -1,    80,    49,
      69,    -1,   108,    -1,    50,    70,    51,    -1,    69,    -1,
      70,    48,    69,    -1,    32,    -1,    72,    -1,    34,    35,
      77,    -1,    34,    50,    73,    51,    -1,    74,    -1,    73,
      74,    -1,    75,    78,    47,    -1,    71,    76,    -1,    -1,
      75,    -1,    -1,    50,    73,    51,    -1,    79,    -1,    78,
      48,    79,    -1,    80,    -1,    82,    52,   109,    -1,   100,
      83,    -1,    83,    -1,   100,    83,    -1,    83,    -1,    -1,
      80,    -1,    35,    -1,    83,    53,   110,    54,    -1,    83,
      45,    85,    46,    -1,    86,    -1,    86,    48,    55,    55,
      55,    -1,    -1,    84,    -1,    87,    -1,    86,    48,    87,
      -1,    65,    -1,    65,    81,    -1,    65,    89,    -1,    75,
      90,    -1,   100,    91,    -1,    91,    -1,   100,    -1,    -1,
      89,    -1,    45,    89,    46,    -1,    91,    92,    -1,    92,
      -1,    53,   110,    54,    -1,    45,    85,    46,    -1,    95,
      -1,    94,    -1,   101,    -1,   102,    -1,   104,    -1,   103,
      -1,   106,    47,    -1,    47,    -1,    50,    96,    51,    -1,
      -1,    96,    97,    -1,    96,    99,    -1,   121,    -1,    97,
     121,    -1,    -1,    97,    -1,    93,    -1,    99,    93,    -1,
      42,    -1,    42,   100,    -1,    19,    45,   106,    46,    93,
      -1,    19,    45,   106,    46,    93,    20,    93,    -1,    21,
      45,   106,    46,    93,    -1,    22,    45,   106,    46,    93,
      -1,    23,    93,    22,    45,   106,    46,    47,    -1,    24,
      45,   107,    47,   107,    47,   107,    46,    93,    -1,    28,
     109,    52,    93,    -1,    29,    52,    93,    -1,    35,    52,
      93,    -1,    25,   107,    47,    -1,    27,    47,    -1,    26,
      47,    -1,    30,    35,    47,    -1,    35,    -1,     4,    -1,
       3,    -1,    37,    -1,     5,    -1,    31,    -1,    45,   106,
      46,    -1,   108,    -1,   106,    48,   108,    -1,    -1,   106,
      -1,   109,    -1,   118,   111,   108,    -1,   112,    -1,   112,
      56,   106,    52,   109,    -1,    -1,   109,    -1,    49,    -1,
      14,    -1,    15,    -1,    16,    -1,    17,    -1,   113,    -1,
     112,     6,   113,    -1,   114,    -1,   113,     7,   114,    -1,
     115,    -1,   114,     8,   115,    -1,   114,     9,   115,    -1,
     116,    -1,   115,    39,   116,    -1,   115,    38,   116,    -1,
     115,    11,   116,    -1,   115,    10,   116,    -1,   117,    -1,
     116,    40,   117,    -1,   116,    41,   117,    -1,   118,    -1,
     117,    42,   118,    -1,   117,    43,   118,    -1,   117,    44,
     118,    -1,   119,    -1,    12,   118,    -1,    13,   118,    -1,
      41,   118,    -1,    40,   118,    -1,    57,   118,    -1,    58,
     118,    -1,    59,   118,    -1,   100,   118,    -1,    36,    45,
     118,    46,    -1,    36,    45,    88,    46,    -1,   105,    -1,
     119,    53,   106,    54,    -1,   119,    45,   120,    46,    -1,
     119,    55,    35,    -1,   119,    18,    35,    -1,   119,    12,
      -1,   119,    13,    -1,    -1,   108,    -1,   120,    48,   108,
      -1,   122,    -1,    63,    -1,    65,    81,    98,    95,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,    99,   102,   103,   104,   108,   171,   172,
     175,   176,   179,   180,   183,   184,   187,   188,   191,   192,
     195,   196,   199,   200,   203,   204,   207,   208,   211,   214,
     217,   218,   221,   222,   225,   226,   229,   230,   233,   246,
     254,   264,   269,   270,   273,   274,   275,   278,   279,   282,
     283,   286,   287,   290,   291,   292,   295,   298,   299,   300,
     303,   304,   307,   308,   309,   312,   313,   317,   318,   319,
     320,   321,   322,   325,   326,   329,   332,   333,   334,   337,
     338,   341,   342,   345,   346,   349,   350,   353,   354,   355,
     358,   359,   360,   363,   364,   365,   368,   369,   370,   371,
     375,   376,   377,   378,   379,   380,   381,   384,   385,   388,
     389,   392,   393,   396,   397,   400,   401,   404,   405,   406,
     407,   408,   411,   412,   415,   416,   419,   420,   421,   424,
     425,   426,   427,   428,   431,   432,   433,   436,   437,   438,
     439,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   455,   456,   457,   458,   459,   460,   461,   464,
     465,   466,   470,   471,   522
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
  "CONTINUE", "BREAK", "CASE", "DEFAULT", "GOTO", "NULL1", "TIPO_DATO",
  "CLASE_ALMACENAMIENTO", "STRUCT_UNION", "ID", "SIZEOF", "CTE_CARACTER",
  "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'", "';'",
  "','", "'='", "'{'", "'}'", "':'", "'['", "']'", "'.'", "'?'", "'~'",
  "'!'", "'&'", "$accept", "input", "line", "declaracion",
  "especDeclaracionBis", "especDeclaracion", "listaDeclaradoresBis",
  "listaDeclaradores", "declarador", "inicializador",
  "listaDeInicializadores", "especTipo", "especStructUnion",
  "listaDeclaracionesStruct", "declaracionStruct", "listaCalificadores",
  "listaCalificadoresBis", "opcionLista", "declaradoresStruct",
  "declaStruct", "decla1", "decla2", "declaBis", "declaradorDirecto",
  "listaTiposParametros", "listaTiposParametrosBis", "listaParametros",
  "declaracionParametro", "nombreTipo", "declaradorAbstracto",
  "declaradorAbstractoBis", "declaradorAbstractoDirecto",
  "opcionExpresion", "sentencia", "sentExpresion", "sentCompuesta",
  "decalracionOSentencia", "listaDeclaraciones", "listaDeclaracionesBis",
  "listaSentencias", "puntero", "sentSeleccion", "sentIteracion",
  "sentEtiquetada", "sentSalto", "expPrimaria", "exp", "expOp",
  "expAsignacion", "expCondicional", "expCondicionalBis", "operAsignacion",
  "expOr", "expAnd", "expIgualdad", "expRelacional", "expAditiva",
  "expMultiplicativa", "expUnaria", "expSufijo", "listaArgumentos",
  "declaracionExterna", "definicionFuncion", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,    62,    60,
      43,    45,    42,    47,    37,    40,    41,    59,    44,    61,
     123,   125,    58,    91,    93,    46,    63,   126,    33,    38
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    62,    63,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    73,    73,    74,    75,
      76,    76,    77,    77,    78,    78,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    87,    88,    89,    89,    89,
      90,    90,    91,    91,    91,    92,    92,    93,    93,    93,
      93,    93,    93,    94,    94,    95,    96,    96,    96,    97,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   101,
     102,   102,   102,   103,   103,   103,   104,   104,   104,   104,
     105,   105,   105,   105,   105,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   110,   110,   111,   111,   111,
     111,   111,   112,   112,   113,   113,   114,   114,   114,   115,
     115,   115,   115,   115,   116,   116,   116,   117,   117,   117,
     117,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   120,
     120,   120,   121,   121,   122
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     3,     0,     1,
       2,     2,     0,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     3,     4,     1,     2,     3,     2,
       0,     1,     0,     3,     1,     3,     1,     3,     2,     1,
       2,     1,     0,     1,     1,     4,     4,     1,     5,     0,
       1,     1,     3,     1,     2,     2,     2,     2,     1,     1,
       0,     1,     3,     2,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     0,     2,     2,     1,
       2,     0,     1,     1,     2,     1,     2,     5,     7,     5,
       5,     7,     9,     4,     3,     3,     3,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     0,
       1,     1,     3,     1,     5,     0,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     4,     1,     4,     4,     3,     3,     2,     2,     0,
       1,     3,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,   102,   101,   104,     0,     0,     0,
       0,     0,     0,     0,   109,     0,     0,     0,     0,     0,
     105,    22,     8,     0,   100,     0,   103,     0,     0,    85,
       0,    74,    76,     0,     0,     0,     3,   163,    12,     8,
      23,     5,    68,    67,     0,    69,    70,    72,    71,   152,
       0,   107,   111,   113,   122,   124,   126,   129,   134,   137,
     141,     4,   162,     6,   100,   142,   143,     0,     0,     0,
       0,   109,   110,     0,    98,    97,     0,   137,     0,     0,
      10,     9,    32,     0,     0,     0,   145,   144,    86,     0,
       0,   146,   147,   148,    44,     0,    13,    14,    16,    81,
      41,     0,    11,   149,    73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,   119,   120,   121,   117,     0,   157,   158,     0,   159,
       0,     0,     0,     0,     0,     0,     0,    96,     0,    94,
      99,     0,    24,    30,     0,    26,    42,    95,    60,     0,
       0,   106,    75,    83,    77,    78,    79,     7,     0,     0,
      82,     0,    49,   115,    40,   108,   123,     0,   125,   127,
     128,   133,   132,   131,   130,   135,   136,   138,   139,   140,
     112,   156,   160,     0,     0,   155,     0,     0,     0,     0,
     109,    93,     0,    31,    29,    25,    27,     0,    34,    36,
       0,    39,     0,    49,   115,    61,    56,    58,    64,    59,
     151,   150,    80,    84,    15,     0,    17,    18,   164,    53,
      50,     0,    47,    51,   116,     0,     0,   154,     0,   153,
      87,    89,    90,     0,     0,    33,    28,    42,     0,    38,
       0,     0,     0,    49,    63,    57,    20,     0,    54,    41,
      55,    59,    46,     0,    45,   114,   161,     0,     0,   109,
      35,    37,    66,    62,    65,     0,    19,    40,     0,    52,
      88,    91,     0,    21,     0,     0,    48,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    36,    37,    80,    38,    95,    96,    97,   216,
     247,    39,    40,   144,   145,   146,   194,   142,   197,   198,
      98,    99,   200,   201,   220,   240,   222,   223,   149,   205,
     206,   207,   208,    41,    42,    43,    90,   154,   161,   155,
      44,    45,    46,    47,    48,    49,    50,    73,    51,    52,
     225,   125,    53,    54,    55,    56,    57,    58,    59,    60,
     183,   156,    62
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -204
static const yytype_int16 yypact[] =
{
    -204,   246,  -204,   -27,  -204,  -204,  -204,   198,   198,    40,
      49,    90,   343,   103,   198,     4,   105,   198,   116,   142,
    -204,  -204,   139,    34,   129,   140,  -204,   198,   198,  -204,
     198,  -204,  -204,   198,   198,   198,  -204,  -204,    53,   139,
    -204,  -204,  -204,  -204,   198,  -204,  -204,  -204,  -204,  -204,
     152,  -204,  -204,     7,   183,    23,    32,   167,   150,    33,
      28,  -204,  -204,  -204,  -204,  -204,  -204,   198,   198,   198,
     187,   198,   164,   170,  -204,  -204,   162,  -204,   343,   172,
    -204,  -204,   174,    27,   343,   391,  -204,  -204,  -204,    76,
     294,  -204,  -204,  -204,  -204,   179,   180,  -204,   192,   139,
     106,   201,  -204,  -204,  -204,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
    -204,  -204,  -204,  -204,  -204,   198,  -204,  -204,   207,   198,
     198,   209,    99,   110,   119,   208,   205,  -204,   343,  -204,
    -204,    27,  -204,    27,     3,  -204,    53,  -204,    44,   214,
     215,  -204,  -204,  -204,   139,   343,  -204,  -204,    53,   434,
     139,   204,   139,   198,   135,  -204,   183,    69,    23,    32,
      32,   167,   167,   167,   167,   150,   150,  -204,  -204,  -204,
    -204,  -204,  -204,   149,    88,  -204,   343,   343,   343,   198,
     198,  -204,    67,  -204,  -204,  -204,  -204,   168,  -204,   210,
     212,     0,   201,    96,   198,  -204,  -204,    70,  -204,    86,
    -204,  -204,  -204,  -204,  -204,   434,  -204,  -204,  -204,    45,
    -204,   220,   236,  -204,  -204,   231,   198,  -204,   198,  -204,
     269,  -204,  -204,   158,   243,  -204,  -204,    53,   198,     0,
     248,   249,   238,   139,  -204,    70,  -204,    89,  -204,     0,
    -204,    -9,  -204,    59,  -204,  -204,  -204,   343,   253,   198,
    -204,  -204,  -204,  -204,  -204,   434,  -204,     0,   247,  -204,
    -204,  -204,   255,  -204,   254,   343,  -204,  -204
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,  -204,  -204,   271,   -16,  -204,  -204,   153,  -203,
    -204,   -67,  -204,   171,  -127,   -76,  -204,  -204,  -204,    71,
    -121,    95,  -204,   -33,  -204,   175,  -204,    79,  -204,  -164,
    -204,  -176,  -193,   -12,  -204,   177,  -204,   234,  -204,  -204,
     -14,  -204,  -204,  -204,  -204,  -204,   -11,   -63,   -95,   -13,
     136,  -204,  -204,   237,   241,   112,    50,   115,    -6,  -204,
    -204,     6,  -204
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -44
static const yytype_int16 yytable[] =
{
      70,    65,    66,    72,    76,   100,    81,    61,   136,   148,
     165,    77,   246,   106,   244,    88,   143,   196,   143,    89,
      63,    86,    87,    81,   101,   199,    94,    91,    92,    93,
     180,   109,   110,   245,   182,    21,   203,    23,   103,   241,
     126,   127,   111,   112,   204,   162,   128,   120,   121,   122,
     123,    74,   244,   163,   195,   250,   132,   133,   134,    21,
      72,    23,   273,   107,   217,   196,   139,   193,   164,    82,
     113,   114,   147,   129,   143,   245,   143,   143,   153,   150,
      94,   130,   124,   131,    83,    67,    29,    29,    94,   203,
     203,    21,    22,    23,    68,    29,   167,   204,   204,    21,
      77,    23,    77,    77,    77,    77,    77,    77,    77,    77,
      77,   177,   178,   179,   268,   243,   199,   105,   235,   184,
     217,   226,   151,   204,   105,   143,   191,   234,    21,    22,
      23,   203,   202,   256,   209,    69,   105,   265,    29,   204,
     266,   203,   229,   213,   202,   186,   219,   105,    71,   204,
     224,   162,    75,   -39,   -39,   -39,   187,    77,   105,   163,
     212,   171,   172,   173,   174,   188,   212,   105,    78,   239,
     217,    21,    22,    23,   230,   231,   232,    79,   233,    72,
     162,    84,   -38,   -38,   -38,    85,   249,   219,   163,   209,
     108,   224,   117,   118,   119,   227,   272,   228,    77,   104,
     105,     4,     5,     6,   258,   251,   105,   115,   116,   135,
       7,     8,   105,   255,   138,   236,   237,   137,   267,   140,
      77,   169,   170,   202,   141,   261,   157,   219,   158,    20,
     175,   176,    77,    64,    25,    26,    94,   219,    27,    28,
      29,   159,   181,    30,   185,   270,     2,     3,    72,     4,
       5,     6,   190,   189,    32,    33,    34,    35,     7,     8,
     210,   211,   -43,   277,   238,     9,   252,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   253,   254,    27,    28,    29,   257,
     259,    30,   264,    31,   262,   263,    32,     4,     5,     6,
     271,   275,   274,    33,    34,    35,     7,     8,   260,   276,
     102,   214,   192,     9,   248,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   269,   160,    27,    28,    29,   221,   218,    30,
     242,    31,     0,   166,    32,   152,     4,     5,     6,   168,
       0,    33,    34,    35,     0,     7,     8,     0,     0,     0,
       0,     0,     9,     0,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,    24,    25,
      26,     0,     0,    27,    28,    29,     0,     0,    30,     0,
      31,     0,     0,    32,     4,     5,     6,     0,     0,     0,
      33,    34,    35,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    21,     0,    23,    64,    25,    26,     0,
       0,    27,    28,    29,     0,     0,    30,     4,     5,     6,
       0,     0,     0,     0,     0,     0,     7,     8,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,    64,
      25,    26,     0,     0,    27,    28,    29,     0,     0,    30,
       0,     0,     0,     0,   215,     0,     0,     0,     0,     0,
       0,    33,    34,    35
};

static const yytype_int16 yycheck[] =
{
      12,     7,     8,    14,    17,    38,    22,     1,    71,    85,
     105,    17,   215,     6,   207,    29,    83,   144,    85,    30,
      47,    27,    28,    39,    38,   146,    35,    33,    34,    35,
     125,     8,     9,   209,   129,    32,    45,    34,    44,   203,
      12,    13,    10,    11,    53,    45,    18,    14,    15,    16,
      17,    47,   245,    53,    51,   219,    67,    68,    69,    32,
      71,    34,   265,    56,   159,   192,    78,   143,   101,    35,
      38,    39,    84,    45,   141,   251,   143,   144,    90,    85,
      35,    53,    49,    55,    50,    45,    42,    42,    35,    45,
      45,    32,    33,    34,    45,    42,   107,    53,    53,    32,
     106,    34,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,    55,    45,   237,    48,    51,   130,
     215,    52,    46,    53,    48,   192,   138,   190,    32,    33,
      34,    45,   146,   228,   148,    45,    48,    48,    42,    53,
      51,    45,    54,   155,   158,    46,   162,    48,    45,    53,
     163,    45,    47,    47,    48,    49,    46,   163,    48,    53,
     154,   111,   112,   113,   114,    46,   160,    48,    52,   202,
     265,    32,    33,    34,   186,   187,   188,    35,   189,   190,
      45,    52,    47,    48,    49,    45,   219,   203,    53,   203,
       7,   204,    42,    43,    44,    46,   259,    48,   204,    47,
      48,     3,     4,     5,    46,   219,    48,    40,    41,    22,
      12,    13,    48,   226,    52,    47,    48,    47,   251,    47,
     226,   109,   110,   237,    50,   238,    47,   243,    48,    31,
     115,   116,   238,    35,    36,    37,    35,   253,    40,    41,
      42,    49,    35,    45,    35,   257,     0,     1,   259,     3,
       4,     5,    47,    45,    50,    57,    58,    59,    12,    13,
      46,    46,    52,   275,    52,    19,    46,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    48,    54,    40,    41,    42,    20,
      47,    45,    54,    47,    46,    46,    50,     3,     4,     5,
      47,    46,    55,    57,    58,    59,    12,    13,   237,    55,
      39,   158,   141,    19,   219,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,   253,    99,    40,    41,    42,   162,   161,    45,
     204,    47,    -1,   106,    50,    51,     3,     4,     5,   108,
      -1,    57,    58,    59,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    35,    36,
      37,    -1,    -1,    40,    41,    42,    -1,    -1,    45,    -1,
      47,    -1,    -1,    50,     3,     4,     5,    -1,    -1,    -1,
      57,    58,    59,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    34,    35,    36,    37,    -1,
      -1,    40,    41,    42,    -1,    -1,    45,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,     0,     1,     3,     4,     5,    12,    13,    19,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    40,    41,    42,
      45,    47,    50,    57,    58,    59,    62,    63,    65,    71,
      72,    93,    94,    95,   100,   101,   102,   103,   104,   105,
     106,   108,   109,   112,   113,   114,   115,   116,   117,   118,
     119,   121,   122,    47,    35,   118,   118,    45,    45,    45,
      93,    45,   106,   107,    47,    47,   109,   118,    52,    35,
      64,    65,    35,    50,    52,    45,   118,   118,   100,   106,
      96,   118,   118,   118,    35,    66,    67,    68,    80,    81,
      83,   100,    64,   118,    47,    48,     6,    56,     7,     8,
       9,    10,    11,    38,    39,    40,    41,    42,    43,    44,
      14,    15,    16,    17,    49,   111,    12,    13,    18,    45,
      53,    55,   106,   106,   106,    22,   107,    47,    52,    93,
      47,    50,    77,    71,    73,    74,    75,    93,    75,    88,
     118,    46,    51,    93,    97,    99,   121,    47,    48,    49,
      97,    98,    45,    53,    83,   108,   113,   106,   114,   115,
     115,   116,   116,   116,   116,   117,   117,   118,   118,   118,
     108,    35,   108,   120,   106,    35,    46,    46,    46,    45,
      47,    93,    73,    75,    76,    51,    74,    78,    79,    80,
      82,    83,   100,    45,    53,    89,    90,    91,    92,   100,
      46,    46,   121,    93,    68,    50,    69,   108,    95,    65,
      84,    85,    86,    87,   109,   110,    52,    46,    48,    54,
      93,    93,    93,   106,   107,    51,    47,    48,    52,    83,
      85,    89,   110,    45,    92,    91,    69,    70,    81,    83,
      89,   100,    46,    48,    54,   109,   108,    20,    46,    47,
      79,   109,    46,    46,    54,    48,    51,    83,    55,    87,
      93,    47,   107,    69,    55,    46,    55,    93
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
#line 104 "ejemplo.y"
    {agregarError(&errores,"Error Sintactico",yylineno);;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 108 "ejemplo.y"
    {
          tipoDato = (yyvsp[(1) - (3)].cval);
          nombre = (yyvsp[(2) - (3)].cval);
          while(contadorVariableExpresion){
               if(contadorVariableExpresion == 1 || !strcmp(variableExpresion[0],variableExpresion[contadorVariableExpresion-1])) {
                    contadorVariableExpresion--;
                    tipoInicializador = variableExpresion[0];
               }
               else if(flagOperacionBinaria==1) {

                    char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere sumar un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                    strcpy(error,"Se quiere sumar un valor de tipo ");
                    strcat(error,variableExpresion[0]);
                    strcat(error," a un valor de tipo ");
                    strcat(error, variableExpresion[contadorVariableExpresion-1]);
                    agregarError(&errores, error, yylineno);
                    flagError = 1;
                    contadorVariableExpresion = 0;
               }
               else if(flagOperacionBinaria==2) {

                    char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere restar un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                    strcpy(error,"Se quiere restar un valor de tipo ");
                    strcat(error,variableExpresion[0]);
                    strcat(error," a un valor de tipo ");
                    strcat(error, variableExpresion[contadorVariableExpresion-1]);
                    agregarError(&errores, error, yylineno);
                    flagError = 1;
                    contadorVariableExpresion = 0;
               }
               else if(flagOperacionBinaria==3) {

                    char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere multiplicar un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                    strcpy(error,"Se quiere multiplicar un valor de tipo ");
                    strcat(error,variableExpresion[0]);
                    strcat(error," a un valor de tipo ");
                    strcat(error, variableExpresion[contadorVariableExpresion-1]);
                    agregarError(&errores, error, yylineno);
                    flagError = 1;
                    contadorVariableExpresion = 0;
               }
               else if(flagOperacionBinaria==4) {

                    char *error = malloc(strlen(variableExpresion[0])+strlen(variableExpresion[contadorVariableExpresion-1])+strlen("Error Semantico: Se quiere dividir un valor de tipo ")+strlen(" a un valor de tipo ") + 1);
                    strcpy(error,"Se quiere dividir un valor de tipo ");
                    strcat(error,variableExpresion[0]);
                    strcat(error," a un valor de tipo ");
                    strcat(error, variableExpresion[contadorVariableExpresion-1]);
                    agregarError(&errores, error, yylineno);
                    flagError = 1;
                    contadorVariableExpresion = 0;
               } 
          }
          while(contadorVariables!=0 && tip != 3){
               contadorVariables--;
               agregarVariable(&tabla.listaVariables, variable[contadorVariables], tipoDato, tipoInicializador, yylineno, flagError);
               tipoInicializador = "vacio";
          }
          flagError = 0;
          flagOperacionBinaria = 0;
     ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 183 "ejemplo.y"
    {cantidad = 1; ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 184 "ejemplo.y"
    {cantidad = 2;;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 187 "ejemplo.y"
    { tipDecla = 1; ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 188 "ejemplo.y"
    {   tipDecla = 2; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 233 "ejemplo.y"
    {
                                        if(tip!=3){
                                             variable[contadorVariables] = (char*)malloc(strlen((yyvsp[(2) - (2)].cval))+cantidadPuntero);
                                             strcpy(variable[contadorVariables],"\0"); 
                                             while(cantidadPuntero!=0){
                                                  strcat(variable[contadorVariables], "*");
                                                  cantidadPuntero--;
                                             }
                                             strcat(variable[contadorVariables],(yyvsp[(2) - (2)].cval)); 
                                             contadorVariables++;
                                        }

                                   ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 246 "ejemplo.y"
    {
                              if(tip!=3){
                                   variable[contadorVariables] = strdup((yyvsp[(1) - (1)].cval)); 
                                   contadorVariables++;
                              }
                         ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 254 "ejemplo.y"
    {
                                        nombre = (char*)malloc(strlen((yyvsp[(2) - (2)].cval))+cantidadPuntero);
                                        strcpy(nombre, "\0");
                                        while(cantidadPuntero!=0){
                                             strcat(nombre, "*");
                                             cantidadPuntero--;
                                        }
                                        strcat(nombre, (yyvsp[(2) - (2)].cval));

                                   ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 264 "ejemplo.y"
    {
                              nombre = strdup((yyvsp[(1) - (1)].cval));
                         ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 273 "ejemplo.y"
    {tip = 1;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 274 "ejemplo.y"
    {tip = 2;;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 275 "ejemplo.y"
    {tip = 3;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 286 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 287 "ejemplo.y"
    {contadorParametros++; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 290 "ejemplo.y"
    {agregarParametro(&listaParametros, "-", (yyvsp[(1) - (1)].cval),yylineno); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 291 "ejemplo.y"
    {agregarParametro(&listaParametros, nombre, (yyvsp[(1) - (2)].cval),yylineno);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 300 "ejemplo.y"
    {agregarParametro(&listaParametros, "*-", (yyvsp[(1) - (1)].cval),yylineno); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 329 "ejemplo.y"
    {/*printf("Se encontro una Sentencia Compuesta. \n");*/ ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 349 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 350 "ejemplo.y"
    {cantidadPuntero++;;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 353 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF.\n");*/ ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 354 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Seleccion IF/ELSE.\n");*/ ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 355 "ejemplo.y"
    {/*printf("Se enconto una Sentencia de Seleccion SWITCH.\n");*/ ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 358 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion WHILE.\n");*/ ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 359 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion DO WHILE.\n");*/ ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 360 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Iteracion FOR.\n");*/ ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 363 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta CASE.\n");*/ ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 364 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Etiqueta DEFAULT.\n");*/ ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 368 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto RETURN. \n"); */;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 369 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto BREAK.\n"); */;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 370 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto CONTINUE.\n"); */;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 371 "ejemplo.y"
    {/*printf("Se encontro una Sentencia de Salto GOTO. \n"); */;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 375 "ejemplo.y"
    {tipoParametroInvocacion = tipoInicializador = variableExpresion[contadorVariableExpresion] = tipoVariable(tabla,(yyvsp[(1) - (1)].cval)); contadorVariableExpresion++;;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 376 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].ival); tipoParametroInvocacion = variableExpresion[contadorVariableExpresion] = tipoInicializador = "int"; contadorVariableExpresion++;;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 377 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval); tipoParametroInvocacion = variableExpresion[contadorVariableExpresion] = tipoInicializador = "double"; contadorVariableExpresion++;;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 378 "ejemplo.y"
    {tipoParametroInvocacion = tipoInicializador = variableExpresion[contadorVariableExpresion] = "char"; contadorVariableExpresion++;;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 379 "ejemplo.y"
    {tipoParametroInvocacion = variableExpresion[contadorVariableExpresion] = "char*"; contadorVariableExpresion++;;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 381 "ejemplo.y"
    {(yyval.dval) = ( (yyvsp[(2) - (3)].dval) ); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 393 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(3) - (3)].dval); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 397 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 412 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 416 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 420 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 421 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 425 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 426 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 427 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 428 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 432 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 1;;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 433 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval); flagOperacionBinaria = 2; ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 437 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 3;;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 438 "ejemplo.y"
    {if((yyvsp[(3) - (3)].dval) == 0) {agregarError(&errores,"ERROR/: No se puede dividir por 0",yylineno);} else {(yyval.dval) = (yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval);  flagOperacionBinaria = 4;};}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 439 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].ival) % (yyvsp[(3) - (3)].ival); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 443 "ejemplo.y"
    {(yyval.dval) = ++ (yyvsp[(2) - (2)].dval); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 444 "ejemplo.y"
    {(yyval.dval) = -- (yyvsp[(2) - (2)].dval); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 445 "ejemplo.y"
    {(yyval.dval) = - (yyvsp[(2) - (2)].dval); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 446 "ejemplo.y"
    {(yyval.dval) = + (yyvsp[(2) - (2)].dval); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 447 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 448 "ejemplo.y"
    {(yyval.dval) = ! (yyvsp[(2) - (2)].dval); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 449 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 450 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 451 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 452 "ejemplo.y"
    {(yyval.dval) = sizeof((yyvsp[(3) - (4)].dval)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 456 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 457 "ejemplo.y"
    {(yyval.dval) = 0; validarInvocacion(tabla,(yyvsp[(1) - (4)].cval),parametrosInvocacion,yylineno); parametrosInvocacion = NULL; tipoInicializador = tipoFuncion(tabla,(yyvsp[(1) - (4)].cval));;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 458 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 459 "ejemplo.y"
    {(yyval.dval) = 0; ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 460 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) ++; ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 461 "ejemplo.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].dval) --; ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 465 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoParametroInvocacion);;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 466 "ejemplo.y"
    {agregarNodo(&parametrosInvocacion,tipoParametroInvocacion);;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 470 "ejemplo.y"
    {/*printf("Se define la funcion %s con %d parametros y devolucion de tipo %s  \n",nombre,contadorParametros,tipoDato); contadorParametros = 0;*/ agregarFuncion(&tabla.listaFuncionesDefinidas,nombre,tipoDato,&listaParametros,yylineno); contadorParametros = 0; listaParametros = NULL; cantidadPuntero = 0;;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 471 "ejemplo.y"
    {
                       switch(tip){
                         case 1:
                              if(tipDecla == 1){
                                   if(cantidad == 1){
                                        //printf("Se declara la variable %s de tipo %s  \n",nombre,tipoDato);
                                   }
                                   else if(cantidad == 2){
                                        //printf("Se declaran variables de tipo %s  \n",tipoDato);
                                   } 
                              }
                              else if(tipDecla == 2){
                                   if(cantidad == 1){
                                        //printf("Se inicializa la variable %s de tipo %s \n",nombre,tipoDato);
                                   }
                                   else if(cantidad == 2){
                                        //printf("Se inicializan variables de tipo %s \n",tipoDato);
                                   } 
                              }
                              break;
                         case 2:
                              if(tipDecla == 1){
                                   if(cantidad == 1){
                                        //printf("Se declara el arreglo %s de tipo %s  \n",nombre,tipoDato);
                                   }
                                   else if(cantidad == 2){
                                        //printf("Se declaran arreglos de tipo %s \n",tipoDato);
                                   }  
                              }
                              else if(tipDecla == 2){
                                   if(cantidad == 1){
                                        //printf("Se inicializa el arreglo %s de tipo %s \n",nombre,tipoDato);
                                   }
                                   else if(cantidad == 2){
                                        //printf("Se inicializan arreglos de tipo %s \n",tipoDato);
                                   }   
                              }
                              break;
                         case 3:
                              if(tipDecla == 1){
                                   //printf("Se declara la funcion %s con %d parametros y devolucion de tipo %s  \n",nombre,contadorParametros,tipoDato); 
                                   contadorParametros = 0;
                                   agregarFuncion(&tabla.listaFuncionesDeclaradas,nombre,tipoDato,&listaParametros,yylineno);
                                   cantidadPuntero = 0;
                                   listaParametros = NULL;
                              }
                              break;     
                       }
                  ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 522 "ejemplo.y"
    {nombre = (yyvsp[(2) - (4)].cval); tipoDato = (yyvsp[(1) - (4)].cval);;}
    break;



/* Line 1455 of yacc.c  */
#line 2385 "ejemplo.tab.c"
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
#line 526 "ejemplo.y"
 

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

     tabla.listaVariables = NULL;
     tabla.listaFuncionesDeclaradas = NULL;
     tabla.listaFuncionesDefinidas = NULL;
     
     yyparse();
     imprimirTabla(tabla);
     imprimirErrores(&errores);
     system("PAUSE");
}
