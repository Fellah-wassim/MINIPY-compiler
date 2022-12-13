%{
    #include <stdio.h>
    int lineNumber = 1, col = 1, level = 0;
    int yylex();
%}

%token IDF CST_INT key_word_BOOL key_word_ASSIGNMENT CST_BOOL CST_FLOAT CST_CHAR key_word_CHAR key_word_INT key_word_FLOAT
%token openSquareBracket closeSquareBracket openBracket closeBracket ADD_op MIN_op DIV_op MUL_op key_word_AND key_word_OR key_word_NOT key_word_SUPERIOR
key_word_LOWER key_word_SUPERIOR_OR_EQUAL key_word_LOWER_OR_EQUAL 
%token key_word_IF key_word_FOR key_word_ELSE key_word_WHILE key_word_RANGE key_word_IN colon virgule newLine true_bloc 

%start S
%%
S : CODE {
    printf("EXIT WITH 0");
    YYACCEPT; 
};
CODE : PDEC CODE | PINST CODE ;
PDEC  : DECLARATION_VAR | DECLARATION_TABLE;
DECLARATION_VAR : TYPE  LISTE_IDF | IDF key_word_ASSIGNMENT CST;
DECLARATION_TABLE : TYPE IDF openSquareBracket CST_INT closeSquareBracket  ;
TYPE : key_word_INT | key_word_BOOL | key_word_CHAR | key_word_FLOAT;
CST : CST_INT | CST_REEL | CST_BOOL | CST_CHAR;
PINST : INST_AFF newLine | IFCOND ;
LISTE_IDF : IDF virgule LISTE_IDF | IDF;
INST_AFF : IDF key_word_ASSIGNMENT EXPRESSION | IDF openSquareBracket CST closeSquareBracket key_word_ASSIGNMENT EXPRESSION ;
EXPRESSION : IDF
| CST
| IDF arethmetic_op EXPRESSION
| CST arethmetic_op EXPRESSION
| openBracket EXPRESSION closeBracket 
| EXPRESSION comparition_op EXPRESSION;
comparition_op: key_word_SUPERIOR | key_word_LOWER | key_word_SUPERIOR_OR_EQUAL | key_word_LOWER_OR_EQUAL;
arethmetic_op : MIN_op | ADD_op | DIV_op | MUL_op;
CONDITION : OPLOG1  EXPRESSION comparition_op  EXPRESSION OPLOG | CST_BOOL ;					 
OPLOG: logic_op CONDITION |;
logic_op: key_word_OR | key_word_AND | key_word_NOT;
OPLOG1: logic_op;
IFCOND: key_word_IF openBracket CONDITION closeBracket colon newLine true_bloc PINST BLOCKS;
BLOCKS : true_bloc PINST BLOCKS | CODE;
%%
void main () {
   yyparse();
}
void yywrap () {

}
void yyerrok (char* message) {
    printf("Syntaxic Error at line %d  \n ",lineNumber);
}
