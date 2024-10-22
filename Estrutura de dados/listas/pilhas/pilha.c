/*
    Sempre inserir no topo e remover do topo
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

Registro *remove_on_top(Registro *list) {
    Registro *current_top = list;
    list = list->prox;
    free(current_top);
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
         "Empilhando"
         "\n============");
    list = insert_on_top(list, 1);
    list = insert_on_top(list, 2);
    list = insert_on_top(list, 3);
    show_list(list);
    puts("============\n"
         "Desempilhando"
         "\n============");
    list = remove_on_top(list);
    show_list(list);
    return 0;
}