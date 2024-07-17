/*
        Inserção sempre no final e a remoção sempre no inicio.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No {
    int id;
    char Nome[20];
    struct No *proximo;
} No;

void remover_primeiro_no(No **primeiro) {
    No *atual = *primeiro;
    if (atual == NULL) {
        return;
    } else {
        *primeiro = atual->proximo;
    }
    free(atual);
}

void exibir_nos(No *no) {
    while (no != NULL) {
        printf("id: %i\nNome: %s\n", no->id, no->Nome);
        puts("------------------");
        no = no->proximo;
    }
}

int main() {
    No *primeiro = (No *)malloc(sizeof(No));
    No *segundo = (No *)malloc(sizeof(No));
    primeiro->id = 1;
    strcpy(primeiro->Nome, "Oly");
    primeiro->proximo = segundo;

    segundo->id = 2;
    strcpy(segundo->Nome, "Alice");
    segundo->proximo = NULL;

    puts("Empilhando os Nós na lista:");
    puts("------------------");
    exibir_nos(primeiro);

    puts("Removendo o primeiro Nó da lista:");
    puts("------------------");

    remover_primeiro_no(&primeiro);

    exibir_nos(primeiro);
    return 0;
}