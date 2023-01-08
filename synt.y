%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<windows.h>
  extern int lineNumber;
	extern int col ;
	char stockedType[10];
%}
%union 
{ 
   int integer;
   float reel;
   char* str;
}
%token <str>key_word_INTEGER <reel>key_word_FLOAT <str>key_word_CHAR <str>key_word_BOOL <str>key_word_IF <str>key_word_ELSE <str>key_word_FOR 
%token <str>key_word_RANGE <str>key_word_IN <str>key_word_WHILE <str>IDF <str>virgule <str>key_word_ASSIGNMENT <str>apo <str>openSquareBracket <str>closeSquareBracket <str>openBracket <str>closeBracket <str>colon
%token <str>logicalOperand <str>opr_ar <str>opr_ari <str>key_word_NOT <str>comparisionOperand ind <str>newLine <integer>CST_INT
%token <reel>CST_FLOAT <str>CST_CHAR <str>CST_BOOL comment

%start Start
%nonassoc comparisionOperand
%right key_word_NOT
%left opr_ari opr_ar
%type<str> declaration type  ListIDF case VALUE

%%
Start : declarationList ListInst {printf("Syntax correct \n"); YYACCEPT;}
;
declarationList : declaration newLine declarationList
	| declaration newLine
;
declaration : type IDF ListIDF  {insertType($2, stockedType);}
	| IDF key_word_ASSIGNMENT VALUE {insertType($1, stockedType);} 
	| type case {insertType($1, stockedType);} 
;
case : IDF openSquareBracket CST_INT closeSquareBracket  
;
type : key_word_INTEGER {strcpy(stockedType,"int");}
	| key_word_FLOAT {strcpy(stockedType,"float");}
	| key_word_CHAR {strcpy(stockedType,"char");}
	| key_word_BOOL {strcpy(stockedType,"bool");}
;
VALUE : CST_INT {strcpy(stockedType,"int");}
  | CST_FLOAT {strcpy(stockedType,"float");}
	| CST_CHAR {strcpy(stockedType,"char");}
	| CST_BOOL {strcpy(stockedType,"bool");}
;
ListIDF : virgule ListIDF
  |
;
instruction : inst_ASSIGNMENT
	| inst_if
	| inst_while
	| inst_for
;
ListInst: instruction newLine ListInst
	| instruction
;
inst_ASSIGNMENT : IDF key_word_ASSIGNMENT operand
	| IDF key_word_ASSIGNMENT expression
	| case key_word_ASSIGNMENT operand
	| case key_word_ASSIGNMENT expression
;
inst_if : key_word_IF openBracket cond closeBracket colon newLine Bloc key_word_ELSE colon newLine Bloc
	| key_word_IF openBracket cond closeBracket colon newLine Bloc 
;
inst_while: key_word_WHILE openBracket cond closeBracket colon newLine Bloc
;
inst_for: version1
	| version2
;
version1: key_word_FOR IDF key_word_RANGE openBracket VALUE virgule VALUE closeBracket colon newLine Bloc
;
version2: key_word_FOR IDF key_word_IN IDF colon newLine Bloc
;
Bloc: ind instruction newLine Bloc
	| 
;
cond: operand logicalOperand operand
	| operand comparisionOperand operand
	| key_word_NOT operand
	| key_word_NOT expressionWithBrackets
;
expression: operand opr operand
	| operand opr expression
	| operand opr expressionWithBrackets
	| expressionWithBrackets
;
expressionWithBrackets: openBracket expression closeBracket
;
opr: opr_ar
  | opr_ari
;
operand: VALUE
	| IDF
	| case
;
%%

main()
{
  yyparse();
	displaySymbolTable();
}
yywrap()
{}
int yyerror ( char*  msg )  
{
	printf ("Syntax error in line %d colonne %d \n", lineNumber,col);
}


  