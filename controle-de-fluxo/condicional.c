#include <stdio.h>

int num = 5;
int num2 = 5;

int main(int argc, char const *argv[]) {

    // desvio de condicional simples
    if (num == num2) {
        printf("Olá\n");
    }

    // desvio de condicional composto
    if (num == num2) {
        printf("Opção 1\n");
    } else {
        printf("nenhuma das opções\n");
    }

    // tomada de decisão sequencial simples
    if (num != num2) {
        printf("é diferente\n");
    }
    if (num == num2) {
        printf("é igual\n");
    }

    // tomada de decisão sequencial composta
    if (num != num2) {
        printf("são diferente\n");
    } else {
        printf("são iguais\n");
    }
    if (num == num2) {
        printf("são iguais\n");
    } else {
        printf("são diferentes\n");
    }

    // Tomada de decisão encadeada
    if (num != num2) {
        printf("diferente\n");
    } else if (num == num2) {
        printf("são iguais\n");
    } else {
        printf("nenhuma das opções\n");
    }

    // tomada de decisão por seleção
    switch (num) {
    case 1:
        printf("caso 1\n");
        break;
    case 5:
        printf("caso 5\n");
        break;
    default:
        printf("nenhuma das alternativas\n");
    }

    return 0;
}