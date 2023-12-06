#include <stdio.h>

void torreHanoi (int n, char origem, char destino, char auxiliar);

int main() {
  int n;
  printf("Digite o número de discos: ");
  scanf("%d", &n);

  torreHanoi(n, 'A', 'B', 'C');

  return 0;
}

void torreHanoi(int n, char origem, char destino, char auxiliar) {
  if (n == 1) {
    printf("Mova o disco 1 da haste %c para a haste %c\n", origem, destino);

    return;
  }

  torreHanoi(n - 1, origem, auxiliar, destino);

  printf("Mova o disco %d da haste %c para a haste %c\n", n, origem, destino);

  torreHanoi(n - 1, auxiliar, destino, origem);
}