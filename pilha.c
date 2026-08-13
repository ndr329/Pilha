#include "pilha.h"

#include <stdlib.h>

// Cria e inicializa uma pilha vazia
// Entrada: nenhuma
// Retorno: ponteiro para uma pilha vazia
// Pré-condição: nenhuma
// Pós-condição: um pilha vazia é criada
Pilha* criar_pilha_vazia(void) {
    Pilha* aux = malloc(sizeof(Pilha));

    if(aux == NULL) {
        printf("Erro na alocação de memória.\n");
        return NULL;
    }

    aux->topo = NULL;
    return aux;
}

