#include <stdbool.h>
#include <stdio.h>

int somar(int num1, int num2) { return num1 + num2; }

int subtrair(int num1, int num2) { return num1 - num2; }

int multiplicar(int num1, int num2) { return num1 * num2; }

float dividir(float num1, float num2) { return num1 / num2; }

int main() {
    int num1, num2, escolha, continuar;

    do {
        printf("Digite um numero: ");
        scanf("%i", &num1);
        printf("Digite mais um numero: ");
        scanf("%i", &num2);

        printf("Agora escolha uma operação\n");
        printf("1 - Somar\n");
        printf("2-  subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");

        scanf("%i", &escolha);

        switch (escolha) {
        case 1:
            printf("A soma é: %d\n", somar(num1, num2));
            break;
        case 2:
            printf("A subtração é: %d\n", subtrair(num1, num2));
            break;
        case 3:
            printf("A multiplicação é: %d\n", multiplicar(num1, num2));
            break;
        case 4:
            printf("A divisão é: %.2f\n", dividir(num1, num2));
            break;
        default:
            printf("escolha uma opção valida");
        }
        printf("Deseja fazer outra operação? 1 - sim 0 - não\n");
        scanf("%i", &continuar);
    } while (continuar != 0);
    return 0;
}