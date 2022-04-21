%{
#include "lista.h"
#include "pila.h"
#include "y.tab.h"

FILE *yyin;

tList symbolTable;
tStack stackDataTypeDecVar;
tStack invertStackDataType;
tStack stackVar;

extern int yylex();
extern void yyerror();
extern char* yytext;
extern int yylineno;

%}

%union{
    char* strVal;
}

%token DIM_T
%token WHILE_T
%token IN_T
%token ENDWHILE_T
%token DO_T
%token IF_T
%token ELSE_T
%token ENDIF_T
%token INT_T         
%token REAL_T       
%token STRING_T      
%token GET_T        
%token DISPLAY_T    
%token AS_T       
%token CORCHETE_A 
%token CORCHETE_C   
%token COMA_T      
%token DOT_COM_T 
%token PARENT_A    
%token PARENT_C     
%token OP_MEN      
%token OP_MAY       
%token OP_MEN_IGU  
%token OP_MAY_IGU 
%token OP_NOT       
%token OP_AND      
%token OP_OR    
%token OP_COMP    
%token <strVal>CONST_INT
%token <strVal>CONST_REAL
%token <strVal>VARIABLE    
%token <strVal>CONST_STRING 
%left  OP_REST_T OP_SUM_T
%right OP_MULT_T OP_DIV_T
%right MENOS_UNARIO
%right OP_ASIG_T   
%token .

%%

programa:   prog             {;}
        ;

prog: sentencia                 {;}
  ;

sentencia: sentencia grammar DOT_COM_T  {;}
        | grammar DOT_COM_T             {;}
        ;

grammar:   dec_var                    {;}
       |   asig                       {;}
       |   display                    {;}
       |   get                        {;}
       |   if                         {;}
       |   while                      {;}
       |   lista                       {;}
       ;

asig:   VARIABLE OP_ASIG_T expr             {;}
    |   VARIABLE OP_ASIG_T CONST_STRING_R     {;}
    ;

CONST_STRING_R: CONST_STRING {
	    insertString(&symbolTable, $1);
	};

NUMERO: CONST_INT{
        insertNumber(&symbolTable,$1);
      };    
      | CONST_REAL {
        insertNumber(&symbolTable,$1);
      }

lista : expr_list 							        {;}
      | lista COMA_T expr_list  				{;}
	    ;

expr_list: CONST_INT      {;}
        |  CONST_REAL     {;}
        |  CONST_STRING   {;}
        |  VARIABLE       {;}

expr: expr OP_SUM_T termino         {;}
	| expr OP_REST_T termino        {;} 
	| termino                       {;}
    ;

termino: termino OP_MULT_T factor   {;}
	   | termino OP_DIV_T factor    {;}
     | '-' termino %prec MENOS_UNARIO
	   | factor                     {;}
       ;

                    
factor: PARENT_A expr PARENT_C    {;}
      | NUMERO                    {;}
	    | VARIABLE                  {;}
      ;

display: DISPLAY_T CONST_STRING_R   {;}
       | DISPLAY_T expr             {;}
       ;

get: GET_T VARIABLE {;}
   ;

while: WHILE_T  cond_completa CORCHETE_A sentencia CORCHETE_C {;}
	 ;

if: IF_T cond_completa 
    sentencia               {;}
    ENDIF_T                 {;}
    | IF_T cond_completa 
      sentencia             {;}
      ELSE_T                {;}
      sentencia             {;}
      ENDIF_T               {;}
    ;

cond_completa: PARENT_A cond_completa PARENT_C                      {;}
             | PARENT_A cond_completa OP_OR cond_completa PARENT_C {;}
             | PARENT_A cond_completa OP_AND cond_completa PARENT_C {;}
             | PARENT_A cond_completa OP_OR cond PARENT_C {;}
             | PARENT_A cond_completa OP_AND cond PARENT_C {;}
             | OP_NOT cond_completa                       {;}
             | PARENT_A cond OP_OR cond_completa PARENT_C {;}
             | PARENT_A cond OP_AND cond_completa PARENT_C {;}
             | PARENT_A cond OP_AND cond PARENT_C {;}
             | PARENT_A cond OP_OR cond PARENT_C  {;} 
             | PARENT_A cond PARENT_C {;}
             ;


cond: expr OP_COMP expr  {;}
    | expr OP_MAY_IGU expr {;}
    | expr OP_MEN_IGU expr {;}
    | expr OP_MEN expr {;}
    | expr OP_MAY expr {;}
    | expr OP_AND expr {;}
    | expr OP_OR expr {;}
    | expr OP_NOT termino {;}
    | OP_NOT VARIABLE {;}
    ;

dec_var: DIM_T OP_MEN dupla_asig OP_MAY {
                                        char dataType[100];
                                        char variable[100];
                                        while(!emptyStack(&stackDataTypeDecVar)){
                                          popStack(&stackDataTypeDecVar,dataType);
                                          pushStack(&invertStackDataType,dataType);
                                        }
                                        while(!emptyStack(&invertStackDataType) && !emptyStack(&stackVar)){
                                            popStack(&invertStackDataType,dataType);
                                            popStack(&stackVar,variable);
                                            insertVariable(&symbolTable,variable,dataType);
                                        }

};


dupla_asig:  VARIABLE COMA_T dupla_asig COMA_T tipo             {pushStack(&stackVar,$1);}
          |  VARIABLE OP_MAY AS_T OP_MEN tipo         {pushStack(&stackVar,$1);}
          ;
			 
 
tipo: 	INT_T 	    {pushStack(&stackDataTypeDecVar,"INTEGER");}
      | REAL_T      {pushStack(&stackDataTypeDecVar,"FLOAT");}	
      | STRING_T  	{pushStack(&stackDataTypeDecVar,"STRING");}
      ;

%%


int main(int argc, char* argv[])
{
    if((yyin = fopen(argv[1],"rt")) == NULL)
    {
        printf("\n No se puede abrir el archivo %s \n", argv[1]);
    }

    printf("\n Comienzo de la compilacion \n\n");

    createList(&symbolTable);
    createStack(&stackVar);
    createStack(&stackDataTypeDecVar);
    createStack(&invertStackDataType);
    yyparse();

    deleteTable(&symbolTable);
    
    printf("\n Compilacion exitosa \n");
    fclose(yyin);
    return 0;
}
