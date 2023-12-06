#include <stdio.h>
#include <math.h>

/* 10 Escreva um programa que leia da entrada padrão o lado de um quadrado e imprima: ➢ O tamanho da diagonal do mesmo; 
  ➢ O valor do perímetro; 
  ➢ Sua área. */

int main(void) {
  float lado, perimetro, area, diag;

  printf("Informe o lado do quadrado: ");
  scanf("%f", &lado);

  diag = lado * sqrt(2);
  perimetro = lado * 4;
  area = lado * lado;

  printf("Diagonal: %.2f\nPerímetro: %.2f\nÁrea: %.2f", diag, perimetro, area);
  
  return 0;
}