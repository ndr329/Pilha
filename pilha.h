#ifndef pilha_h
#define pilha_h

#include <stdio.h>

typedef int TipoItem;   // define o tipo de dados do elemento da pilha

// Estrutura para lista encadeada
typedef struct no {
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

// Insere um novo elemento no topo
// Entrada: pilha e elemento a ser inserido
// Retorno: nenhum
// Pré-condição: pilha criada
// Pós-condição: o elemento é inserido no topo da pilha
void empilhar(Pilha* p, TipoItem info);

// Libera a memória ocupada pela pilha
// Entrada: pilha
// Retorno: nenhum
// Pré-condição: pilha criada
// Pós-condição: a memória alocada para a pilha é liberada
void liberar(Pilha* p);

// Verifica se a pilha está vazia
// Entrada: pilha
// Retorno: 1 se a pilha estiver vazia ou 0 caso contrário
// Pré-condição: pilha criada
// Pós-condição: nenhuma
int vazia(Pilha* p);

// Lê o topo da pilha sem desempilhar
// Entrada: pilha
// Retorno: elemento localizado no topo da pilha
// Pré-condição: pilha criada
// Pós-condição: a pilha permanece inalterada
TipoItem* topo(Pilha* p);

// Remove o elemento que está no topo
// Entrada: pilha
// Retorno: elemento removido
// Pré-condição: pilha criada
// Pós-condição: o elemento do topo é removido
TipoItem* desempilhar(Pilha* p);

#endif /* pilha_h */