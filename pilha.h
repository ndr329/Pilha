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

#endif /* pilha_h */