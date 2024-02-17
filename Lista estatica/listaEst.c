#include "listaEst.h"

/**
 * @brief Funcao que insere no inicio da lista.
 * 
 * @param tipo_lista *lista - Estrutura da lista
 * @param int valor - valor a ser inserido na lista
 * 
 * @return int - verdadeiro se insercao com sucesso, falso caso contrário
 */
void insere_inicio_lista(tipo_lista *lst, int valor) {
    
    int pos;
    if (lst->contador < N) {
        pos = lst->contador;
        while (pos > 0) {
            lst->lista[pos] = lst->lista[pos-1];
            pos--;
        }
        lst->lista[0] = valor;
        lst->contador++;
    } else {
        printf("A lista estah cheia!\n");
    }
    
    //return insere_pos_lista(lst, valor, 0);
}

/**
 * @brief FUncao que insere o novo valor no fim da lista.
 * 
 * @param tipo_lista *lst - Estrutura da Lista 
 * @param int valor - Valor a ser inserido
 * @return int - verdadeiro se insercao com sucesso, falso caso contrario
 */
void insere_fim_lista(tipo_lista *lst, int valor) {
    /*if (lst->contador < N) {
        lst->lista[lst->contador++] = valor;
        return 1;
    }
    return 0;*/
    insere_pos_lista(lst, valor, lst->contador);
}

/**
 * @brief Funcao que insere em posicao especifica da lista.
 * 
 * @param tipo_lista *lst - Estrutura da lista 
 * @param int valor - valor a ser inserido
 * @param int pos - posicao onde o valor sera inserido
 * @return int - retorna verdadeiro se sucesso, ou falso caso contário
 */
void insere_pos_lista(tipo_lista *lst, int valor, int pos) {
    int i;
    if (lst->contador < N) {
        i = lst->contador;
        while (i > pos) {
            lst->lista[i] = lst->lista[i-1];
            i--;
        }
        lst->lista[pos] = valor;
        lst->contador++;
    } else {
        printf("[ERRO] A lista estah cheia!\n");
    }
}

/**
 * @brief Procedimento que imprime a lista.
 * 
 * @param tipo_lista lst - Estrutura da lista.
 */
void imprime_lista(tipo_lista lst) {
    int i;
    printf("Quantidade de elementos da lista = %d\n", lst.contador);
    printf("Lista: [ ");
    for (i=0; i<lst.contador; i++)
        printf("%d ", lst.lista[i]);
    printf("]\n");
}