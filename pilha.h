#ifndef pilha_h
#define pilha_h

#include <stdio.h>

typedef int TipoItem;   // define o tipo de dados do elemento da pilha

// Estrutura para lista encadeada
struct no {
    TipoItem info;
    struct no* prox;
} No;

// Estrutura da pilha
typedef struct {
    No* topo;
} Pilha;

// Cria e inicializa uma pilha vazia
// Entrada: nenhuma
// Retorno: ponteiro para uma pilha vazia
// Pré-condição: nenhuma
// Pós-condição: um pilha vazia é criada
Pilha* criar_pilha_vazia(void);



#endif /* pilha_h */