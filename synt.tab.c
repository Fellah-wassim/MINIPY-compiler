
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
#line 1 "synt.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<windows.h>
	#include"symbolTable.h"
	#include"quad.h"
	extern int col ;
	char stockedType[10];
	extern int lineNumber;
	int error = 0;
	int Qc = 0;
	char temp [20]; 
	int tempCounter = 1;


/* Line 189 of yacc.c  */
#line 90 "synt.tab.c"

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
     key_word_INTEGER = 258,
     key_word_FLOAT = 259,
     key_word_CHAR = 260,
     openBracket = 261,
     key_word_IF = 262,
     key_word_ELSE = 263,
     key_word_FOR = 264,
     key_word_NOT = 265,
     key_word_RANGE = 266,
     key_word_IN = 267,
     key_word_WHILE = 268,
     IDF = 269,
     virgule = 270,
     key_word_ASSIGNMENT = 271,
     openSquareBracket = 272,
     closeSquareBracket = 273,
     closeBracket = 274,
     colon = 275,
     logicalOperand = 276,
     opr_ar = 277,
     opr_ari = 278,
     comparisionOperand = 279,
     ind = 280,
     newLine = 281,
     CST_INT = 282,
     key_word_BOOL = 283,
     CST_FLOAT = 284,
     CST_CHAR = 285,
     CST_BOOL = 286,
     comment = 287
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 17 "synt.y"
 
	int integer;
	float reel;
	char* str;
 	struct
	{
		char operation[20]; 
		char operator1[20];   
		char operator2[20];   
		char stocker[20];  
	} quadType; 



/* Line 214 of yacc.c  */
#line 173 "synt.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 185 "synt.tab.c"

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  133

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,    10,    14,    17,    21,    25,    27,
      30,    32,    36,    39,    43,    49,    56,    60,    67,    74,
      76,    78,    80,    82,    84,    86,    88,    90,    94,    97,
     101,   103,   105,   107,   109,   111,   115,   119,   126,   133,
     145,   153,   161,   163,   165,   172,   179,   187,   192,   193,
     197,   201,   204,   209,   213,   219,   223,   225,   227,   229,
     231,   233
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      34,     0,    -1,    35,    41,    -1,    36,    35,    41,    -1,
      37,    36,    35,    -1,    37,    36,    -1,    32,    36,    35,
      -1,    36,    32,    35,    -1,    37,    -1,    26,    36,    -1,
      26,    -1,    38,    14,    40,    -1,    38,    14,    -1,    14,
      16,    39,    -1,    38,    14,    17,    27,    18,    -1,    14,
      17,    27,    18,    16,    39,    -1,    14,    16,    52,    -1,
      14,    17,    27,    18,    16,    52,    -1,    14,    17,    27,
      18,    16,    14,    -1,     3,    -1,     4,    -1,     5,    -1,
      28,    -1,    27,    -1,    29,    -1,    30,    -1,    31,    -1,
      15,    14,    40,    -1,    15,    14,    -1,    42,    26,    41,
      -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,    46,
      -1,    14,    16,    54,    -1,    14,    16,    52,    -1,    14,
      17,    27,    18,    16,    54,    -1,    14,    17,    27,    18,
      16,    52,    -1,     7,     6,    51,    19,    20,    26,    50,
       8,    20,    26,    50,    -1,     7,     6,    51,    19,    20,
      26,    50,    -1,    13,     6,    51,    19,    20,    26,    50,
      -1,    47,    -1,    49,    -1,     9,    14,    48,    20,    26,
      50,    -1,    11,     6,    39,    15,    39,    19,    -1,     9,
      14,    12,    14,    20,    26,    50,    -1,    25,    42,    26,
      50,    -1,    -1,    54,    21,    54,    -1,    54,    24,    54,
      -1,    10,    54,    -1,    10,     6,    52,    19,    -1,    54,
      53,    52,    -1,    54,    53,     6,    52,    19,    -1,     6,
      52,    19,    -1,    54,    -1,    22,    -1,    23,    -1,    39,
      -1,    14,    -1,    14,    17,    27,    18,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    50,    53,    54,    55,    56,    57,    60,
      61,    64,    75,    86,    97,   101,   127,   136,   157,   180,
     181,   182,   183,   186,   187,   188,   189,   192,   193,   206,
     207,   210,   211,   212,   213,   216,   217,   218,   223,   229,
     230,   233,   236,   237,   240,   243,   254,   257,   258,   261,
     262,   263,   264,   267,   278,   284,   288,   291,   292,   295,
     296,   297
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "key_word_INTEGER", "key_word_FLOAT",
  "key_word_CHAR", "openBracket", "key_word_IF", "key_word_ELSE",
  "key_word_FOR", "key_word_NOT", "key_word_RANGE", "key_word_IN",
  "key_word_WHILE", "IDF", "virgule", "key_word_ASSIGNMENT",
  "openSquareBracket", "closeSquareBracket", "closeBracket", "colon",
  "logicalOperand", "opr_ar", "opr_ari", "comparisionOperand", "ind",
  "newLine", "CST_INT", "key_word_BOOL", "CST_FLOAT", "CST_CHAR",
  "CST_BOOL", "comment", "$accept", "Start", "declarationList", "newLines",
  "declaration", "type", "VALUE", "ListIDF", "ListInst", "instruction",
  "inst_ASSIGNMENT", "inst_if", "inst_while", "inst_for", "for1",
  "InRange", "for2", "Bloc", "cond", "expression", "opr", "operand", 0
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
     285,   286,   287
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    35,    35,    35,    36,
      36,    37,    37,    37,    37,    37,    37,    37,    37,    38,
      38,    38,    38,    39,    39,    39,    39,    40,    40,    41,
      41,    42,    42,    42,    42,    43,    43,    43,    43,    44,
      44,    45,    46,    46,    47,    48,    49,    50,    50,    51,
      51,    51,    51,    52,    52,    52,    52,    53,    53,    54,
      54,    54
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     3,     2,     3,     3,     1,     2,
       1,     3,     2,     3,     5,     6,     3,     6,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     3,
       1,     1,     1,     1,     1,     3,     3,     6,     6,    11,
       7,     7,     1,     1,     6,     6,     7,     4,     0,     3,
       3,     2,     4,     3,     5,     3,     1,     1,     1,     1,
       1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    19,    20,    21,     0,    10,    22,     0,     0,     0,
       0,     8,     0,     0,     0,     9,     0,     1,     0,     0,
       0,     0,     2,    30,    31,    32,    33,    34,    42,    43,
       0,     0,     0,     5,    12,     0,    60,    23,    24,    25,
      26,    13,    16,    56,     0,     6,     0,     0,     0,     0,
       0,     0,     7,     0,     3,     0,     4,     0,     0,    11,
      59,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,    35,     0,    29,    28,     0,
      55,     0,     0,    53,     0,     0,    51,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    14,    61,     0,    18,
      15,    17,     0,     0,    49,    50,     0,     0,    48,     0,
       0,    54,    52,    48,     0,    48,     0,    44,    48,    38,
      37,    40,     0,    46,     0,    41,     0,    45,    48,     0,
      47,    48,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     8,    45,    32,    11,    12,    60,    59,    22,    23,
      24,    25,    26,    27,    28,    72,    29,   117,    68,    42,
      65,    43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -73
static const yytype_int16 yypact[] =
{
       6,   -73,   -73,   -73,    13,   -20,   -73,     1,    40,    86,
      21,     1,    58,    51,    25,   -73,     6,   -73,    67,    60,
      73,    38,   -73,    68,   -73,   -73,   -73,   -73,   -73,   -73,
       6,    86,    52,     6,     2,    51,    79,   -73,   -73,   -73,
     -73,    41,   -73,    46,    85,   -73,    88,    49,    88,    51,
      77,    86,   -73,    21,   -73,     6,   -73,    91,    81,   -73,
     -73,    87,    82,   -73,   -73,    56,    95,    61,    97,    18,
     115,   112,   110,   113,   -73,    46,   116,   -73,   118,   117,
     -73,   119,    51,   -73,    83,    51,   -73,   111,    93,    93,
      98,   120,   121,   122,   123,   -73,   -73,   -73,   124,    -1,
      41,   -73,   125,   126,   -73,   -73,   130,   127,   129,   131,
      51,   -73,   -73,   129,    98,   129,    86,   -73,   129,   -73,
      46,   128,   132,   -73,   133,   -73,   135,   -73,   129,   134,
     -73,   129,   -73
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,     3,     7,   -73,   -73,   -13,    63,   -23,    22,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -72,   100,   -34,
     -73,   -44
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -61
static const yytype_int16 yytable[] =
{
      41,    61,    69,     9,    69,    75,   -61,    10,    54,     1,
       2,     3,    15,    31,    16,    74,    62,    57,    33,    58,
       4,   -60,   -60,    86,     1,     2,     3,     5,    77,    13,
      14,    83,     5,    52,     6,     4,    56,    53,     7,    88,
      17,   121,    89,   123,   104,   105,   125,     5,    98,     6,
     101,   102,    44,    30,    49,    50,   130,    35,    52,   132,
      70,    71,    82,   -59,   -59,    36,   120,    85,    63,    64,
      36,   100,    34,    46,    47,    36,   119,   106,    37,    48,
      38,    39,    40,    37,    55,    38,    39,    40,    37,    35,
      38,    39,    40,    18,    51,    19,    62,    99,    67,    20,
      21,   122,    36,    66,    76,    78,    80,    36,    79,    81,
      37,    84,    38,    39,    40,    37,    87,    38,    39,    40,
      37,    90,    38,    39,    40,    37,    91,    38,    39,    40,
      92,   103,    93,    57,    94,    96,   126,    97,   124,   110,
     107,    95,   109,   111,   112,   114,     0,   108,    73,     0,
       0,   127,   113,   115,   116,   129,     0,   118,     0,   128,
     131
};

static const yytype_int16 yycheck[] =
{
      13,    35,    46,     0,    48,    49,    26,     0,    31,     3,
       4,     5,     5,    10,     7,    49,    17,    15,    11,    17,
      14,    22,    23,    67,     3,     4,     5,    26,    51,    16,
      17,    65,    26,    30,    28,    14,    33,    30,    32,    21,
       0,   113,    24,   115,    88,    89,   118,    26,    82,    28,
      84,    85,    27,    32,    16,    17,   128,     6,    55,   131,
      11,    12,     6,    22,    23,    14,   110,     6,    22,    23,
      14,    84,    14,     6,    14,    14,   110,    90,    27,     6,
      29,    30,    31,    27,    32,    29,    30,    31,    27,     6,
      29,    30,    31,     7,    26,     9,    17,    14,    10,    13,
      14,   114,    14,    18,    27,    14,    19,    14,    27,    27,
      27,    16,    29,    30,    31,    27,    19,    29,    30,    31,
      27,     6,    29,    30,    31,    27,    14,    29,    30,    31,
      20,    20,    19,    15,    18,    18,     8,    18,   116,    16,
      20,    78,    20,    19,    19,    15,    -1,    26,    48,    -1,
      -1,    19,    26,    26,    25,    20,    -1,    26,    -1,    26,
      26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    14,    26,    28,    32,    34,    35,
      36,    37,    38,    16,    17,    36,    36,     0,     7,     9,
      13,    14,    41,    42,    43,    44,    45,    46,    47,    49,
      32,    35,    36,    36,    14,     6,    14,    27,    29,    30,
      31,    39,    52,    54,    27,    35,     6,    14,     6,    16,
      17,    26,    35,    36,    41,    32,    35,    15,    17,    40,
      39,    52,    17,    22,    23,    53,    18,    10,    51,    54,
      11,    12,    48,    51,    52,    54,    27,    41,    14,    27,
      19,    27,     6,    52,    16,     6,    54,    19,    21,    24,
       6,    14,    20,    19,    18,    40,    18,    18,    52,    14,
      39,    52,    52,    20,    54,    54,    39,    20,    26,    20,
      16,    19,    19,    26,    15,    26,    25,    50,    26,    52,
      54,    50,    39,    50,    42,    50,     8,    19,    26,    20,
      50,    26,    50
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
#line 46 "synt.y"
    {
		printf("Syntax correct \n"); 
		YYACCEPT;
	;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 65 "synt.y"
    {	
		if(doubleDeclaration((yyvsp[(2) - (3)].str))==0)
		{
			insertType((yyvsp[(2) - (3)].str), stockedType);
		}else
		{	printf("Semantic error: double declaration of %s, in line %d \n",(yyvsp[(2) - (3)].str),lineNumber-1);
			error=1; 
			YYERROR;
		};
	;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 76 "synt.y"
    {
		if(doubleDeclaration((yyvsp[(2) - (2)].str))==0)
		{
			insertType((yyvsp[(2) - (2)].str), stockedType);
		}else{
			printf("Semantic error: double declaration of %s, in line %d \n",(yyvsp[(2) - (2)].str),lineNumber-1);
			error=1;
			YYERROR;
		};
	;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 87 "synt.y"
    {
		if(strcmp(symbolTable[search((yyvsp[(1) - (3)].str))].type,symbolTable[search((yyvsp[(3) - (3)].str))].type)!=0){
			printf("Semantic error: incompatible types, in line %d \n",lineNumber-1);
			error=1;
			YYERROR;
		}
		Quad(":=",(yyvsp[(3) - (3)].str),"",(yyvsp[(1) - (3)].str));
		insertValue((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str),stockedType);
		insertType((yyvsp[(1) - (3)].str), stockedType);
	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 98 "synt.y"
    {
		insertType((yyvsp[(1) - (5)].str), stockedType);
	;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 102 "synt.y"
    {
		if(strcmp(symbolTable[search((yyvsp[(1) - (6)].str))].type,symbolTable[search((yyvsp[(6) - (6)].str))].type)!=0){
			printf("Semantic error: incompatible types, in line %d \n",lineNumber-1);
			error=1;
			YYERROR;
		}
		int position = search((yyvsp[(1) - (6)].str));
		if(search((yyvsp[(1) - (6)].str)) != -1)
		{
			if(search("[") != -1)
			{
				position = position + 1;
			}else{
				position = position + 2;
			}
			if( atoi(symbolTable[position].name) < atoi((yyvsp[(3) - (6)].str)) )
			{
				printf("Semantic error: the table is declared in size of [%s] you can't index more then that, in line %d \n",symbolTable[position].name,lineNumber-1);
				error=1; 
				YYERROR;
			}
		}
		sprintf(temp,"%s[%s]",(yyvsp[(1) - (6)].str),(yyvsp[(3) - (6)].str));
		Quad("=:",temp,"",(yyvsp[(6) - (6)].str));
	;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 128 "synt.y"
    {
		if(strcmp(symbolTable[search((yyvsp[(1) - (3)].str))].type,(yyvsp[(3) - (3)].quadType).stocker)!=0){
			printf("Semantic error: incompatible types, in line %d \n",lineNumber-1);
			error=1;
			YYERROR;
		}
		Quad("=:",(yyvsp[(3) - (3)].quadType).stocker,"",(yyvsp[(1) - (3)].str));
	;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 137 "synt.y"
    {
		int position = search((yyvsp[(1) - (6)].str));
		if(search((yyvsp[(1) - (6)].str)) != -1)
		{
			if(search("[") != -1)
			{
				position = position + 1;
			}else{
				position = position + 2;
			}
			if( atoi(symbolTable[position].name) < atoi((yyvsp[(3) - (6)].str)) )
			{
				printf("Semantic error: the table is declared in size of [%s] you can't index more then that, in line %d \n",symbolTable[position].name,lineNumber-1);
				error=1; 
				YYERROR;
			}
		}
		sprintf(temp,"%s[%s]",(yyvsp[(1) - (6)].str),(yyvsp[(3) - (6)].str));
		Quad("=:",temp,"",(yyvsp[(6) - (6)].quadType).stocker);
	;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 158 "synt.y"
    {	
		int position = search((yyvsp[(1) - (6)].str));
		if(search((yyvsp[(1) - (6)].str)) != -1)
		{
			if(search("[") != -1)
			{
				position = position + 1;
			}else{
				position = position + 2;
			}
			if( atoi(symbolTable[position].name) < atoi((yyvsp[(3) - (6)].str)) )
			{
				printf("Semantic error: the table is declared in size of [%s] you can't index more then that, in line %d \n",symbolTable[position].name,lineNumber);
				error=1; 
				YYERROR;
			}
		}
		sprintf(temp,"%s[%s]",(yyvsp[(1) - (6)].str),(yyvsp[(3) - (6)].str));
		Quad("=:",temp,"",(yyvsp[(6) - (6)].str));
	;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 180 "synt.y"
    {strcpy(stockedType,"int");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 181 "synt.y"
    {strcpy(stockedType,"float");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 182 "synt.y"
    {strcpy(stockedType,"char");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 183 "synt.y"
    {strcpy(stockedType,"bool");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 186 "synt.y"
    {strcpy(stockedType,"int"); strcpy((yyval.str),(yyvsp[(1) - (1)].str));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 187 "synt.y"
    {strcpy(stockedType,"float"); strcpy((yyval.str),(yyvsp[(1) - (1)].str));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 188 "synt.y"
    {strcpy(stockedType,"char"); strcpy((yyval.str),(yyvsp[(1) - (1)].str));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 189 "synt.y"
    {strcpy(stockedType,"bool"); strcpy((yyval.str),(yyvsp[(1) - (1)].str));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 194 "synt.y"
    {
		if(doubleDeclaration((yyvsp[(1) - (2)].str))==0)
		{
			insertType((yyvsp[(1) - (2)].str), stockedType);
		}else{
			printf("Semantic error: double declaration of %s, in line %d colonne %d \n",(yyvsp[(1) - (2)].str),lineNumber,col);
			error=1;
			YYERROR;
		};
	;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 216 "synt.y"
    {Quad(":=",(yyvsp[(3) - (3)].str),"",(yyvsp[(1) - (3)].str));;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 217 "synt.y"
    {Quad("=:",(yyvsp[(3) - (3)].quadType).stocker,"",(yyvsp[(1) - (3)].str));;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 219 "synt.y"
    {
		sprintf(temp,"%s[%d]",(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str));
		Quad("=:",temp,"",(yyvsp[(6) - (6)].str));
	;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 224 "synt.y"
    {
		sprintf(temp,"%s[%s]",(yyvsp[(1) - (6)].str),(yyvsp[(3) - (6)].str));
		Quad("=:",temp,"",(yyvsp[(6) - (6)].quadType).stocker);
	;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 244 "synt.y"
    {
		if(atoi((yyvsp[(3) - (6)].str))>atoi((yyvsp[(5) - (6)].str)))
		{ 
			printf("Semantic error: upper bound lower than the lower bound in line %d colonne %d \n",lineNumber,col);
			error=1;
			YYERROR;
		};
	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 268 "synt.y"
    {
		sprintf(temp,"temp%d",tempCounter);
		tempCounter++;
		strcpy((yyval.quadType).stocker,temp);
		strcpy((yyval.quadType).operator2,temp);
		Quad((yyvsp[(2) - (3)].str),(yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].quadType).operator2,temp);
		if(strcmp((yyvsp[(2) - (3)].str),"/")==0){
			printf ("Semantic error: division per 0 in line %d \n",lineNumber-1); error=1; YYERROR;
		};
	;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 279 "synt.y"
    {
		sprintf(temp,"temp%d",tempCounter);
		tempCounter++; strcpy((yyval.quadType).stocker,temp);
		Quad((yyvsp[(2) - (5)].str),(yyvsp[(1) - (5)].str),(yyvsp[(4) - (5)].quadType).stocker,temp);
	;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 285 "synt.y"
    {
		strcpy((yyval.quadType).stocker,(yyvsp[(2) - (3)].quadType).stocker);
	;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 288 "synt.y"
    {strcpy((yyval.quadType).operator2,(yyvsp[(1) - (1)].str));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 291 "synt.y"
    {strcpy((yyval.str),(yyvsp[(1) - (1)].str));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 292 "synt.y"
    {strcpy((yyval.str),(yyvsp[(1) - (1)].str));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 295 "synt.y"
    {strcpy((yyval.str),(yyvsp[(1) - (1)].str));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 296 "synt.y"
    {strcpy((yyval.str),(yyvsp[(1) - (1)].str));;}
    break;



/* Line 1455 of yacc.c  */
#line 1854 "synt.tab.c"
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
#line 300 "synt.y"


main()
{
  yyparse();
	if(error==0)
	{
		displaySymbolTable();
		displayQuad();
	} 
	
}
yywrap()
{}
int yyerror ( char*  msg )  
{
	printf ("Syntax error in line %d colonne %d \n", lineNumber,col);
}


  
