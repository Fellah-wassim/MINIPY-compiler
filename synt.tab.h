
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
     key_word_INTEGER = 258,
     key_word_FLOAT = 259,
     key_word_CHAR = 260,
     key_word_BOOL = 261,
     key_word_IF = 262,
     key_word_ELSE = 263,
     key_word_FOR = 264,
     key_word_RANGE = 265,
     key_word_IN = 266,
     key_word_WHILE = 267,
     IDF = 268,
     virgule = 269,
     key_word_ASSIGNMENT = 270,
     openSquareBracket = 271,
     closeSquareBracket = 272,
     openBracket = 273,
     closeBracket = 274,
     colon = 275,
     logicalOperand = 276,
     opr_ar = 277,
     opr_ari = 278,
     key_word_NOT = 279,
     comparisionOperand = 280,
     ind = 281,
     newLine = 282,
     CST_INT = 283,
     CST_FLOAT = 284,
     CST_CHAR = 285,
     CST_BOOL = 286,
     comment = 287
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 15 "synt.y"
 
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



/* Line 1676 of yacc.c  */
#line 99 "synt.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


