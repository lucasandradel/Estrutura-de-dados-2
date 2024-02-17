
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


//Prototipacao
int GeraPosAleatoria(tipo_no*, int);

//implementacao

int GeraPosAleatoria(tipo_no *lst, int qtd){
    int posicao;
    posicao = rand();

    while (posicao >= qtd){
        posicao = rand ();    
    }

    return posicao;
}

int main(int argc, char *argv[]) {

    //variaveis
    int i;
    int contador = 0;
    tipo_no *minha_lista =  NULL;
    clock_t tempo;

    srand(time(NULL));

    //------Inserir 3.343 Valores no Iniclio ------//
    //for para pegar numeros aleatorios e ir inserindo no inicio da lista

    tempo = clock();
    for ( i = 0; i < 3334; i++){
        insereInicio(&minha_lista);
        contador++;
        //printf("O contador agora eh %d\n", contador);
    }
    tempo = clock() -  tempo;
    printf("%d valores foram inseridos no inicio\n", i);


    //------Inserir 3.333 Valores no fim ------//
    //for para pegar numeros aleatorios e ir inserindo no inicio da lista
    
    for ( i = 0; i < 3333; i++){
        InsereFim(&minha_lista);
        contador++;
        //printf("O contador agora eh %d\n", contador);
    }
    tempo = clock() -  tempo;
    printf("%d valores foram inseridos no fim\n", i);
    

    //------Inserir 3.333 Valores na Posição ------//
    //for para pegar numeros aleatorios e ir inserindo no inicio da lista

    for ( i = 0; i < 3333; i++){
        InserePos(&minha_lista, GeraPosAleatoria(minha_lista, contador));
        contador++;
        //printf("O contador agora eh %d\n", contador);
    }
    tempo = clock() -  tempo;
    printf("%d valores foram inseridos na posição\n", i);
    
    
    
    //imprimi qtd de valores e tempo de duração da inserção
    printf("A lista tem %d valores e seu processamento durou %lf milisegundos!\n\n", contador, (((double)tempo)/(CLOCKS_PER_SEC/1000)));

    //imprimeLista(minha_lista);


    return EXIT_SUCCESS;
}
