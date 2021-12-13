#ifndef _MLS_H_
#define _MLS_H_

struct No
{
    int token; //Token gerado pelo arquivo flex
    double valor_no; //Valor correspondente ao no
    char toC[256]; //Traducao do comando em mls para C
    struct No *esq, *dir, *proximo; //Ponteiros utilizados para a analise semantica    
};

typedef struct No No;

#endif