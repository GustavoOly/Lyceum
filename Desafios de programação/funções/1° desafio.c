/*
Crie uma função chamada encontrePrimo que receba um número como parâmetro,
essa função deverá imprimir um valor booleano. Se o número do parâmetro for
primo a saída deverá ser true e se não for primo imprima false.

**Entrada de dados**

let numero: number = 7;

**Saída de dados**

true
*/

#include <stdbool.h>
#include <stdio.h>

void valor_bool(bool valor) {
  if (valor == true) {
    printf("true\n");
  } else {
    printf("false\n");
  }
}

bool encontre_primo(int valor) {
  if (valor % 2 == 0) {
    return false;
  }
  return true;
}

int main() {
  valor_bool(encontre_primo(7));
  return 0;
}