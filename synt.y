%{
    #include <stdio.h>
    int line_number = 1, cool = 1, level = 0;
%}

%token IDF CST_INT key_word_BOOL key_word_ASSIGNMENT CST_BOOL CST_FLOAT CST_CHAR key_word_CHAR key_word_INTEGER key_word_FLOAT key_word_EQUAL key_word_NOT_EQUAL
%token openSquareBracket closeSquareBracket openBracket closeBracket ADD_op MIN_op DIV_op MUL_op key_word_AND key_word_OR key_word_NOT key_word_SUPERIOR
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
    printf ("Erreur Syntaxique a ligne %d a colonne %d \n", line_number,cool);
  }
