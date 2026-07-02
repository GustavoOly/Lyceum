#ifndef MATH_H
#define MATH_H
#include <stdio.h>
#include <string.h>

static inline int soma(int a, int b) { return a + b; }
static inline int subtracao(int a, int b) { return a - b; }
static inline int multiplicacao(int a, int b) { return a * b; }

/**
 * @brief Expõe o quociente e o resto do dividendo (a) pelo divisor (b)
 * @param a dividendo
 * @param b divisor
 */
static inline int divisao(int a, int b) {
    if (b == 0) {
        printf("O divisor não pode ser 0\n");
        return 0;
    }
    int aux = a / b;
    int res = a % b;
    printf("Divisão de %d / %d: %d com resto %d\n", a, b, aux, res);
    return 0;
}

/**
 * @brief Expõe a converção de um decimal para uma base n
 * @param a número decimal
 * @param b base: 2,3 ou 16
 */
static inline int conversaoDeBase(long a, int b) {
    switch (b) {
    case 2: {
        long temp = a;
        int size = 0;
        while (temp >= 1) {
            size++;
            temp /= 2;
        }
        int exp[size];
        memset(exp, 0, sizeof(exp));

        long aux = a;
        int i = 0;

        // divisão
        while (aux >= 1) {
            long qo = aux / b;
            int resto = aux % b;
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
        printf("%ld na base %d: ", a, b);
        for (int j = 0; j < i; ++j) {
            printf("%d", exp[j]);
        }
        break;
    }
    case 3: {
        long temp = a;
        int size = 0;
        while (temp >= 1) {
            size++;
            temp /= 3;
        }
        int exp[size];
        memset(exp, 0, sizeof(exp));

        long aux = a;
        int i = 0;

        // Divisão
        while (aux >= 1) {
            long quo = aux / b;
            int res = aux % b;
            aux = quo;
            exp[i] = res;
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
        printf("%ld na base %d: ", a, b);
        for (int j = 0; j < i; ++j) {
            printf("%d", exp[j]);
        }
        break;
    }
    case 16: {
        long temp = a;
        int size = 0;
        while (temp >= 1) {
            size++;
            temp /= 16;
        }
        int exp[size];
        memset(exp, 0, sizeof(exp));

        long aux = a;
        int i = 0;

        // Divisão
        while (aux >= 1) {
            long quo = aux / b;
            int res = aux % b;
            aux = quo;
            exp[i] = res;
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
        printf("%ld na base %d: ", a, b);
        for (int j = 0; j < i; ++j) {
            printf("%X", exp[j]);
        }
        break;
    }
    default:
        printf("Base invalida. Tente por 2, 3 ou 16");
        break;
    }
    return 0;
}

/**
 * @brief Expõe se (a) é primo ou composto
 * @param a número natural
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