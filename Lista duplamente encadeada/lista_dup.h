#include <stdio.h>
#include <stdlib.h>

struct est_noh_dup
{
    int valor, contador;
    struct est_noh_dup *prox;
    struct est_noh_dup *ant;
};

typedef struct est_noh_dup tipo_noh_dup;


tipo_noh_dup *aloca_noh(int);
void insereInicioListDup (tipo_noh_dup**);
void insereFimListDup( tipo_noh_dup**);
void inserePosListDup(tipo_noh_dup **, int);
void imprimeListDup(tipo_noh_dup*);
