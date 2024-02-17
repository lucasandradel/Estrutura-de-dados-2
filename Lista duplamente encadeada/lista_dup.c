#include "lista_dup.h"


// Função para alocar um novo nó com um valor específico
tipo_noh_dup *aloca_no(){
    tipo_noh_dup *novo_no; // Declaração de um ponteiro para o novo nó
    novo_no = (tipo_noh_dup*) malloc (sizeof(tipo_noh_dup)); // Aloca memória para o novo nó
    if (novo_no != NULL){ // Verifica se a alocação de memória foi bem-sucedida
        novo_no->prox = NULL; // Define o próximo nó como NULL
        novo_no->ant = NULL; // Define o nó anterior como NULL
        novo_no->valor = rand (); // Define o valor do nó como o valor fornecido
        return novo_no; // Retorna o ponteiro para o novo nó alocado
    } else {
        // Retorna NULL em caso de falha na alocação de memória
        return NULL;
    }
}

void insereInicioListDup(tipo_noh_dup** list){
    tipo_noh_dup *novo_no; //declaração de um ponteiro pars o novo_no
    novo_no = aloca_no(); // Aloca memória para o novo nó e inicializa com o valor fornecido
    if (novo_no != NULL){// Verifica se a alocação de memória foi bem-sucedida
        novo_no-> prox =(*list);// Define o próximo nó como o nó que atualmente é o primeiro da lista
        if((*list) != NULL){// Verifica se a lista não está vazia
            (*list)->ant= novo_no;// Define o nó anterior ao primeiro nó como o novo nó
        }
        (*list) = novo_no;// Atualiza o ponteiro para o primeiro nó da lista
    }else{
        printf("ERRO na alocação");
    }
}

// Função para inserir um novo nó em uma posição específica da lista duplamente encadeada
void insereFimListDup(tipo_noh_dup **lista){
    tipo_noh_dup *novo_no, *aux; // Declaração de ponteiros para o novo nó e um nó auxiliar
    novo_no = aloca_no(); // Aloca memória para o novo nó e inicializa com o valor fornecido
    if (novo_no != NULL){ // Verifica se a alocação de memória foi bem-sucedida
        aux = (*lista); // Inicializa o nó auxiliar com o primeiro nó da lista
        if (aux == NULL){ // Verifica se a lista está vazia
            (*lista) = novo_no; // Se a lista estiver vazia, o novo nó se torna o primeiro nó da lista
        } else {
            while (aux->prox != NULL){ // Percorre a lista até encontrar o último nó
                aux = aux->prox;
            }
            aux->prox = novo_no; // Define o próximo nó do último nó como o novo nó
            novo_no->ant = aux; // Define o nó anterior ao novo nó como o último nó
        }
    } else {
        printf("Erro na alocação de memória.\n"); // Imprime uma mensagem de erro se a alocação de memória falhou
    }
}

// Função para inserir um novo nó em uma posição específica da lista duplamente encadeada
void inserePosListDup(tipo_noh_dup **lista, int pos){
    tipo_noh_dup *novo_no, *aux; // Declaração de ponteiros para o novo nó e um nó auxiliar
    int contador = 0; // Inicializa um contador para acompanhar a posição atual

    novo_no = aloca_no(); // Aloca memória para o novo nó e inicializa com o valor fornecido
    if (novo_no != NULL){ // Verifica se a alocação de memória foi bem-sucedida
        aux = (*lista); // Inicializa o nó auxiliar com o primeiro nó da lista
        
        while (aux != NULL && contador <= pos){ // Percorre a lista até encontrar a posição desejada ou o fim da lista
            aux = aux-> prox;
            contador++;
        }
        if (aux = NULL){ // Verifica se a posição é válida
            novo_no->prox = aux; // Define o próximo nó do novo nó como o nó atual da posição
            novo_no->ant = aux->ant; // Define o nó anterior do novo nó como o nó anterior do nó atual da posição
            if (aux->ant != NULL){ // Verifica se o nó atual não é o primeiro nó da lista
                aux->ant->prox = novo_no; // Define o próximo nó do nó anterior como o novo nó
            }
            aux->ant = novo_no; // Define o nó anterior do nó atual como o novo nó
            if (contador == 0){ // Verifica se a posição é a primeira da lista
                (*lista) = novo_no; // Se for, o novo nó se torna o primeiro nó da lista
            }
        } else {
            printf("Posição inválida.\n"); // Imprime uma mensagem de erro se a posição for inválida
        }
    } else {
        printf("Erro na alocação de memória.\n"); // Imprime uma mensagem de erro se a alocação de memória falhou
    }
}

void imprimeListDup(tipo_noh_dup *list){
    tipo_noh_dup *aux = list;
    while (aux != NULL)
    {
        printf("%d ", aux -> valor);
        aux = aux -> prox;
    }
    printf("\n\n");
    
}
