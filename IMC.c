#include <stdio.h>

int main(void) {
  float imc, peso, altura, peso_ideal, altura_id;
  char sexo;
  
  //Coletar dados
  printf("Bem-vinde à calculadora de IMC! Informe o seu sexo (M ou F): \n");
  scanf("%c", &sexo);
  printf("Informe o peso: ");
  scanf("%f", &peso);
  printf("Altura em metros (X.XX): ");
  scanf("%f", &altura);

  //Operação
  imc = peso / (altura * altura);
  altura_id = altura * 100.0;
  peso_ideal = (altura_id - 100.0) - ((altura_id - 100.0) * 0.15);

  if (imc < 18.5) {
    printf("\nSeu IMC é de %.1f e você está abaixo do peso.", imc);
  } else if (imc > 18.5 && imc < 24.9) {
    printf("\nSeu IMC é de %.1f e você está no peso normal.", imc);
  } else if (imc > 25.0 && imc < 29.9) {
    printf("\nSeu IMC é de %.1f e você está com pré-obesidade.", imc);
  } else if (imc > 30.0 && imc < 34.9) {
    printf("\nSeu IMC é de %.1f e você está com Obesidade Grau 1.", imc);
  } else if (imc > 35.0 && imc < 39.9) {
    printf("\nSeu IMC é de %.1f e você está com Obesidade Grau 2.", imc);
  } else if (imc > 40.0) {
    printf("\nSeu IMC é de %.1f e você está com Obesidade Grau 3.", imc);
  }

  printf("\nSeu peso ideal é: %.1f kg!", peso_ideal);
  
  return 0;
}









