
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDF = 258,
     CST_INT = 259,
     size = 260,
     key_word_BOOL = 261,
     key_word_ASSIGNMENT = 262,
     CST_BOOL = 263,
     CST_FLOAT = 264,
     CST_SIGNED_FLOAT = 265,
     CST_CHAR = 266,
     key_word_CHAR = 267,
     key_word_INTEGER = 268,
     key_word_FLOAT = 269,
     key_word_EQUAL = 270,
     key_word_NOT_EQUAL = 271,
     openSquareBracket = 272,
     closeSquareBracket = 273,
     openBracket = 274,
     closeBracket = 275,
     ADD_op = 276,
     MIN_op = 277,
     DIV_op = 278,
     MUL_op = 279,
     key_word_AND = 280,
     key_word_OR = 281,
     key_word_NOT = 282,
     key_word_SUPERIOR = 283,
     key_word_LOWER = 284,
     key_word_SUPERIOR_OR_EQUAL = 285,
     key_word_LOWER_OR_EQUAL = 286,
     key_word_IF = 287,
     key_word_FOR = 288,
     key_word_ELSE = 289,
     key_word_WHILE = 290,
     key_word_RANGE = 291,
     key_word_IN = 292,
     colon = 293,
     virgule = 294,
     newLine = 295,
     key_word_TAB = 296,
     true_bloc = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 5 "synt.y"

    int integer;
    char* string;
    float reel;



/* Line 1676 of yacc.c  */
#line 102 "synt.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


