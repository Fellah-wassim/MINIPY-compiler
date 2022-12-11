%{  
   int lineNumber = 1;
   int col = 1;
   int identation = 0;
%}

upperCaseLetter [A-Z]
letter [a-zA-Z]
figure [0-9]
IDF {upperCaseLetter}({letter}|{figure})*
CST_CHAR      \'[^']\'   
CST_INT  ({figure}+|"\("[+-]{figure}+"\)")
CST_FLOAT	({figure}+"."{figure}+|\([+-]{figure}+"."{figure}+\))
CST_BOOL (true|false)


%% 
int       	{printf("key_word_INTEGER recognized \n");col = col + strlen(yytext);}
float     	{printf("key_word_FLOAT recognized \n");col = col + strlen(yytext);}
char      	{printf("key_word_CHAR  recognized \n");col = col + strlen(yytext);}
bool	  	{printf("key_word_BOOL  recognized \n");col = col + strlen(yytext);}
[ ]       	{identation = identation + 1;}
[    \t]  	{printf("Tab number '%d' !!! \n", identation);}
"+"       	{printf("addition recognized : %s \n",yytext); }
"-"       	{printf("Subtraction recognized : %s \n",yytext);}
"/"       	{printf("division recognized : %s \n",yytext);}
"*"      	{printf("multiplication recognized : %s \n",yytext);}
"and"  		{printf("key_word_AND recognized \n");}
"or"     	{printf("key_word_OR recognized \n");}
"not"    	{printf("key_word_NOT recognized \n");}
">"      	{printf("key_word_SUPERIOR recognized \n");} 
"<"      	{printf("key_word_LOWER recognized \n");}
">="      	{printf("key_word_SUPERIOR_OR_EQUAL recognized \n");} 
"<="      	{printf("key_word_LOWER_OR_EQUAL recognized \n");}
"=="      	{printf("key_word_EQUAL recognized \n");}
"!="      	{printf("key_word_NOT_EQUAL recognized  \n");}
"("       	{printf("openedBracket recognized \n");}
"["       	{printf("openedSquareBracket recognized \n");}
"]"       	{printf("closedSquareBracket recognized \n");}
")"       	{printf("closedBracket recognized \n");} 
"if"      	{printf("key_word_IF recognized  \n");}
"else"    	{printf("key_word_ELSE recognized \n");}
"while"   	{printf("key_word_WHILE recognized \n");;}
"for"     	{printf("key_word_FOR recognized \n");}
"in"      	{printf("key_word_IN recognized \n");}
"range"   	{printf("key_word_RANGE  recognized \n");}
":"       	{printf("colon recognized \n");col = col + strlen(yytext);}
","       	{printf("virgule recognized \n");col = col + strlen(yytext);}
"#"       	{printf("comment recognized : %s \n",yytext); col = col + strlen(yytext);}
{IDF}     	{if(strlen(yytext)>8){
				printf("IDF invalide line: %d, colonne: %d", lineNumber,col);
			}
			else{
				printf("IDF recognized : %s \n",yytext);
			}
			}
{CST_INT}  {if(atoi(yytext) > -32768 && atoi(yytext) < 32768){
				printf("Lexical entity recognized %s \n", yytext );
				col = col + strlen(yytext);
	        }
	        else{
				printf("integer invalide line: %d, colonne: %d", lineNumber,col);
            }} 
{CST_FLOAT} {printf("REEL recognized : %s \n",yytext); col = col + strlen(yytext);}
{CST_CHAR}  {printf("CHAR recognized : %s \n",yytext); col = col + strlen(yytext);}
{CST_BOOL}  {printf("BOOLEAN recognized : %s \n",yytext); col = col + strlen(yytext);}

"="   		{printf("assignment recognized \n"); col = col+strlen(yytext);}
\n    		{lineNumber++; col = 1;}
. printf ("lexical error : lexical entity has not recognized %s in line %d colonne %d\n",yytext, lineNumber, col);
%%

