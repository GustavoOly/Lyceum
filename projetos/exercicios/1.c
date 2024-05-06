#include <stdio.h>

int numeros();
int operação();

int num1,num2,num3, resultado;

int main(){
	operação(numeros());
	return 0;
}

int numeros(){
	puts("digite 3 numeros: ");
	scanf("%i %i %i", &num1, &num2, &num3);
	printf("%i %i %i\n",num1, num2, num3);
}

int operação(){
	resultado = (num1 * num2 * num3) / 100;
	printf("resultado: %i\n",resultado);
}
