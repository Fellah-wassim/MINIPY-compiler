/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SYNT_TAB_H_INCLUDED
# define YY_YY_SYNT_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDF = 258,                     /* IDF  */
    CST_INT = 259,                 /* CST_INT  */
    key_word_BOOL = 260,           /* key_word_BOOL  */
    key_word_ASSIGNMENT = 261,     /* key_word_ASSIGNMENT  */
    CST_BOOL = 262,                /* CST_BOOL  */
    CST_FLOAT = 263,               /* CST_FLOAT  */
    CST_CHAR = 264,                /* CST_CHAR  */
    key_word_CHAR = 265,           /* key_word_CHAR  */
    key_word_INTEGER = 266,        /* key_word_INTEGER  */
    key_word_FLOAT = 267,          /* key_word_FLOAT  */
    key_word_EQUAL = 268,          /* key_word_EQUAL  */
    key_word_NOT_EQUAL = 269,      /* key_word_NOT_EQUAL  */
    openSquareBracket = 270,       /* openSquareBracket  */
    closeSquareBracket = 271,      /* closeSquareBracket  */
    openBracket = 272,             /* openBracket  */
    closeBracket = 273,            /* closeBracket  */
    ADD_op = 274,                  /* ADD_op  */
    key_word_space = 275,          /* key_word_space  */
    MIN_op = 276,                  /* MIN_op  */
    DIV_op = 277,                  /* DIV_op  */
    MUL_op = 278,                  /* MUL_op  */
    key_word_AND = 279,            /* key_word_AND  */
    key_word_OR = 280,             /* key_word_OR  */
    key_word_NOT = 281,            /* key_word_NOT  */
    key_word_SUPERIOR = 282,       /* key_word_SUPERIOR  */
    key_word_LOWER = 283,          /* key_word_LOWER  */
    key_word_SUPERIOR_OR_EQUAL = 284, /* key_word_SUPERIOR_OR_EQUAL  */
    key_word_LOWER_OR_EQUAL = 285, /* key_word_LOWER_OR_EQUAL  */
    key_word_IF = 286,             /* key_word_IF  */
    key_word_FOR = 287,            /* key_word_FOR  */
    key_word_ELSE = 288,           /* key_word_ELSE  */
    key_word_WHILE = 289,          /* key_word_WHILE  */
    key_word_RANGE = 290,          /* key_word_RANGE  */
    key_word_IN = 291,             /* key_word_IN  */
    colon = 292,                   /* colon  */
    virgule = 293,                 /* virgule  */
    newLine = 294,                 /* newLine  */
    true_bloc = 295                /* true_bloc  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNT_TAB_H_INCLUDED  */
