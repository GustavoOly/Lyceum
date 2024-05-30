#include <stdio.h>

// Não é o melhor algoritmo para listas ordenadas
// Melhor caso de uso: quando o elemento buscado é o primeiro
// Pior caso de uso: quando o elemento buscado é o ultimo

int busca_linar(int array[], int tamanho_array, int buscar_numero) {
    for (int i = 0; i < tamanho_array; i++) {
        printf("%i\n", array[i]);
        if (array[i] == buscar_numero) {
            printf("O numero %i existe na lista \n", array[i]);
            return i;
        }
    }
    puts("Numero não encontrado");
    return -1;
}

int main() {
    int array[10];
    int tamanho_array = 10;
    int buscar_numero;
    puts("Digite uma sequência de numeros: ");
    for (int i = 0; i < tamanho_array; i++) {
        printf("Digite o numero %i: ", i);
        scanf("%i", &array[i]);
    }
    puts("Digite o numero que deseja buscar: ");
    scanf("%i", &buscar_numero);
    busca_linar(array, tamanho_array, buscar_numero);
}