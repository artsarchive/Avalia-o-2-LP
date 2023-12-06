//Adicione a biblioteca a ser usada:
#include <stdio.h>


//Introduza a função principal chamada main:
int main () {

  //Declare a variável de salário bruto, salário líquido, FGTS, IRPF, taxas, vale alimentação e salário mínimo;
  float s_bruto, s_liquido, fgts, irpf, taxas, v_al, s_min;

  //Escreva para o usuário informar o salário bruto;
  printf("Informe o salário bruto: ");
  
  //Analise a informação dada no comando anterior e armazene na variável s_bruto, para salário bruto);
  scanf("%f", &s_bruto);

  //Escreva("Informe o vale alimentação (Caso não receba, indique 0): ");
  printf("Informe o vale alimentação (Caso não receba, indique 0): ");
  
  //Analise(A informação dada no comando anterior e armazene na variável v_al, para vale alimentação);
  scanf("%f", &v_al);

  //Informe o cálculo de FGTS para ser igual a salário bruto menos 8%;
  fgts = s_bruto * (8.0/100);
  
  //Informe o cálculo de IRPF para ser igual a salário bruto menos 27,5%;
  irpf = s_bruto * (27.5/100);
  
  //Informe o cálculo de taxa para ser igual a soma do FGTS e IRPF calculados;
  taxas = fgts + irpf;
  
  //Informe o cálculo do salário líquido para ser igual a salário bruto menos as taxas e o vale alimentação;
  s_liquido = s_bruto - taxas - v_al;

  //Se (salário líquido for menor que 1320);
  if (s_liquido < 1320) {
    
    //Então salário mínimo será igual a 1320 menos o valor do vale alimentação;
    s_min = 1320 + v_al;
    
    //Escreva que o salário líquido é o valor calculado no comando anterior, identificando-o por salário mínimo;
    printf("O salário líquido é de R$ %.2f ", s_min);
    
    //se salário líquido for maior que 1320;
  } else if (s_liquido > 1320) {
    
    //Então escreva que o salário líquido é o valor calculado no comando anterior, identificando-o por salário líquido;
    printf("O salário líquido é R$ %.2f ", s_liquido);
  }

  //Retorne um valor para o sistema finalizar o código;
  return 0;
  
}