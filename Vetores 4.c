#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int numElementos = atoi(argv[1]);

  printf("Número de elementos %d\n", numElementos);
  
  int myvector[numElementos];
  int soma = 0;

  for (int i = 0; i < numElementos; i++) {
    myvector[i] = i;
    printf("%d \n", myvector[i]);
    soma += myvector[i];
  }

  printf("Soma: %d \n", soma);
  
  return 0;
}