#include "listaEst.h"

//prototipação de funções
int geraAleatorio();
int geraPosAleatorio();

//implementação das funções
int geraAleatorio(){
    int valor = rand();
    return valor;
}

int geraPosAleatorio(){
    int valor = rand();

    while(valor > 10000){
        valor = rand();
    }

    return valor;
}

int main(){

    //variaveis
    int i;
    tipo_lista MinhaLista;
    clock_t tempo;

    srand(time(NULL));

    //-----insere 3.334 no inicio------//
    //for para pegar numeros aleatorios e ir inserindo no inicio da lista
    tempo = clock();
    for (i = 0; i < 3334; i++){
        insere_inicio_lista(&MinhaLista, geraAleatorio());
        printf("O contador agora eh %d\n", MinhaLista.contador);
    }
    tempo = clock() - tempo;
    printf("%d valores foram inseridos no inicio\n", i);


    //-----insere 3.333 no fim da lista-----//
    //for para pegar numeros aleatorios e ir inserindo no fim da lista
    for (i = 0; i < 3333; i++){
        insere_fim_lista(&MinhaLista, geraAleatorio());
        printf("O contador agora eh %d\n", MinhaLista.contador);
    }
    tempo = clock() - tempo;
    printf("%d valores foram inseridos no fim\n", i);


    //-----insere 3.333 em qualquer posição da lista-----//
    //for para pegar numeros aleatorios e ir inserindo no qualquer da lista
    for (i = 0; i < 3333; i++){
        insere_pos_lista(&MinhaLista, geraAleatorio(), geraPosAleatorio());
        printf("O contador agora eh %d\n", MinhaLista.contador);
    }
    tempo = clock() - tempo;
    printf("%d valores foram inseridos na posicao\n\n", i);


    //imprimi qtd de valores e tempo de duração da inserção
    printf("A lista tem %d valores e seu processamento durou %lf milisegundos!\n\n", MinhaLista.contador, (((double)tempo)/(CLOCKS_PER_SEC/1000)));


}