/*
lista linear é um estrutura de dados que armazena elementos em uma sequência
linear cada elemento tem um predecessor e um sucessor (exeto o primeiro e o
ultimo elemento).

Vantagens: Todos os nós criados estarão em posições contiguas, facilitando o
acesso.

Desvantagens: não é possível desalocar um nó na lista sem comprometer a
sequencialidade dos outros nós.

As listas podem ser chamados de deque, pilha e fila, dependendo da forma que as
operações de inserção e remoção serão utilizados.
*/

#include <stdio.h>
#include <stdlib.h>

int busca(int number, int *lista, int tamanhoLista);

int main() {
    int search = 5;
    int lista[] = {1, 4, 6, 7, 9, 12, 15, 22, 90};
    int tamanhoLista = sizeof(lista) / sizeof(lista[0]);
    for (int i = 0; i < tamanhoLista; i++) {
        printf("%i\n", lista[i]);
    }
    busca(search, lista, tamanhoLista);
    return 0;
}

int busca(int number, int *lista, int tamanhoLista) {

    for (int i = 0; i < tamanhoLista; i++) {
        if (lista[i] == number) {
            printf("O numero %i encontrado na posição %i\n", number, i);
            return i;
        }
    }
    puts("Numero não encontrado na lista");
    return -1;
}