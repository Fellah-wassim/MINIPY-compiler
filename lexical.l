%{ 
	#include "synt.tab.h"  //Get tokens from bison
	#include"symboleTable.h"
	#include<stdio.h>
  #include<stdlib.h>
  #include<string.h>
  int lineNumber = 1;
  int col = 1;
	extern YYSTYPE yylval;
%}

upperCaseLetter [A-Z]
letter [a-zA-Z]
figure [0-9]
IDF {upperCaseLetter}({letter}|{figure})*
CST_CHAR      \'[^']\'   
CST_INT  ({figure}+|"\("[+-]{figure}+"\)")
CST_FLOAT	({figure}+"."{figure}+|\([+-]{figure}+"."{figure}+\))
CST_BOOL (true|false)
comparisionOperand (">"|"<"|">="|"<="|"=="|"!=")
logicalOperand ("and"|"or")
op_ar ("+"|"-")
op_ari ("*"|"/")
comment #([^\n])*
size ({figure}+)
%% 

[ ]       	
int       	{yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_INTEGER recognized \n"); return key_word_INTEGER;}
float     	{yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_FLOAT recognized \n"); return key_word_FLOAT;}
char      	{yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_CHAR  recognized \n"); return key_word_CHAR;}
bool	  		{yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_BOOL  recognized \n"); return key_word_BOOL;}
[ \t]  			{col=col+strlen(yytext);}
"    "			{col=col+strlen(yytext); return ind;}
{logicalOperand} {col=col+strlen(yytext); printf("Logical operand recognized : %s \n",yytext); return logicalOperand;}
"not"    		{yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_NOT recognized \n"); return key_word_NOT;}
"if"      	{yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_IF recognized  \n"); return key_word_IF; }
"else"    	{yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_ELSE recognized \n"); return key_word_ELSE;}
"while"   	{yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_WHILE recognized \n"); return key_word_WHILE;}
"for"     	{yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_FOR recognized \n"); return key_word_FOR;}
"in"      	{yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_IN recognized \n"); return key_word_IN;}
"in range"  {yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_RANGE  recognized \n"); return key_word_RANGE;}
":"       	{col=col+strlen(yytext); printf("colon recognized \n"); return colon;}
","       	{col=col+strlen(yytext); printf("virgule recognized \n"); return virgule;}
{comment}   {col=col+strlen(yytext); printf("comment recognized : %s \n",yytext); return comment;}
{comparisionOperand} {col=col+strlen(yytext); printf("comparision operand recognized : %s \n",yytext); return comparisionOperand;}
{op_ar} 		{col=col+strlen(yytext); printf("arithmetc operation 1 recognized  %s \n", yytext); return opr_ar;}
{op_ari}	 	{col=col+strlen(yytext); printf("arithmetic operation 2 recognized %s \n", yytext);  return opr_ari;} 
"("       	{col=col+strlen(yytext); printf("openBracket recognized \n");  return openBracket;}
"["       	{col=col+strlen(yytext); printf("openSquareBracket recognized \n"); return openSquareBracket;}
"]"       	{col=col+strlen(yytext); printf("closeSquareBracket recognized \n"); return closeSquareBracket;}
")"       	{col=col+strlen(yytext); printf("closeBracket recognized \n"); return closeBracket;} 
"'" 				{col=col+strlen(yytext); printf("apostrophe recognized %s \n", yytext); return apo;}
{IDF}     	{if(strlen(yytext)>8){printf("IDF invalide line: %d, colonne: %d", lineNumber,col);}else{printf("IDF recognized : %s \n",yytext); strcpy(yylval.str,yytext); return IDF;}}
{CST_INT}   {if(atoi(yytext) > -32768 && atoi(yytext) < 32768){yylval.integer=atoi(yytext); col=col+strlen(yytext); printf("Lexical entity recognized %s \n", yytext ); return CST_INT;}else{printf("integer invalide line: %d, colonne: %d", lineNumber,col);}} 
{CST_FLOAT} {yylval.reel=atof(yytext); col=col+strlen(yytext); printf("REEL recognized : %s \n",yytext);   return CST_FLOAT;}
{CST_CHAR}  {strcpy(yylval.str,yytext); col=col+strlen(yytext); printf("CHAR recognized : %s \n",yytext); return CST_CHAR;}
{CST_BOOL}  {yylval.str=strdup(yytext); col=col+strlen(yytext); printf("BOOLEAN recognized : %s \n",yytext); return CST_BOOL;}

"="   		{printf("assignment recognized \n"); col = col+strlen(yytext);return key_word_ASSIGNMENT;}
[\n]    		{lineNumber++; col = 1; return newLine;}
. { 
	printf ("lexical error : lexical entity has not recognized %s in line %d colonne %d\n",yytext, lineNumber, col);
}
%%
