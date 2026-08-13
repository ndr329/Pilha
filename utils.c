#include "utils.h"

#include "pilha.h"


// Exibe menu do usuário
// Entrada: nenhuma
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: o menu de opções é exibido na tela
void menu(void) {
    Pilha* p = criar_pilha_vazia();

    TipoItem info;
    int op;

    do {
        printf("\nEscolha uma das opções:\n\n");
        printf("1. Inserir um elemento na pilha\n");
        printf("0. Encerrar programa\n");
        printf("\nOpção: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("\nInforme o valor do elemento: ");
                scanf("%d", &info);
                empilhar(p, info);
                break;

            case 0:
                printf("\nSaindo do programa...\n");
                break;
            
            default:
                printf("\nOpção inválida.\n");
        }
    } while(op != 0);

    liberar(p);
    
    printf("\n");
}