%{
    #include <stdio.h>
    extern int lineNumber, col, level;
%}

%token IDF CST_INT key_word_BOOL key_word_ASSIGNMENT CST_BOOL CST_FLOAT CST_CHAR key_word_CHAR key_word_INTEGER key_word_FLOAT key_word_EQUAL key_word_NOT_EQUAL
%token openSquareBracket closeSquareBracket openBracket closeBracket ADD_op key_word_space MIN_op DIV_op MUL_op key_word_AND key_word_OR key_word_NOT key_word_SUPERIOR
key_word_LOWER key_word_SUPERIOR_OR_EQUAL key_word_LOWER_OR_EQUAL 
%token key_word_IF key_word_FOR key_word_ELSE key_word_WHILE key_word_RANGE key_word_IN colon virgule newLine true_bloc 

%start S
%%
S : CODE {
    printf("EXIT WITH 0");
    YYACCEPT; 
};
CODE : CST_BOOL;
%%
main()
{
yyparse();
}
yywrap ()
{}
int yyerror ( char*  msg )  
 {
    printf ("Syntax error in line %d a colonne %d \n", lineNumber,col);
  }
