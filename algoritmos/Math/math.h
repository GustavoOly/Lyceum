#ifndef MATH_H
#define MATH_H
#include <stdio.h>
#include <string.h>

static inline int soma(int a, int b) { return a + b; }
static inline int subtracao(int a, int b) { return a - b; }
static inline int multiplicacao(int a, int b) { return a * b; }

/**
 * Expõe o quociente do dividendo (a) pelo divisor (b)
 */
static inline int divisao(int a, int b) {
    if (a == 0) {
        printf("O dividendo não pode ser 0\n");
        return 0;
    }
    int aux = a / b;
    printf("Divisão de %d / %d: %d\n", a, b, aux);
    return 0;
}

/**
 * Expõe a converção do decimal (a) para a base (b)
 */
static inline int conversaoDeBase(int a, int b) {
    switch (b) {
    case 2: {
        int temp = a;
        int size = 0;
        while (temp >= 1) {
            size++;
            temp /= 2;
        }
        int exp[size];
        memset(exp, 0, sizeof(exp));

        int aux = a;
        int i = 0;

        // divisão
        while (aux >= 1) {
            int qo = aux / b;
            int resto = aux % 2;
            aux = qo;
            exp[i] = resto;
            i++;
        }

        // inverção
        for (int j = 0; j < i / 2; j++) {
            int aux = exp[j];
            exp[j] = exp[(i - 1) - j];
            exp[(i - 1) - j] = aux;
        }

        // resultado
        printf("%d na base %d: ", a, b);
        for (int j = 0; j < i; ++j) {
            printf("%d", exp[j]);
        }
        break;
    }
    case 3: {
        int temp = a;
        int size = 0;
        while (temp >= 1) {
            size++;
            temp /= 3;
        }
        int exp[size];
        memset(exp, 0, sizeof(exp));

        int aux = a;
        int i = 0;

        // Divisão
        while (aux >= 1) {
            int quo = aux / b;
            int res = aux % b;
            aux = quo;
            exp[i] = res;
            printf("%d", exp[i]);
            i++;
        }
        puts("");

        // Inversão
        for (int j = 0; j < i / 2; ++j) {
            int aux = exp[j];
            exp[j] = exp[(i - 1) - j];
            exp[(i - 1) - j] = aux;
        }

        // resultado
        for (int j = 0; j < i; ++j) {
            printf("%d", exp[j]);
        }
        break;
    }
    default:
        printf("Base invalida. Tente por 2, 3");
        break;
    }
    return 0;
}

/**
 * Expõe se (a) é primo ou composto
 */
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