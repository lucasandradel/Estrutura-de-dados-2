#ifndef __LISTA_ENC_H__
#define __LISTA_ENC_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Constante para definicao da capacidade da lista
#define N 10000

struct est_no{
    int valor;
    struct est_no *prox;

};
typedef struct est_no tipo_no;

//prototipos
//prototipos
tipo_no *aloca_no();
void insereInicio(tipo_no ** );
void InsereFim(tipo_no**);
void InserePos (tipo_no**, int);
void imprimeLista(tipo_no*);


#endif