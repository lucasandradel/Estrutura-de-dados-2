/***
 * UFMT - Universidade Federal de Mato Grosso
 * Campus Universitario do Araguaia
 * Bacharelado em Ciencia da Computacao
 * 
 * Disciplina de ED I
 * Prof. Ivairton
 * 
 * Implementacao da estrutura de LISTA (modular)
 * Arquivo de cabeçalho LISTA.H
 */

#ifndef __LISTA_H__
#define __LISTA_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Constante para definicao da capacidade da lista
#define N 10000

//Definicao do tipo da estrutura
struct est_lista {
    int lista[N];
    int contador;
};
typedef struct est_lista tipo_lista;

//Definicao dos prototipos
void insere_inicio_lista(tipo_lista*, int);
void insere_fim_lista(tipo_lista*, int);
void insere_pos_lista(tipo_lista*, int, int);
void imprime_lista(tipo_lista);

#endif //Fim __LISTA_H__