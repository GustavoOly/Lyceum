#include <stdio.h>

int pegar_numeros() {
    int num;
    puts("Digite o 1° numero: ");
    scanf("%i", &num);
    return num;
}

int verificar_primo(int num) {
    int i;
    if (num <= 1) {
        printf("%d não é primo\n", num);
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("%d não é primo\n", num);
            return 0;
        }
    }
    printf("%d é primo\n", num);
    return 0;
}

int main() {
    int num = pegar_numeros();
    verificar_primo(num);
    return 0;
}