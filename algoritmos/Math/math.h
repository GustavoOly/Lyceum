#ifndef MATH_H
#define MATH_H
#include <stdio.h>

static inline int soma(int a, int b) { return a + b; }
static inline int subtracao(int a, int b) { return a - b; }
static inline int multiplicacao(int a, int b) { return a * b; }
static inline int divisao(int a, int b) {
    if (a == 0) {
        printf("O dividendo não pode ser 0\n");
        return 0;
    }
    int aux = a / b;
    printf("Divisão de %d / %d: %d\n", a, b, aux);
    return 0;
}

static inline int primo(int a) {
    int raiz = 0;
    int divisores = 0;

    if (a <= 1) {
        printf("%d não é primo", a);
        return 0;
    }
    for (int i = 1; i < a; ++i) {
        int aux = i * i;
        if (aux == a) {
            printf("quadrado perfeito: %d", i);
            raiz = i;
            break;
        }
        if (aux > a) {
            raiz = i - 1;
            printf("Quadrado perfeito proximo: %d", raiz);
            break;
        }
    }

    for (int i = 1; i <= raiz; ++i) {
        if (a % i == 0) {
            divisores = divisores + 1;
            printf("\n%d é divisível por %d", a, i);
        }
    }

    if (divisores > 1) {
        printf("\n%d não é primo\nDivisores: %d", a, divisores);
    } else {
        divisores = 2;
        printf("\n%d é primo, divisores: %d", a, divisores);
    }

    return 0;
}

#endif