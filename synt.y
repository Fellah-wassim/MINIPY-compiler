%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<windows.h>
	extern int col ;
	char stockedType[10];
	extern int lineNumber;
	int error = 0;
	int Qc = 0;
	char temp [20]; 
%}
%union 
{ 
	int integer;
	float reel;
	char* str;
}
%token <str>key_word_INTEGER <reel>key_word_FLOAT <str>key_word_CHAR <str>key_word_BOOL <str>key_word_IF <str>key_word_ELSE <str>key_word_FOR 
%token <str>key_word_RANGE <str>key_word_IN <str>key_word_WHILE <str>IDF <str>virgule <str>key_word_ASSIGNMENT  <str>openSquareBracket <str>closeSquareBracket <str>openBracket <str>closeBracket <str>colon
%token <str>logicalOperand <str>opr_ar <str>opr_ari <str>key_word_NOT <str>comparisionOperand ind <str>newLine <str>CST_INT
%token <str>CST_FLOAT <str>CST_CHAR <str>CST_BOOL comment

%start Start
%nonassoc comparisionOperand newLine   
%right key_word_NOT 
%left opr_ari opr_ar
%type<str> declaration type  ListIDF VALUE case

%%
Start : declarationList ListInst {printf("Syntax correct \n"); YYACCEPT; } 
| newLines declarationList ListInst
;
declarationList : declaration newLines declarationList
	| declaration newLines 
	| newLines declaration
	| comment newLines declarationList
	| newLines comment declarationList
;
newLines : newLine newLines
	| newLine
;

declaration : type IDF ListIDF {if(doubleDeclaration($2)==0){insertType($2, stockedType);}else{printf("Semantic error: double declaration of %s, in line %d \n",$2,lineNumber-1); error=1; YYERROR;};}
	| IDF key_word_ASSIGNMENT VALUE {insertValue($1,$3,stockedType); insertType($1, stockedType);}
	| type case {insertType($1, stockedType);}
;
case : IDF openSquareBracket CST_INT closeSquareBracket 
;
type : key_word_INTEGER {strcpy(stockedType,"int");}
	| key_word_FLOAT {strcpy(stockedType,"float");}
	| key_word_CHAR {strcpy(stockedType,"char");}
	| key_word_BOOL {strcpy(stockedType,"bool");}
;
VALUE : CST_INT {strcpy(stockedType,"int"); strcpy($$,$1);}
  | CST_FLOAT {strcpy(stockedType,"float"); strcpy($$,$1);}
	| CST_CHAR {strcpy(stockedType,"char"); strcpy($$,$1);}
	| CST_BOOL {strcpy(stockedType,"bool"); strcpy($$,$1);}
;
ListIDF : virgule IDF ListIDF
  |	virgule IDF	{if(doubleDeclaration($1)==0){insertType($1, stockedType);}else{printf("Semantic error: double declaration of %s, in line %d colonne %d \n",$1,lineNumber,col); error=1; YYERROR;};}
	|	
;
ListInst: instruction newLine ListInst 
	| instruction 
;
instruction : inst_ASSIGNMENT
	| inst_if
	| inst_while
	| inst_for 
;
inst_ASSIGNMENT : IDF key_word_ASSIGNMENT operand
	| IDF key_word_ASSIGNMENT expression
	| case key_word_ASSIGNMENT operand
	| case key_word_ASSIGNMENT expression
;
inst_if : key_word_IF openBracket cond closeBracket colon newLine Bloc key_word_ELSE colon newLine Bloc
	| key_word_IF openBracket cond closeBracket colon newLine Bloc 
;
inst_while : key_word_WHILE openBracket cond closeBracket colon newLine Bloc
;
inst_for : for1 
	| for2
;
for1 : key_word_FOR IDF InRange colon newLine Bloc 
;
InRange : key_word_RANGE openBracket VALUE virgule VALUE closeBracket {if(atoi($3)>atoi($5)){ printf ("Semantic error: upper bound lower than the lower bound in in line %d colonne %d \n",lineNumber,col);error=1; YYERROR;};}
;
for2 : key_word_FOR IDF key_word_IN IDF colon newLine Bloc
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
	if(error==0){displaySymbolTable();} 
}
yywrap()
{}
int yyerror ( char*  msg )  
{
	printf ("Syntax error in line %d colonne %d \n", lineNumber,col);
}


  