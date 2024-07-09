#include <stdio.h>
#include <string.h>

typedef struct No {
    int Id;
    char Name[20];
    int Idade;
    struct No *prox;
} No;

void imprimirLista(No *no) {
    while (no != NULL) {
        printf("Id: %i\nName: %s\nIdade: %i\n", no->Id, no->Name, no->Idade);
        puts("------------------");
        no = no->prox;
    }
}

int main() {
    No primeiro;
    No segundo;

    primeiro.Id = 1;
    strcpy(primeiro.Name, "Oly");
    primeiro.Idade = 22;
    primeiro.prox = &segundo;

    segundo.Id = 2;
    strcpy(segundo.Name, "Alice");
    segundo.Idade = 22;
    segundo.prox = NULL;

    imprimirLista(&primeiro);

    return 0;
}