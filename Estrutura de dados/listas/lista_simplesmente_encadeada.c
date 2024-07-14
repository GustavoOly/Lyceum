/*
    Uma lista ou lista simplesmente encadeada é uma sequência de elementos
   encadeados, um após o outro.

    Operações:
    - Inserir no inicio / meio / fim;
    - Inserir ordenado;
    - Remoção no início / meio / fim;
    - Busca;
*/

// inserir elementos no incio
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *proximo;
} No;

void exibir_nos_lista(No *no) {
    while (no != NULL) {
        printf("valor: %i\n", no->valor);
        no = no->proximo;
    }
}

int main() {
    No *primeiro = (No *)malloc(sizeof(No));
    No *segundo = (No *)malloc(sizeof(No));

    primeiro->valor = 1;
    primeiro->proximo = segundo;

    segundo->valor = 2;
    segundo->proximo = NULL;

    exibir_nos_lista(primeiro);
    return 0;
}