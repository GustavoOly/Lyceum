/*
        Inserção sempre no final e a remoção sempre no inicio.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Registro {
    int chave;
    struct Registro *prox;
} Registro;

Registro *insert_on_top(Registro *list, int chave) {
    Registro *new_node = (Registro *)malloc(sizeof(Registro));
    new_node->chave = chave;
    new_node->prox = list;
    return new_node;
};

Registro *remove_at_start(Registro *list) {
    Registro *current = list;
    Registro *prev = NULL;
    while (current->prox != NULL) {
        prev = current;
        current = current->prox;
    }
    free(current);
    if (prev != NULL) {
        prev->prox = NULL;
    }
    return list;
}

void show_list(Registro *list) {
    Registro *current = list;
    while (current != NULL) {
        printf("chave: %d\n", current->chave);
        current = current->prox;
    }
}

int main() {
    Registro *list = NULL;
    puts("============\n"
         "Enfilerando"
         "\n============");
    list = insert_on_top(list, 1);
    list = insert_on_top(list, 2);
    list = insert_on_top(list, 3);
    show_list(list);
    puts("============\n"
         "Desenfilerando"
         "\n============");
    list = remove_at_start(list);
    show_list(list);
    return 0;
}