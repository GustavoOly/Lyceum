#include <stdio.h>

int main(){
	int matriz[3][3] = {
		{0,0,0},
		{0,0,0},
		{0,0,0},
	};
	int tamanho = sizeof(matriz) / sizeof(matriz[0]);
	int count = 1;
	for(int i = 0; i < tamanho; i++){
		printf("[ ");
		for(int j = 0; j < tamanho; ++j){
			matriz[i][j] = count++;
			printf("%d ", matriz[i][j]);
		}
		puts("]");
	}
	return 0;
}