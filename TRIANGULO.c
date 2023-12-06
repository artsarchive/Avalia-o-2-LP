#include <stdio.h>
/* 12 Escreva um programa que leia da entrada padrão o tamanho dos catetos de um triângulo retângulo e imprima: 
  ➢ O tamanho do quadrado da hipotenusa; (O arquivo de cabeçalho math.h inclui a função sqrt() que retorna a raiz quadrada do parâmetro de entrada.) 
  ➢ O valor do perímetro do triângulo; 
  ➢ O valor da área do referido triângulo; */

int main(void) {
  float cateto1, cateto2, hipotenusa, perimetro, area;
  
  printf("Informe o valor dos catetos (x x): ");
  scanf("%f %f", &cateto1, &cateto2);

  hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
  perimetro = cateto1 + cateto2 + hipotenusa;
  area = (cateto1 * cateto2) / 2;

  printf("Cateto 1: %.2f\n", cateto1);
  printf("Cateto 2: %.2f\n", cateto2);
  printf("Hipotenusa: %.2f\n", hipotenusa);
  printf("Perímetro: %.2f\n", perimetro);
  printf("Área: %.2f\n", area);
  
  return 0;
}