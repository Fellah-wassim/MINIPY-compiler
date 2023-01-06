%{ 
	#include "synt.tab.h"  //Get tokens from bison
  int lineNumber = 1;
  int col = 1;
  int identation = 0;
	extern YYSTYPE yylval;
%}

upperCaseLetter [A-Z]
letter [a-zA-Z]
figure [0-9]
IDF {upperCaseLetter}({letter}|{figure})*
CST_CHAR      \'[^']\'   
CST_INT  ({figure}+|"\("[+-]{figure}+"\)")
CST_FLOAT	({figure}+"."{figure}+|\([+-]{figure}+"."{figure}+\))
CST_SIGNED_FLOAT	("("[-]?{figure}+"."{figure}+|\([+-]{figure}+"."{figure}+\)")")
CST_BOOL (true|false)
comment #([^\n])*
size ({figure}+)
%% 

int       	{printf("key_word_INTEGER recognized \n");col = col + strlen(yytext); return key_word_INTEGER;}
float     	{printf("key_word_FLOAT recognized \n");col = col + strlen(yytext); return key_word_FLOAT;}
char      	{printf("key_word_CHAR  recognized \n");col = col + strlen(yytext); return key_word_CHAR;}
bool	  		{printf("key_word_BOOL  recognized \n");col = col + strlen(yytext);return key_word_BOOL;}
[ ]       	
[    \t]  	{printf("Tab number '%d' !!! \n", identation); return key_word_TAB;}
"+"       	{printf("addition recognized : %s \n",yytext); return ADD_op;}
"-"       	{printf("Subtraction recognized : %s \n",yytext);return MIN_op;}
"/"       	{printf("division recognized : %s \n",yytext); return DIV_op;}
"*"      		{printf("multiplication recognized : %s \n",yytext); return MUL_op;}
"and"  			{printf("key_word_AND recognized \n"); return key_word_AND;}
"or"    	 	{printf("key_word_OR recognized \n"); return key_word_OR;}
"not"    		{printf("key_word_NOT recognized \n"); return key_word_NOT;}
"if"      	{printf("key_word_IF recognized  \n"); return key_word_IF; }
"else"    	{printf("key_word_ELSE recognized \n"); return key_word_ELSE;}
"while"   	{printf("key_word_WHILE recognized \n"); return key_word_WHILE;}
"for"     	{printf("key_word_FOR recognized \n"); return key_word_FOR;}
"in"      	{printf("key_word_IN recognized \n"); return key_word_IN;}
"range"   	{printf("key_word_RANGE  recognized \n"); return key_word_RANGE;}
":"       	{printf("colon recognized \n");col = col + strlen(yytext); return colon;}
","       	{printf("virgule recognized \n");col = col + strlen(yytext); return virgule;}
{comment}   {printf("comment recognized : %s \n",yytext); col = col + strlen(yytext);}
">"     	 	{printf("key_word_SUPERIOR recognized \n"); return key_word_SUPERIOR ;} 
"<"      		{printf("key_word_LOWER recognized \n"); return key_word_LOWER;}
">="      	{printf("key_word_SUPERIOR_OR_EQUAL recognized \n"); return key_word_SUPERIOR_OR_EQUAL; } 
"<="      	{printf("key_word_LOWER_OR_EQUAL recognized \n"); return key_word_LOWER_OR_EQUAL;}
"=="      	{printf("key_word_EQUAL recognized \n");  return key_word_EQUAL;}
"!="      	{printf("key_word_NOT_EQUAL recognized  \n"); return key_word_NOT_EQUAL;;}
"("       	{printf("openBracket recognized \n");  return openBracket;}
"["       	{printf("openSquareBracket recognized \n"); return openSquareBracket;}
"]"       	{printf("closeSquareBracket recognized \n"); return closeSquareBracket;}
")"       	{printf("closeBracket recognized \n"); return closeBracket;} 
{size}    	{if(atoi(yytext)>0){printf("Size '%s' recognized \n", yytext); return size;}else{printf("Invalid given size ! \n");}}
{IDF}     	{if(strlen(yytext)>8){printf("IDF invalide line: %d, colonne: %d", lineNumber,col);}else{printf("IDF recognized : %s \n",yytext); strcpy(yylval.string,yytext); return IDF;}}
{CST_INT}   {if(atoi(yytext) > -32768 && atoi(yytext) < 32768){printf("Lexical entity recognized %s \n", yytext ); col = col + strlen(yytext); yylval.integer=atoi(yytext); return CST_INT;}else{printf("integer invalide line: %d, colonne: %d", lineNumber,col);}} 
{CST_FLOAT} {printf("REEL recognized : %s \n",yytext); col = col + strlen(yytext); yylval.reel=atof(yytext); return CST_FLOAT;}
{CST_SIGNED_FLOAT} {printf("SIGNED REEL recognized : %s \n",yytext); col = col + strlen(yytext); return CST_SIGNED_FLOAT;}
{CST_CHAR}  {printf("CHAR recognized : %s \n",yytext); col = col + strlen(yytext); strcpy(yylval.string,yytext); return CST_CHAR;}
{CST_BOOL}  {printf("BOOLEAN recognized : %s \n",yytext); col = col + strlen(yytext); return CST_BOOL;}

"="   		{printf("assignment recognized \n"); col = col+strlen(yytext);return key_word_ASSIGNMENT;}
\n    		{lineNumber++; col = 1; return newLine;}
. { 
	printf ("lexical error : lexical entity has not recognized %s in line %d colonne %d\n",yytext, lineNumber, col);
}
%%
