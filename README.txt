# Pilha Dinâmica

Implementação de uma estrutura de dados do tipo **Pilha Dinâmica** utilizando Linguagem C.
Utiliza uma estrutura de dados linear baseada no princípio **LIFO (Last In, First Out), no 
qual o último elemento inserido é o primeiro a ser removido.


## Estrutura da Pilha

A implementação utiliza uma lista simplesmente encadeada para armazenar os elementos.
Cada nó possui:

- `info`: elemento armazenado no nó;
- `prox`: ponteiro para o próximo nó.

A estrutura da pilha possui um ponteiro `topo`, que aponta para o primeiro nó da lista.

```c
typedef int TipoItem;

typedef struct no {
    TipoItem info;
    struct no* prox;
} No;

typedef struct {
    struct no* topo;
} Pilha;
```

---

## Funcionalidades

A implementação possui as seguites operações:

- `criar_pilha_vazia()`: cria e inicializa uma pilha vazia;
- `empilhar()`: Insere um elemento no topo da lista;
- `vazia()`: verifica se a pilha está vazia;
- `topo()`: consulta o elemento localizado no topo;
- `desempilhar()`: remove o elemento do topo;
- `liberar()`: libera a memória utilizada pela pilha.

---

## Compilação

Utilizando o GCC:

```bash
gcc *.c -o ./Pilha
```

---

## Execução

Linux/macOS:

```bash
./Pilha
```

Windows:

```cmd
Pilha.exe
```

---

## Autor

André Brandão