%{ 
	#include "synt.tab.h"  //Get tokens from bison
	#include"symbolTable.h"
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
CST_CHAR   (\'[^']*\')
CST_INT  ({figure}+|"\("[+-]{figure}+"\)")
CST_FLOAT	({figure}+"."{figure}+|\([+-]{figure}+"."{figure}+\))
CST_BOOL (true|false)
comparisionOperand (">"|"<"|">="|"<="|"=="|"!=")
logicalOperand ("and"|"or")
op_ar ("+"|"-")
op_ari ("*"|"/")
size ({figure}+)
%% 

[ ]       	
int       	{insert(yytext,"key word","",0); yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_INTEGER recognized \n"); return key_word_INTEGER;}
float     	{insert(yytext,"key word","",0); yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_FLOAT recognized \n"); return key_word_FLOAT;}
char        {insert(yytext,"key word","",0); yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_CHAR  recognized \n"); return key_word_CHAR;}
bool	  		{insert(yytext,"key word","",0); yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_BOOL  recognized \n"); return key_word_BOOL;}
[ \t]  			{col=col+strlen(yytext);}
"    "			{col=col+strlen(yytext); return ind;}
{logicalOperand} insert(yytext,"separator","",0); {col=col+strlen(yytext); printf("Logical operand recognized : %s \n",yytext); return logicalOperand;}
"not"    		{insert(yytext,"key word","",0); yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_NOT recognized \n"); return key_word_NOT;}
"if"      	{insert(yytext,"key word","",0); yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_IF recognized  \n"); return key_word_IF; }
"else"    	{insert(yytext,"key word","",0); yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_ELSE recognized \n"); return key_word_ELSE;}
"while"   	{insert(yytext,"key word","",0); yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_WHILE recognized \n"); return key_word_WHILE;}
"for"     	{insert(yytext,"key word","",0); yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_FOR recognized \n"); return key_word_FOR;}
"in"      	{insert(yytext,"key word","",0); yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_IN recognized \n"); return key_word_IN;}
"in range"  {insert(yytext,"key word","",0); yylval.str=strdup(yytext); col=col+strlen(yytext); printf("key_word_RANGE  recognized \n"); return key_word_RANGE;}
":"       	{insert(yytext,"separator","",0); col=col+strlen(yytext); printf("colon recognized \n"); return colon;}
","       	{insert(yytext,"separator","",0); col=col+strlen(yytext); printf("virgule recognized \n"); return virgule;}
"#"(.)*   		{col=col+strlen(yytext); printf("comment recognized : %s \n",yytext); return comment;}
{comparisionOperand} {insert(yytext,"separator","",0); col=col+strlen(yytext); printf("comparision operand recognized : %s \n",yytext); return comparisionOperand;}
{op_ar} 		{insert(yytext,"separator","",0); col=col+strlen(yytext); printf("arithmetc operation 1 recognized  %s \n", yytext); return opr_ar;}
{op_ari}	 	{insert(yytext,"separator","",0); col=col+strlen(yytext); printf("arithmetic operation 2 recognized %s \n", yytext);  return opr_ari;} 
"("       	{insert(yytext,"separator","",0); col=col+strlen(yytext); printf("openBracket recognized \n");  return openBracket;}
"["       	{insert(yytext,"separator","",0); col=col+strlen(yytext); printf("openSquareBracket recognized \n"); return openSquareBracket;}
"]"       	{insert(yytext,"separator","",0); col=col+strlen(yytext); printf("closeSquareBracket recognized \n"); return closeSquareBracket;}
")"       	{insert(yytext,"separator","",0); col=col+strlen(yytext); printf("closeBracket recognized \n"); return closeBracket;} 

{IDF}     	{if(strlen(yytext)>8){printf("IDF invalide line: %d, colonne: %d", lineNumber,col);}else{printf("IDF recognized : %s \n",yytext); insert(yytext,"idf","",0); col=col+strlen(yytext); return IDF;}}
{CST_INT}   {if(atoi(yytext) > -32768 && atoi(yytext) < 32768){yylval.integer=atoi(yytext); insert(yytext,"const int","int",atoi(yytext)); col=col+strlen(yytext); printf("INT recognized %s \n", yytext ); return CST_INT;}else{printf("integer invalide line: %d, colonne: %d", lineNumber,col);}} 
{CST_FLOAT} {insert(yytext,"const float","float",atof(yytext)); col=col+strlen(yytext); printf("REEL recognized : %s \n",yytext);   return CST_FLOAT;}
{CST_CHAR} {insert(yytext,"const char","char",0); col=col+strlen(yytext); printf("char recognized : %s \n",yytext); return CST_CHAR;}
{CST_BOOL}  {insert(yytext,"const bool","bool",0); yylval.str=strdup(yytext); col=col+strlen(yytext); printf("BOOLEAN recognized : %s \n",yytext); return CST_BOOL;}

"="   			{printf("assignment recognized : %s \n", yytext); col=col+strlen(yytext); return key_word_ASSIGNMENT;}
[\n]    		{lineNumber++; col = 1; printf("new Line recognized \n"); return newLine;}
. { 
	printf ("lexical error : lexical entity has not recognized %s in line %d colonne %d\n",yytext, lineNumber, col);
}
%%
