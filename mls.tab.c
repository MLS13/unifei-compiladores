
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
#line 1 "mls.y"

/*
Conjunto de blibliotecas utilizadas
*/
#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
#include <string.h>
#include <cstdio>
#include <iostream>

using namespace std;

#include "mls.h"

#define YYERROR_VERBOSE /* Apresenta os erros de forma mais detalhada */

#define D_WRITE_ASPAS 99990
#define D_MOD 99991
#define D_AND 99992
#define D_OR 99993
#define D_IGUALDADE 99994
#define D_DIFERENTE 99995
#define D_MENOR 99996
#define D_MENOR_IGUAL 99997
#define D_MAIOR 99998
#define D_MAIOR_IGUAL 99999

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;


void yyerror(const char *s);
void imprimir(No *raiz);

FILE *entrada, *saida, *file_tokens;

No *root;


/* Line 189 of yacc.c  */
#line 115 "mls.tab.c"

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
     PROGRAMSTART = 258,
     PROGRAMEND = 259,
     ABRE_PARENTESES = 260,
     FECHA_PARENTESES = 261,
     ABRE_CHAVES = 262,
     FECHA_CHAVES = 263,
     ASPAS = 264,
     PONTOVIRGULA = 265,
     CHARACTER = 266,
     IDENT = 267,
     IDENTPRINT = 268,
     NUM = 269,
     INT = 270,
     FLOAT = 271,
     WRITE = 272,
     WRITEVAR = 273,
     READ = 274,
     IF = 275,
     ELSE = 276,
     FOR = 277,
     WHILE = 278
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 45 "mls.y"

    No *pont;



/* Line 214 of yacc.c  */
#line 180 "mls.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 192 "mls.tab.c"

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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   127

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNRULES -- Number of states.  */
#define YYNSTATES  98

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   278

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,     2,     2,    29,    30,     2,
       2,     2,    27,    26,     2,    25,     2,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    24,    34,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    31,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    10,    14,    16,    19,    21,    24,
      26,    28,    30,    32,    34,    38,    40,    42,    46,    50,
      54,    58,    62,    66,    70,    73,    76,    79,    84,    89,
      94,    96,    99,   101,   109,   117,   119,   121,   123,   125,
     127,   129,   131,   133,   135,   139,   143,   147,   151,   155,
     159,   163,   167
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,     3,    37,     4,    -1,    38,    10,    -1,
      38,    10,    37,    -1,    48,    -1,    48,    37,    -1,    47,
      -1,    47,    37,    -1,    39,    -1,    41,    -1,    42,    -1,
      44,    -1,    43,    -1,    45,    24,    40,    -1,    45,    -1,
      14,    -1,    40,    26,    40,    -1,    40,    25,    40,    -1,
      40,    27,    40,    -1,    40,    28,    40,    -1,    40,    29,
      40,    -1,     5,    40,     6,    -1,     9,    40,     9,    -1,
      15,    45,    -1,    16,    45,    -1,    11,    45,    -1,    19,
       5,    45,     6,    -1,    18,     5,    45,     6,    -1,    17,
       5,    45,     6,    -1,    46,    -1,    46,    45,    -1,    12,
      -1,    23,     5,    49,     6,     7,    37,     8,    -1,    20,
       5,    49,     6,     7,    37,     8,    -1,    50,    -1,    51,
      -1,    52,    -1,    53,    -1,    55,    -1,    57,    -1,    54,
      -1,    56,    -1,    45,    -1,     5,    49,     5,    -1,    49,
      30,    49,    -1,    49,    31,    49,    -1,    49,    24,    49,
      -1,    49,    32,    49,    -1,    49,    33,    49,    -1,    49,
      33,    49,    -1,    49,    34,    49,    -1,    49,    34,    49,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   116,   119,   122,   124,   127,   129,   134,
     135,   136,   137,   138,   140,   147,   148,   154,   159,   164,
     169,   174,   179,   183,   189,   194,   199,   206,   213,   220,
     227,   230,   237,   246,   253,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   276,   283,   290,   297,   304,
     311,   318,   325
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAMSTART", "PROGRAMEND",
  "ABRE_PARENTESES", "FECHA_PARENTESES", "ABRE_CHAVES", "FECHA_CHAVES",
  "ASPAS", "PONTOVIRGULA", "CHARACTER", "IDENT", "IDENTPRINT", "NUM",
  "INT", "FLOAT", "WRITE", "WRITEVAR", "READ", "IF", "ELSE", "FOR",
  "WHILE", "'='", "'-'", "'+'", "'*'", "'/'", "'%'", "'&'", "'|'", "'!'",
  "'<'", "'>'", "$accept", "programa", "lista_comandos", "comando",
  "c_atribuicao", "c_expressao", "c_declaracao_var", "c_input",
  "c_printf_var", "c_printf", "texto", "c_caracter", "c_while", "c_if",
  "c_expressao_logica", "c_and", "c_or", "c_igualdade", "c_diferente",
  "c_menor", "c_menor_igual", "c_maior", "c_maior_igual", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    61,    45,    43,    42,    47,    37,
      38,   124,    33,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    37,    37,    37,    37,    37,    37,    38,
      38,    38,    38,    38,    39,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    41,    41,    41,    42,    43,    44,
      45,    45,    46,    47,    48,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     3,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     4,     4,     4,
       1,     2,     1,     7,     7,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    13,    12,     0,
      30,     7,     5,     1,    26,    24,    25,     0,     0,     0,
       0,     0,     2,     3,     0,    31,     8,     6,     0,     0,
       0,     0,    43,     0,    35,    36,    37,    38,    41,    39,
      42,    40,     0,     4,     0,     0,    16,    14,    15,    29,
      28,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
      47,    45,    46,    48,    49,    51,     0,    22,    23,    18,
      17,    19,    20,    21,     0,     0,    34,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    12,    13,    14,    57,    15,    16,    17,    18,
      42,    20,    21,    22,    43,    44,    45,    46,    47,    48,
      49,    50,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -31
static const yytype_int8 yypact[] =
{
       6,   104,    13,     2,   -31,     2,     2,    11,    24,    25,
      26,    35,    39,    34,   -31,   -31,   -31,   -31,   -31,    21,
       2,   104,   104,   -31,   -31,   -31,   -31,     2,     2,     2,
      -2,    -2,   -31,   104,     3,   -31,   -31,   -31,    40,    46,
      55,    -2,   -31,    36,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,    56,   -31,     3,     3,   -31,    30,   -31,   -31,
     -31,   -31,    17,    58,    -2,    -2,    -2,    -2,    -2,    -2,
      72,    85,    68,     3,     3,     3,     3,     3,   -31,   104,
      75,    75,    75,    75,    75,    75,   104,   -31,   -31,    -4,
      -4,    54,    54,   -31,    76,    84,   -31,   -31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -31,   -31,   -15,   -31,   -31,    27,   -31,   -31,   -31,   -31,
      -1,   -31,   -31,   -31,   -30,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      19,    52,    24,    41,    25,    26,    36,    37,    54,     1,
       4,    62,    55,    23,     4,     4,    27,    56,    53,    35,
      19,    19,    78,    75,    76,    77,    38,    39,    40,    28,
      29,    30,    19,    58,    80,    81,    82,    83,    84,    85,
      31,    64,    63,    32,    33,    34,    59,    65,    66,    67,
      68,    69,    60,    58,    58,    73,    74,    75,    76,    77,
      64,    61,    70,     0,    94,    79,    65,    66,    67,    68,
      69,    95,    58,    58,    58,    58,    58,    88,    19,    86,
      64,    71,    72,    77,    96,    19,    65,    66,    67,    68,
      69,    87,    97,    73,    74,    75,    76,    77,     0,    64,
      89,    90,    91,    92,    93,    65,    66,    67,    68,    69,
      73,    74,    75,    76,    77,     3,     4,     0,     0,     5,
       6,     7,     8,     9,    10,     0,     0,    11
};

static const yytype_int8 yycheck[] =
{
       1,    31,     3,     5,     5,     6,    21,    22,     5,     3,
      12,    41,     9,     0,    12,    12,     5,    14,    33,    20,
      21,    22,     5,    27,    28,    29,    27,    28,    29,     5,
       5,     5,    33,    34,    64,    65,    66,    67,    68,    69,
       5,    24,     6,     4,    10,    24,     6,    30,    31,    32,
      33,    34,     6,    54,    55,    25,    26,    27,    28,    29,
      24,     6,     6,    -1,    79,     7,    30,    31,    32,    33,
      34,    86,    73,    74,    75,    76,    77,     9,    79,     7,
      24,    54,    55,    29,     8,    86,    30,    31,    32,    33,
      34,     6,     8,    25,    26,    27,    28,    29,    -1,    24,
      73,    74,    75,    76,    77,    30,    31,    32,    33,    34,
      25,    26,    27,    28,    29,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    36,    11,    12,    15,    16,    17,    18,    19,
      20,    23,    37,    38,    39,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    45,    45,    45,     5,     5,     5,
       5,     5,     4,    10,    24,    45,    37,    37,    45,    45,
      45,     5,    45,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    49,    37,     5,     9,    14,    40,    45,     6,
       6,     6,    49,     6,    24,    30,    31,    32,    33,    34,
       6,    40,    40,    25,    26,    27,    28,    29,     5,     7,
      49,    49,    49,    49,    49,    49,     7,     6,     9,    40,
      40,    40,    40,    40,    37,    37,     8,     8
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
        case 2:

/* Line 1455 of yacc.c  */
#line 110 "mls.y"
    {
    fprintf(file_tokens, "PROGRAMSTART \n"); 
    root = (yyvsp[(2) - (3)].pont); 
    fprintf(file_tokens, "PROGRAMEND \n"); 
;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 116 "mls.y"
    {
    (yyvsp[(1) - (2)].pont)->proximo = 0;
    (yyval.pont) = (yyvsp[(1) - (2)].pont);
;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 119 "mls.y"
    {
    (yyvsp[(1) - (3)].pont)->proximo = (yyvsp[(3) - (3)].pont);
    (yyval.pont) = (yyvsp[(1) - (3)].pont);
;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 122 "mls.y"
    {
    (yyval.pont) = (yyvsp[(1) - (1)].pont);
;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 124 "mls.y"
    {
    (yyval.pont) = (yyvsp[(1) - (2)].pont);
    (yyvsp[(1) - (2)].pont)->proximo = (yyvsp[(2) - (2)].pont);
;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 127 "mls.y"
    {
    (yyval.pont) = (yyvsp[(1) - (1)].pont);
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 129 "mls.y"
    {
    (yyval.pont) = (yyvsp[(1) - (2)].pont);
    (yyvsp[(1) - (2)].pont)->proximo = (yyvsp[(2) - (2)].pont);
;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 140 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = '=';
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 148 "mls.y"
    { //Expressao para numeros positivos
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = NUM;
    (yyval.pont)->valor_no = yylval.pont->valor_no;
    (yyval.pont)->esq = NULL;
    (yyval.pont)->dir = NULL;
;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 154 "mls.y"
    { //Expressao para soma
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = '+';
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 159 "mls.y"
    { //Expressao para subtracao
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = '-';
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 164 "mls.y"
    { //Expressao para multiplicacao
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = '*';
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 169 "mls.y"
    { //Expressao para divisao
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = '/';
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 174 "mls.y"
    { //Expressao para modulo da divisao
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = '%';
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 179 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = ABRE_PARENTESES;
    (yyval.pont)->esq = (yyvsp[(2) - (3)].pont);
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 183 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = ASPAS;
    (yyval.pont)->esq = (yyvsp[(2) - (3)].pont);
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 189 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = INT;
    (yyval.pont)->esq = (yyvsp[(2) - (2)].pont);
    (yyval.pont)->dir = NULL;
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 194 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = FLOAT;
    (yyval.pont)->esq = (yyvsp[(2) - (2)].pont);
    (yyval.pont)->dir = NULL;
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 199 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = CHARACTER;
    (yyval.pont)->esq = (yyvsp[(2) - (2)].pont);
    (yyval.pont)->dir = NULL;
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 206 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = READ;
    (yyval.pont)->esq = (yyvsp[(3) - (4)].pont);
    (yyval.pont)->dir = NULL;
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 213 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = WRITE;
    (yyval.pont)->esq = (yyvsp[(3) - (4)].pont);
    (yyval.pont)->dir = NULL;
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 220 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = D_WRITE_ASPAS;
    (yyval.pont)->esq = (yyvsp[(3) - (4)].pont);
    (yyval.pont)->dir = NULL;
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 227 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont) = (yyvsp[(1) - (1)].pont);
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 230 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = IDENTPRINT;
    (yyval.pont)->esq = (yyvsp[(1) - (2)].pont);
    (yyval.pont)->dir = (yyvsp[(2) - (2)].pont);
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 237 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = IDENT;
    strcpy((yyval.pont)->toC, yylval.pont->toC);
    (yyval.pont)->esq = NULL;
    (yyval.pont)->dir = NULL;
    (yyval.pont)->proximo = NULL;
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 246 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = WHILE;
    (yyval.pont)->esq = (yyvsp[(3) - (7)].pont);
    (yyval.pont)->dir = (yyvsp[(6) - (7)].pont);
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 253 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = IF;
    (yyval.pont)->esq = (yyvsp[(3) - (7)].pont);
    (yyval.pont)->dir = (yyvsp[(6) - (7)].pont);
;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 269 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = ABRE_PARENTESES;
    (yyval.pont)->esq = (yyvsp[(2) - (3)].pont);
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 276 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = D_AND;
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 283 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = D_OR;
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 290 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = D_IGUALDADE;
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 297 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = D_DIFERENTE;
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 304 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = D_MENOR;
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 311 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = D_MENOR_IGUAL;
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 318 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = D_MAIOR;
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 325 "mls.y"
    {
    (yyval.pont) = (No*)malloc(sizeof(No));
    (yyval.pont)->token = D_MAIOR_IGUAL;
    (yyval.pont)->esq = (yyvsp[(1) - (3)].pont);
    (yyval.pont)->dir = (yyvsp[(3) - (3)].pont);
;}
    break;



/* Line 1455 of yacc.c  */
#line 1889 "mls.tab.c"
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
#line 385 "mls.y"


int main(int argc, char *argv[]){
    char buffer[256];
    extern FILE *yyin;
    yylval.pont = (No*)malloc(sizeof(No));

    if(argc < 2){
        printf("Numero de argumentos invalidos!\n");
        exit(1);
    }

    entrada = fopen(argv[1], "r");

    if(!entrada){
        printf("Ocorreu um erro ao tentar abrir o codigo fonte!\n");
        exit(1);
    }

    yyin = entrada;

    strcpy(buffer,argv[1]);
    strcat(buffer,".cc");

    saida = fopen(buffer, "w");
    file_tokens = fopen(strcat(argv[1],"_tokens.txt"), "w");

    if(!saida){
        printf("Ocorreu um erro ao gerar o arquivo de saida!\n");
        exit(1);
    }

    yyparse();

    //Escrevendo arquivo de saida
    fprintf(saida,"#include <iostream>\n");
    fprintf(saida,"#include <stdio.h>\n");
    fprintf(saida,"#include <math.h>\n\n");
    fprintf(saida,"using namespace std;\n\n");
    fprintf(saida,"int main(int argc, char *argv[]){\n");
    imprimir(root);
    fprintf(saida,"}");
    fclose(entrada);
    fclose(saida);    
    fclose(file_tokens);    
}

void yyerror(const char *s) {
    printf("%s\n", s);
}

void imprimir(No *root){    
    if(root != NULL){
        switch(root->token){
            //Funcao print
            case WRITE:
                fprintf(file_tokens, "WRITE \n");
                fprintf(saida, "cout << \"");
                imprimir(root->esq);
                fprintf(saida, "\" << endl; \n");
                break;
            case D_WRITE_ASPAS:
                fprintf(file_tokens, "WRITEVAR  \n");
                fprintf(saida, "cout << \"");
                imprimir(root->esq);
                fprintf(saida, "\" << endl; \n");
                break;
            case IDENT:
                fprintf(file_tokens, "IDENT  \n");
                fprintf(saida, "%s", root->toC);
                break;
            case NUM:
                fprintf(file_tokens, "NUM  \n");
                fprintf(saida, "%g", root->valor_no);
                break;
            case IDENTPRINT:
                imprimir(root->esq);
                fprintf(saida, " ");
                imprimir(root->dir);
                break;

            //Declaracao de variaveis
            case INT:
                fprintf(file_tokens, "INT  \n");
                fprintf(saida, "int ");
                imprimir(root->esq);
                fprintf(saida, ";\n");
                break;
            case FLOAT:
                fprintf(file_tokens, "FLOAT  \n");
                fprintf(saida, "float ");
                imprimir(root->esq);
                fprintf(saida, ";\n");
                break;
            case CHARACTER:
                fprintf(file_tokens, "CHARACTER  \n");
                fprintf(saida, "string ");
                imprimir(root->esq);
                fprintf(saida, ";\n");
                break;
            
            //Leitura
            case READ:
                fprintf(file_tokens, "READ  \n");
                fprintf(saida, "cin >> "); 
                imprimir(root->esq); 
                fprintf(saida, ";\n");  
                break;

            //Atribuicao
            case '=':
                fprintf(file_tokens, "=  \n");
                imprimir(root->esq);
                fprintf(saida, " = ");
                imprimir(root->dir);
                fprintf(saida, ";\n");
                break;

            //Operacoes matematicas
            case '+':
                fprintf(file_tokens, "+  \n");
                imprimir(root->esq);
                fprintf(saida, " + ");
                imprimir(root->dir);
                break;
            case '-':
                fprintf(file_tokens, "-  \n");
                imprimir(root->esq);
                fprintf(saida, " - ");
                imprimir(root->dir);
                break;
            case '*':
                fprintf(file_tokens, "*  \n");
                imprimir(root->esq);
                fprintf(saida, " * ");
                imprimir(root->dir);
                break;
            case '/':
                fprintf(file_tokens, "/  \n");
                imprimir(root->esq);
                fprintf(saida, " / ");
                imprimir(root->dir);
                break;
            case '%':
                fprintf(file_tokens, "%  \n");
                imprimir(root->esq);
                fprintf(saida, " % ");
                imprimir(root->dir);
                break;
            case ABRE_PARENTESES:
                fprintf(file_tokens, "ABRE_PARENTESES  \n");
                fprintf(saida, "(");
                imprimir(root->esq);
                fprintf(file_tokens, "FECHA_PARENTESES  \n");
                fprintf(saida, ")");
                break;
            case ASPAS:
                fprintf(file_tokens, "ASPAS  \n");
                fprintf(saida, "'");
                imprimir(root->esq);
                fprintf(file_tokens, "ASPAS  \n");
                fprintf(saida, "'");
                break;
            
            //Operacoes logicas
            case D_AND:
                fprintf(file_tokens, "D_AND  \n");
                imprimir(root->esq);
                fprintf(saida, " && ");
                imprimir(root->dir);
                break;
            case D_OR:
                fprintf(file_tokens, "D_OR  \n");
                imprimir(root->esq);
                fprintf(saida, " || ");
                imprimir(root->dir);
                break;
            case D_MENOR:
                fprintf(file_tokens, "D_MENOR  \n");
                imprimir(root->esq);
                fprintf(saida, " < ");
                imprimir(root->dir);
                break;
            case D_MENOR_IGUAL:
                fprintf(file_tokens, "D_MENOR_IGUAL  \n");
                imprimir(root->esq);
                fprintf(saida, " <= ");
                imprimir(root->dir);
                break;
            case D_MAIOR:
                fprintf(file_tokens, "D_MAIOR  \n");
                imprimir(root->esq);
                fprintf(saida, " > ");
                imprimir(root->dir);
                break;
            case D_MAIOR_IGUAL:
                fprintf(file_tokens, "D_MAIOR_IGUAL  \n");
                imprimir(root->esq);
                fprintf(saida, " >= ");
                imprimir(root->dir);
                break;
            case D_IGUALDADE:
                fprintf(file_tokens, "D_IGUALDADE  \n");
                imprimir(root->esq);
                fprintf(saida, " == ");
                imprimir(root->dir);
                break;
            case D_DIFERENTE:
                fprintf(file_tokens, "D_DIFERENTE  \n");
                imprimir(root->esq);
                fprintf(saida, " != ");
                imprimir(root->dir);
                break;

            //Operador condicional - IF
            case IF:
                fprintf(file_tokens, "IF  \n");
                fprintf(saida, "if (");
                imprimir(root->esq);
                fprintf(saida, "){\n");
                imprimir(root->dir);
                fprintf(saida, "}\n");
                break;

            //Repetidor - WHILE
            case WHILE:
                fprintf(file_tokens, "WHILE  \n");
                fprintf(saida, "while (");
                imprimir(root->esq);
                fprintf(file_tokens, "{  \n");
                fprintf(saida, "){\n");
                imprimir(root->dir);
                fprintf(file_tokens, "}  \n");
                fprintf(saida, "}\n");
                break;
            
            default:
                fprintf(file_tokens, "TOKEN INVALIDO  \n");
                printf("TOKEN INVALIDO %c \n", root->token);
                fprintf(saida, "Token invalido %c \n", root->token);
        }
        if(root->proximo != NULL){
            imprimir(root->proximo);
        }
    }

}
