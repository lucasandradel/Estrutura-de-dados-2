
#include <stdio.h>
#include <stdlib.h>
#include "lista_dup.h"
#include <time.h>


//Prototipagame 
int GeraPosAleatoria(tipo_noh_dup*, int);

//implementacao

int GeraPosAleatoria(tipo_noh_dup *lst, int qtd){
    int posicao;
    posicao = rand();

    while (posicao >= 10000){
        posicao = rand ();    
    }

    return posicao;
}

int main(int argc, char *argv[]) {

    //variaveis
    int i;
    int contador = 0;
    tipo_noh_dup * minha_lista = NULL;
    clock_t tempo;

    srand(time(NULL));

    //------Inserir 3.343 Valores no Inicio ------//
    //for para pegar numeros aleatorios e ir inserindo no inicio da lista

    tempo = clock();
    for ( i = 0; i < 3334; i++){
        insereInicioListDup(&minha_lista);
        contador ++;
        //printf("O contador agora eh %d\n",contador);
    }
    tempo = clock() -  tempo;
    printf(" %d valores foram inseridos no inicio\n", i);


    //------Inserir 3.333 Valores no fim ------//
    //for para pegar numeros aleatorios e ir inserindo no inicio da lista

    for ( i = 0; i < 3333; i++){
        insereFimListDup(&minha_lista);
        contador ++;
        //printf("O contador agora eh %d\n",contador);
    }
    tempo = clock() -  tempo;
    printf(" %d valores foram inseridos no fim \n", i);



    //------Inserir 3.333 Valores na posicao  ------//
    //for para pegar numeros aleatorios e ir inserindo no inicio da lista

    for ( i = 0; i < 3333; i++){
        inserePosListDup(&minha_lista, GeraPosAleatoria(minha_lista, contador));
        //printf("O contador agora eh %d\n",contador);
    }
    tempo = clock() -  tempo;
    printf(" %d valores foram inseridos na posicao\n", i);
    
    
    
    //imprimi qtd de valores e tempo de duração da inserção
    printf("A lista tem %d valores e seu processamento durou %lf milisegundos!\n\n", contador, (((double)tempo)/(CLOCKS_PER_SEC/1000)));

    


    return EXIT_SUCCESS;
}
