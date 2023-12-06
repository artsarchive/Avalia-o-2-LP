#include <stdio.h>
#include <math.h>

/*9 Escreva um programa que: 
  ➢ Declare três variáveis de tipo float, vamos chamar de x, y e z mas você pode escolher outro identificador se achar mais apropriado; 
  ➢ Peça ao usuário para digitar dois números de ponto flutuante, obtenha-os da entrada padrão, usando scanf, e atribua os valores digitados às variáveis x e y respectivamente; 
  ➢ Considerando que x e y são coordenadas num plano cartesiano, identifique em que lado da curva se encontra (esquerda, direita ou na curva). Imprima o resultado na tela;  
  ➢ Atribua à variável z o valor da distância euclidiana do ponto (x, y) ao centro de coordenadas;(distância euclidiana se calcula como , pode utilizar a função sqrt() fornecida no arquivo de cabeçalho math.h)  
  ➢ Atribua à variável z o produto entre as variáveis x e y, imprima o resultado na tela em notação científica;  */

int main(void) {
  float x, y, z;

  printf("Informe dois valores (x y): ");
  scanf("%f %f", &x, &y);

  if (x < 0) {
    printf("A reta X %.2f está no lado esquerdo ", x);
  } else if (x > 0) {
    printf("A reta X %.2f está no lado direito ", x);
  }

  if (y < 0) {
    printf("e a reta Y %.2f está na parte de baixo.\n", y);
  } else if (y > 0) {
    printf("e a reta Y %.2f está na parte de cima.\n", y);
  }

  z = sqrt(pow (x, 2) + pow(y, 2));
  printf("A distância euclidiana é aproximadamente %.2f\n", z);

  z = 0;
  z = x * y;
  printf("O valor em notação científica é %.2e\n", z);
  
  
  return 0;
}