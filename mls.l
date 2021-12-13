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

extern "C" int yylex();

#include "mls.h" //Arquivo header que contem a sctruct para auxiliar na construcao semantica do compilador
#include "mls.tab.h" // Arquivo que contem os tokens gerados pelo bison
%}

/*Lista de tokens*/
%%
"programStart"                   {return PROGRAMSTART;}
"programEnd"                     {return PROGRAMEND;}
";"                              {return PONTOVIRGULA;}
"character"                      {return CHARACTER;}
"int"                            {return INT;}
"float"                          {return FLOAT;}
"write"                          {return WRITE;}
"writevar"                       {return WRITEVAR;}
"read"                           {return READ;}
"if"                             {return IF;}
"else"                           {return ELSE;}
"for"                            {return FOR;}
"while"                          {return WHILE;}

[-+]?[0-9]+("."[0-9]*)?([eE]"-"?[0-9]*)? { yylval.pont->valor_no = atof(yytext);
                                           return NUM;
                                         }

[a-zA-Z][a-zA-z0-9]* { strncpy(yylval.pont->toC, yytext, 256);
                       return IDENT;
                     }  

"("	                             {return ABRE_PARENTESES;}                                     
")"	                             {return FECHA_PARENTESES;}                                     
"{"	                             {return ABRE_CHAVES;}                                     
"}"	                             {return FECHA_CHAVES;}                                     

"="|"+"|"-"|"*"|"/"|"%"|"<="|">="|"=="|"!="|">"|"<"|"|"|"&"          {return *yytext;}

[ \t\n]
.      { return *yytext; }

%% 
int yywrap(void){
  return 1; 
} 