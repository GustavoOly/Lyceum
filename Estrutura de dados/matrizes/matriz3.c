#include <stdio.h>

int main(){
	int matriz[2][2][2];

	int tamanho = sizeof(matriz) / sizeof(matriz[0]);
	int count = 1;

	for(int i = 0; i < tamanho; i++){
		for (int j = 0; j < tamanho; ++j){
			for (int k = 0; k < tamanho; ++k){
				matriz[i][j][k] = count++;
				printf("%d ", matriz[i][j][k]);
			}
			puts("");
		}
	}

	return 0;
}