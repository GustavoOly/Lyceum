#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Ordena uma lista de inteiros usando o algoritmo Bubble Sort.
 *
 * \param list Ponteiro para a lista de inteiros.
 * \param size Tamanho da lista.
 * \return Retorna 0 após a ordenação.
 */
int bubble_sort(int *list, int size) {
    bool is_value;
    int loops = 1;
    do {
        is_value = false;
        for (int i = 0; i < size - 1; ++i) {
            if (list[i] > list[i + 1]) {
                int temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
                is_value = true;
            }
        }
        loops++;
    } while (is_value);
    puts("\nLista ordenada; ");
    printf("Repetições: %d\n", loops);
    return 0;
}

/**
 * \brief Gera uma lista de inteiros aleatórios.
 *
 * \param size Tamanho da lista.
 * \return Ponteiro para a lista gerada.
 */
int *make_list(int size) {
    int *list = (int *)malloc(size * sizeof(int));
    if (!list) {
        fprintf(stderr, "Erro ao alocar memória\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < size; ++i) {
        list[i] = rand() % 100;
    }
    return list;
}

/**
 * \brief Exibe os elementos de uma lista de inteiros.
 *
 * \param list Ponteiro para a lista de inteiros.
 * \param size Tamanho da lista.
 */
void show_list(int *list, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", list[i]);
    }
    puts("");
}

/**
 * \brief Função principal que executa a geração, ordenação e busca em uma lista
 * de inteiros.
 *
 * \return Retorna 0 após a execução.
 */
int main() {
    int size = 80;
    int search_number = 21;
    int *list = make_list(size);
    puts("Lista desordenada:");
    show_list(list, size);
    bubble_sort(list, size);
    show_list(list, size);
    free(list);
    return 0;
}
