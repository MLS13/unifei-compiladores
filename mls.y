%{
/*
Conjunto de blibliotecas utilizadas
*/
#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
#include <string.h>
#include <cstdio>
#include <iostream>

using namespace std;

#include "mls.h"

#define YYERROR_VERBOSE /* Apresenta os erros de forma mais detalhada */

#define D_WRITE_ASPAS 99990
#define D_MOD 99991
#define D_AND 99992
#define D_OR 99993
#define D_IGUALDADE 99994
#define D_DIFERENTE 99995
#define D_MENOR 99996
#define D_MENOR_IGUAL 99997
#define D_MAIOR 99998
#define D_MAIOR_IGUAL 99999

extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;


void yyerror(const char *s);
void imprimir(No *raiz);

FILE *entrada, *saida, *tokens;

No *root;
%}

/*
Ponteiro utilizado para ordenar os tokens
*/
%union{
    No *pont;
}

/*
Lista de tokens
*/
%token <pont> PROGRAMSTART
%token <pont> PROGRAMEND
%token <pont> ABRE_PARENTESES
%token <pont> FECHA_PARENTESES
%token <pont> ABRE_CHAVES
%token <pont> FECHA_CHAVES
%token <pont> ASPAS
%token <pont> PONTOVIRGULA
%token <pont> CHARACTER
%token <pont> IDENT
%token <pont> IDENTPRINT
%token <pont> NUM
%token <pont> INT
%token <pont> FLOAT
%token <pont> WRITE
%token <pont> WRITEVAR
%token <pont> READ
%token <pont> IF
%token <pont> ELSE
%token <pont> FOR
%token <pont> WHILE

%right '='
%left  '-' '+'
%left  '*' '/'
%left  '%'

/*
Lista de tipos utlizados para regras de gramatica
*/
%type <pont> programa
%type <pont> lista_comandos
%type <pont> comando
%type <pont> c_atribuicao
%type <pont> c_caracter
%type <pont> c_declaracao_var
%type <pont> c_expressao
%type <pont> c_expressao_logica
%type <pont> c_if
%type <pont> c_and
%type <pont> c_or
%type <pont> c_igualdade
%type <pont> c_diferente
%type <pont> c_menor
%type <pont> c_menor_igual
%type <pont> c_maior
%type <pont> c_maior_igual
%type <pont> c_input
%type <pont> c_printf
%type <pont> c_printf_var
%type <pont> c_while
%type <pont> texto

%%

/*
Declaracao das regras de gramaticas do BISON
*/
programa: PROGRAMSTART lista_comandos PROGRAMEND { 
    root = $2; 
}

lista_comandos: comando PONTOVIRGULA {
    $1->proximo = 0;
    $$ = $1;
} | comando PONTOVIRGULA lista_comandos {
    $1->proximo = $3;
    $$ = $1;
} | c_if {
    $$ = $1;
} | c_if lista_comandos{
    $$ = $1;
    $1->proximo = $2;
} | c_while {
    $$ = $1;
} | c_while lista_comandos{
    $$ = $1;
    $1->proximo = $2;
}

comando: c_atribuicao 
        | c_declaracao_var 
        | c_input 
        | c_printf
        | c_printf_var

c_atribuicao: texto '=' c_expressao {
    $$ = (No*)malloc(sizeof(No));
    $$->token = '=';
    $$->esq = $1;
    $$->dir = $3;
}

c_expressao: texto //Variavel
| NUM { //Expressao para numeros positivos
    $$ = (No*)malloc(sizeof(No));
    $$->token = NUM;
    $$->valor_no = yylval.pont->valor_no;
    $$->esq = NULL;
    $$->dir = NULL;
} | c_expressao '+' c_expressao { //Expressao para soma
    $$ = (No*)malloc(sizeof(No));
    $$->token = '+';
    $$->esq = $1;
    $$->dir = $3;
} | c_expressao '-' c_expressao { //Expressao para subtracao
    $$ = (No*)malloc(sizeof(No));
    $$->token = '-';
    $$->esq = $1;
    $$->dir = $3;
} | c_expressao '*' c_expressao { //Expressao para multiplicacao
    $$ = (No*)malloc(sizeof(No));
    $$->token = '*';
    $$->esq = $1;
    $$->dir = $3;
} | c_expressao '/' c_expressao { //Expressao para divisao
    $$ = (No*)malloc(sizeof(No));
    $$->token = '/';
    $$->esq = $1;
    $$->dir = $3;
} | c_expressao '%' c_expressao { //Expressao para modulo da divisao
    $$ = (No*)malloc(sizeof(No));
    $$->token = '%';
    $$->esq = $1;
    $$->dir = $3;
} | ABRE_PARENTESES c_expressao FECHA_PARENTESES {
    $$ = (No*)malloc(sizeof(No));
    $$->token = ABRE_PARENTESES;
    $$->esq = $2;
} | ASPAS c_expressao ASPAS {
    $$ = (No*)malloc(sizeof(No));
    $$->token = ASPAS;
    $$->esq = $2;
}

c_declaracao_var: INT texto {
    $$ = (No*)malloc(sizeof(No));
    $$->token = INT;
    $$->esq = $2;
    $$->dir = NULL;
} | FLOAT texto {
    $$ = (No*)malloc(sizeof(No));
    $$->token = FLOAT;
    $$->esq = $2;
    $$->dir = NULL;
} | CHARACTER texto {
    $$ = (No*)malloc(sizeof(No));
    $$->token = CHARACTER;
    $$->esq = $2;
    $$->dir = NULL;
} 

c_input: READ ABRE_PARENTESES texto FECHA_PARENTESES{
    $$ = (No*)malloc(sizeof(No));
    $$->token = READ;
    $$->esq = $3;
    $$->dir = NULL;
}

c_printf_var: WRITEVAR ABRE_PARENTESES texto FECHA_PARENTESES {
    $$ = (No*)malloc(sizeof(No));
    $$->token = WRITE;
    $$->esq = $3;
    $$->dir = NULL;
} 

c_printf: WRITE ABRE_PARENTESES texto FECHA_PARENTESES {
    $$ = (No*)malloc(sizeof(No));
    $$->token = D_WRITE_ASPAS;
    $$->esq = $3;
    $$->dir = NULL;
}

texto: c_caracter {
    $$ = (No*)malloc(sizeof(No));
    $$ = $1;
} | c_caracter texto {
    $$ = (No*)malloc(sizeof(No));
    $$->token = IDENTPRINT;
    $$->esq = $1;
    $$->dir = $2;
}

c_caracter: IDENT {
    cout << "IDENT - COUT" << endl;
    $$ = (No*)malloc(sizeof(No));
    $$->token = IDENT;
    strcpy($$->toC, yylval.pont->toC);
    $$->esq = NULL;
    $$->dir = NULL;
    $$->proximo = NULL;
}

c_while: WHILE ABRE_PARENTESES c_expressao_logica FECHA_PARENTESES ABRE_CHAVES lista_comandos FECHA_CHAVES {
    $$ = (No*)malloc(sizeof(No));
    $$->token = WHILE;
    $$->esq = $3;
    $$->dir = $6;
}

c_if: IF ABRE_PARENTESES c_expressao_logica FECHA_PARENTESES ABRE_CHAVES lista_comandos FECHA_CHAVES {
    $$ = (No*)malloc(sizeof(No));
    $$->token = IF;
    $$->esq = $3;
    $$->dir = $6;
}

c_expressao_logica: c_and
    | c_or
    | c_igualdade
    | c_diferente
    | c_menor_igual
    | c_maior_igual
    | c_menor
    | c_maior
    | texto
| ABRE_PARENTESES c_expressao_logica ABRE_PARENTESES {
    $$ = (No*)malloc(sizeof(No));
    $$->token = ABRE_PARENTESES;
    $$->esq = $2;
}


c_and: c_expressao_logica '&' c_expressao_logica {
    $$ = (No*)malloc(sizeof(No));
    $$->token = D_AND;
    $$->esq = $1;
    $$->dir = $3;
}

c_or: c_expressao_logica '|' c_expressao_logica {
    $$ = (No*)malloc(sizeof(No));
    $$->token = D_OR;
    $$->esq = $1;
    $$->dir = $3;
}

c_igualdade: c_expressao_logica '==' c_expressao_logica {
    $$ = (No*)malloc(sizeof(No));
    $$->token = D_IGUALDADE;
    $$->esq = $1;
    $$->dir = $3;
}

c_diferente: c_expressao_logica '!=' c_expressao_logica {
    $$ = (No*)malloc(sizeof(No));
    $$->token = D_DIFERENTE;
    $$->esq = $1;
    $$->dir = $3;
}

c_menor: c_expressao_logica '<' c_expressao_logica {
    $$ = (No*)malloc(sizeof(No));
    $$->token = D_MENOR;
    $$->esq = $1;
    $$->dir = $3;
}

c_menor_igual: c_expressao_logica '<=' c_expressao_logica {
    $$ = (No*)malloc(sizeof(No));
    $$->token = D_MENOR_IGUAL;
    $$->esq = $1;
    $$->dir = $3;
}

c_maior: c_expressao_logica '>' c_expressao_logica {
    $$ = (No*)malloc(sizeof(No));
    $$->token = D_MAIOR;
    $$->esq = $1;
    $$->dir = $3;
}

c_maior_igual: c_expressao_logica '>=' c_expressao_logica {
    $$ = (No*)malloc(sizeof(No));
    $$->token = D_MAIOR_IGUAL;
    $$->esq = $1;
    $$->dir = $3;
}

/*texto //Variavel
| NUM {
    $$ = (No*)malloc(sizeof(No));
    $$->token = NUM;
    $$->valor_no = yylval.pont->valor_no;
    $$->esq = NULL;
    $$->dir = NULL;
} | c_expressao_logica AND c_expressao_logica {
    $$ = (No*)malloc(sizeof(No));
    $$->token = AND;
    $$->esq = $1;
    $$->dir = $3;
} | c_expressao_logica OR c_expressao_logica { 
    $$ = (No*)malloc(sizeof(No));
    $$->token = OR;
    $$->esq = $1;
    $$->dir = $3;
} | c_expressao_logica MENOR_IGUAL c_expressao_logica { 
    $$ = (No*)malloc(sizeof(No));
    $$->token = MENOR_IGUAL;
    $$->esq = $1;
    $$->dir = $3;
} | c_expressao_logica MAIOR_IGUAL c_expressao_logica { 
    $$ = (No*)malloc(sizeof(No));
    $$->token = MAIOR_IGUAL;
    $$->esq = $1;
    $$->dir = $3;
} | c_expressao_logica MENOR c_expressao_logica { 
    $$ = (No*)malloc(sizeof(No));
    $$->token = MENOR;
    $$->esq = $1;
    $$->dir = $3;
} | c_expressao_logica MAIOR c_expressao_logica { 
    $$ = (No*)malloc(sizeof(No));
    $$->token = MAIOR;
    $$->esq = $1;
    $$->dir = $3;
} | c_expressao_logica EH_IGUAL c_expressao_logica { 
    $$ = (No*)malloc(sizeof(No));
    $$->token = EH_IGUAL;
    $$->esq = $1;
    $$->dir = $3;
} | c_expressao_logica DIFERENTE c_expressao_logica { 
    $$ = (No*)malloc(sizeof(No));
    $$->token = DIFERENTE;
    $$->esq = $1;
    $$->dir = $3;
} | ABRE_PARENTESES c_expressao_logica ABRE_PARENTESES { 
    $$ = (No*)malloc(sizeof(No));
    $$->token = ABRE_PARENTESES;
    $$->esq = $2;
}*/
 
%%

int main(int argc, char *argv[]){
    char buffer[256];
    extern FILE *yyin;
    yylval.pont = (No*)malloc(sizeof(No));

    if(argc < 2){
        printf("Numero de argumentos invalidos!\n");
        exit(1);
    }

    entrada = fopen(argv[1], "r");

    if(!entrada){
        printf("Ocorreu um erro ao tentar abrir o codigo fonte!\n");
        exit(1);
    }

    yyin = entrada;

    strcpy(buffer,argv[1]);
    strcat(buffer,".cc");

    saida = fopen(buffer, "w");

    if(!saida){
        printf("Ocorreu um erro ao gerar o arquivo de saida!\n");
        exit(1);
    }

    yyparse();

    //Escrevendo arquivo de saida
    fprintf(saida,"#include<iostream.h>\n");
    fprintf(saida,"#include<stdio.h>\n");
    fprintf(saida,"#include<math.h>\n\n");
    fprintf(saida,"using namespace std;\n\n");
    fprintf(saida,"int main(int argc, char *argv[]){\n");
    imprimir(root);
    fprintf(saida,"}");
    fclose(entrada);
    fclose(saida);    
}

void yyerror(const char *s) {
    printf("%s\n", s);
}

void imprimir(No *root){
    printf("TO IMPRIMINDO");
    printf("TOKEN %d \n", root->token);
    cout << "Root " << root << endl;
    cout << "Token " << IDENT << endl;
    cout << "Token " << WRITE << endl;
    cout << "Token " << IDENTPRINT << endl;
    cout << "ToC " << root->toC << endl;
    cout << "Esq " << root->esq << endl;
    cout << "Dir " << root->dir << endl;
    
    if(root != NULL){
        switch(root->token){
            //Funcao print
            case WRITE:
                fprintf(saida, "cout << ");
                imprimir(root->esq);
                fprintf(saida, " << endl; \n");
                break;
            case D_WRITE_ASPAS:
                fprintf(saida, "cout << '");
                imprimir(root->esq);
                fprintf(saida, "' << endl; \n");
                break;
            case IDENT:
                cout << "IDENT" << endl;
                printf("%s", root->toC);
                fprintf(saida, "%s", root->toC);
                break;
            case NUM:
                cout << "VALOR NO " << root->valor_no << endl; 
                fprintf(saida, "%g", root->valor_no);
                break;
            case IDENTPRINT:
                imprimir(root->esq);
                fprintf(saida, " ");
                imprimir(root->dir);
                break;

            //Declaracao de variaveis
            case INT:
                fprintf(saida, "int ");
                imprimir(root->esq);
                fprintf(saida, ";\n");
                break;
            case FLOAT:
                fprintf(saida, "float ");
                imprimir(root->esq);
                fprintf(saida, ";\n");
                break;
            case CHARACTER:
                fprintf(saida, "char ");
                imprimir(root->esq);
                fprintf(saida, ";\n");
                break;
            
            //Leitura
            case READ:
                fprintf(saida, "cin >> "); 
                imprimir(root->esq); 
                fprintf(saida, ";\n");  
                break;

            //Atribuicao
            case '=':
                imprimir(root->esq);
                fprintf(saida, " = ");
                imprimir(root->dir);
                fprintf(saida, ";\n");
                break;

            //Operacoes matematicas
            case '+':
                imprimir(root->esq);
                fprintf(saida, " + ");
                imprimir(root->dir);
                break;
            case '-':
                imprimir(root->esq);
                fprintf(saida, " - ");
                imprimir(root->dir);
                break;
            case '*':
                imprimir(root->esq);
                fprintf(saida, " * ");
                imprimir(root->dir);
                break;
            case '/':
                imprimir(root->esq);
                fprintf(saida, " / ");
                imprimir(root->dir);
                break;
            case '%':
                imprimir(root->esq);
                fprintf(saida, " % ");
                imprimir(root->dir);
                break;
            case ABRE_PARENTESES:
                fprintf(saida, "(");
                imprimir(root->esq);
                fprintf(saida, ")");
                break;
            case ASPAS:
                fprintf(saida, "'");
                imprimir(root->esq);
                fprintf(saida, "'");
                break;
            
            //Operacoes logicas
            case D_AND:
                imprimir(root->esq);
                fprintf(saida, " && ");
                imprimir(root->dir);
                break;
            case D_OR:
                imprimir(root->esq);
                fprintf(saida, " || ");
                imprimir(root->dir);
                break;
            case D_MENOR:
                imprimir(root->esq);
                fprintf(saida, " < ");
                imprimir(root->dir);
                break;
            case D_MENOR_IGUAL:
                imprimir(root->esq);
                fprintf(saida, " <= ");
                imprimir(root->dir);
                break;
            case D_MAIOR:
                imprimir(root->esq);
                fprintf(saida, " > ");
                imprimir(root->dir);
                break;
            case D_MAIOR_IGUAL:
                imprimir(root->esq);
                fprintf(saida, " >= ");
                imprimir(root->dir);
                break;
            case D_IGUALDADE:
                imprimir(root->esq);
                fprintf(saida, " == ");
                imprimir(root->dir);
                break;
            case D_DIFERENTE:
                imprimir(root->esq);
                fprintf(saida, " != ");
                imprimir(root->dir);
                break;

            //Operador condicional - IF
            case IF:
                fprintf(saida, "if (");
                imprimir(root->esq);
                fprintf(saida, "){\n");
                imprimir(root->dir);
                fprintf(saida, "}\n");
                break;

            //Repetidor - WHILE
            case WHILE:
                fprintf(saida, "while (");
                imprimir(root->esq);
                fprintf(saida, "){\n");
                imprimir(root->dir);
                fprintf(saida, "}\n");
                break;
            
            default:
                printf("tOKEN invalido %c \n", root->token);
                fprintf(saida, "Token invalido %c \n", root->token);
        }
        if(root->proximo != NULL){
            imprimir(root->proximo);
        }
    }

}