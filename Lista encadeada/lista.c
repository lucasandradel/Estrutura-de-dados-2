//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

tipo_no *aloca_no(){
    tipo_no * novo_no;
    novo_no = (tipo_no*) malloc(sizeof(tipo_no));

    novo_no->valor = rand();
    novo_no->prox = NULL;
    
    return novo_no;
}

void insereInicio(tipo_no **lista){
    //verifica se a fila esta vazia

    if ( (*lista ) == NULL){
        (*lista) = aloca_no(); // //aloca novo no

    } else {
        tipo_no *novo_no, *aux;
        novo_no = aloca_no ();
        if (novo_no != NULL){
            aux = (*lista);
            while (aux -> prox != NULL)
               aux = aux -> prox;
            aux -> prox = novo_no;
            
        }
    }
}

void InsereFim(tipo_no** list){
    tipo_no * novo_no;
    novo_no = aloca_no();
    if(novo_no!=NULL){
        novo_no->prox = (*list);
        (*list) = novo_no;
    }


}

void InserePos(tipo_no** lista, int posicao) {
    tipo_no *novo_no, *aux;
    int i;

    if (posicao < 0) {
        printf("[ERRO] Posição inválida.\n");
        return;
    }

    novo_no = aloca_no();

    if (novo_no == NULL) {
        printf("[ERRO] Falha na alocação de memória.\n");
        return;
    }

    if (posicao == 0) {
        novo_no->prox = *lista;
        *lista = novo_no;
        return;
    }

    aux = *lista;
    for (i = 0; i < posicao - 1 && aux != NULL; i++) {
        aux = aux->prox;
    }

    if (aux == NULL) {
        printf("[ERRO] Posição fora do alcance da lista.\n");
        free(novo_no);
        return;
    }

    novo_no->prox = aux->prox;
    aux->prox = novo_no;
}

void imprimeLista(tipo_no *list){
    printf("Lista:\n\tTOPO->");
    while (list!=NULL)
    {
        printf("[%d]->",list->valor);
        list = list->prox;
    }
    printf("[NULL]\n");
}