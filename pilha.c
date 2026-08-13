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

// Insere um novo elemento no topo
// Entrada: pilha e elemento a ser inserido
// Retorno: nenhum
// Pré-condição: pilha criada
// Pós-condição: o elemento é inserido no topo da pilha
void empilhar(Pilha* p, TipoItem info) {
    No* aux = malloc(sizeof(No));
    
    if( aux == NULL) {
        printf("Erro na alocação de memória.\n");
        return;
    }

    aux->info = info;
    aux->prox = p->topo;
    p->topo = aux;
    printf("Elemento %d inserido na pilha.\n", p->topo->info);
}

// Libera a memória ocupada pela pilha
// Entrada: pilha
// Retorno: nenhum
// Pré-condição: pilha criada
// Pós-condição: a memória alocada para a pilha é liberada
void liberar(Pilha* p) {
    No* atual = p->topo;
    No* proximo;

    while(atual != NULL) {
        proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
    free(p);
}