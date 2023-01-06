%{
    #include <stdio.h>
    extern int lineNumber, col, level;
%}
%union{
    int integer;
    char* string;
    float reel;
}
%token <string>IDF <integer>CST_INT size key_word_BOOL key_word_ASSIGNMENT CST_BOOL <reel>CST_FLOAT CST_SIGNED_FLOAT  <string>CST_CHAR key_word_CHAR key_word_INTEGER key_word_FLOAT key_word_EQUAL key_word_NOT_EQUAL
%token openSquareBracket closeSquareBracket openBracket closeBracket ADD_op MIN_op DIV_op MUL_op key_word_AND key_word_OR key_word_NOT key_word_SUPERIOR
%token key_word_LOWER key_word_SUPERIOR_OR_EQUAL key_word_LOWER_OR_EQUAL 
%token key_word_IF key_word_FOR key_word_ELSE key_word_WHILE key_word_RANGE key_word_IN colon virgule newLine key_word_TAB true_bloc  

%left ADD_op MIN_op DIV_op MUL_op key_word_ASSIGNMENT openBracket closeBracket
%start S
%%
// Section 1: Declaration
S : codeDeclaration {
        printf("Syntax correct \n");
        YYACCEPT; 
    }
;
//dont forget to make the comment functionality 
codeDeclaration : varDeclaration
    | TabDeclaration
;
varDeclaration : type IDFS
    | varDeclaration2
;
IDFS : IDF virgule IDFS
    | IDF
;
varDeclaration2 : IDF key_word_ASSIGNMENT VALUE virgule varDeclaration2
    | IDF key_word_ASSIGNMENT VALUE
;
VALUE : CST_INT
    | CST_BOOL
    | CST_FLOAT
    | CST_SIGNED_FLOAT
    | CST_CHAR
;
TabDeclaration : type TabDeclaration2 
;
TabDeclaration2 : IDF openSquareBracket size closeSquareBracket
    | IDF openSquareBracket size closeSquareBracket virgule TabDeclaration2
;
type : key_word_INTEGER
    | key_word_BOOL
    | key_word_CHAR
    | key_word_FLOAT
;
%%
//code part
main()
{
//lunch parser
yyparse();
}
yywrap ()
{return 1;}
int yyerror ( char*  msg )  
 {
    printf ("Syntax error in line %d colonne %d \n", lineNumber,col);
  }
