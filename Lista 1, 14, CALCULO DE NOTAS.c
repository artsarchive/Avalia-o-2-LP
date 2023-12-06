#include <stdio.h>
/*14 Escreva um programa que: 
➢ Leia da entrada padrão as notas dos 5 créditos da disciplina CET635-LPI e calcule a média do semestre. Imprima o resultado na tela; 
➢ dependendo da média calculada anteriormente, determine se o aluno está de prova final ou não; 
➢ se o aluno estiver de prova final, leia a nota da prova final e calcule a média do semestre; 
➢ Imprima a nota final do aluno na disciplina; 
 */

  int main(void) {
    float n1, n2, n3, n4, n5, media, notaFinal;
    int creditos;
    

    printf("Informe o número de créditos (1-5): ");
    scanf("%i", &creditos);

    switch (creditos) {
      case 1:
      printf("Informe a Nota 1: ");
      scanf("%f", &n1);
      printf("A média é de %.1f\n", n1);

      if (n1 < 7) {
        printf("Reprovado! Informe a nota final: ");
        scanf("%f", &notaFinal);
        (notaFinal > 7) ? printf("Aprovado! Nota final: %.1f", notaFinal) : printf("Reprovado! Nota final: %.1f", notaFinal);
      } else if (n1 > 7) {
        printf("Aprovado!");
      }
      break;

      case 2: 
      printf("Informe a Nota 1: ");
      scanf("%f", &n1);

      printf("Informe a Nota 2: ");
      scanf("%f", &n2);

      media = (n1 + n2) / 2;
        
      printf("A média é de %.1f\n", media);

      if (media < 7) {
        printf("Reprovado! Informe a nota final: ");
        scanf("%f", &notaFinal);
        (notaFinal > 7) ? printf("Aprovado! Nota final: %.1f", notaFinal) : printf("Reprovado! Nota final: %.1f", notaFinal);
      } else if (media > 7) {
        printf("Aprovado!");
      }
      break;

      case 3:
      printf("Informe a Nota 1: ");
      scanf("%f", &n1);

      printf("Informe a Nota 2: ");
      scanf("%f", &n2);

      printf("Informe a Nota 3: ");
      scanf("%f", &n3);

      media = (n1 + n2 + n3) / 3;

      printf("A média é de %.1f\n", media);

      if (media <= 7) {
        printf("Reprovado! Informe a nota final: ");
        scanf("%f", &notaFinal);
        (notaFinal > 7) ? printf("Aprovado! Nota final: %.1f", notaFinal) : printf("Reprovado! Nota final: %.1f", notaFinal);
      } else if (media > 7) {
        printf("Aprovado!");
      }
      break;

      case 4: 
      printf("Informe a Nota 1: ");
      scanf("%f", &n1);

      printf("Informe a Nota 2: ");
      scanf("%f", &n2);

      printf("Informe a Nota 3: ");
      scanf("%f", &n3);

      printf("Informe a Nota 4: ");
      scanf("%f", &n4);
        
      media = (n1 + n2 + n3 + n4) / 4;

      printf("A média é de %.1f\n", media);

      if (media < 7) {
        printf("Reprovado! Informe a nota final: ");
        scanf("%f", &notaFinal);
        (notaFinal > 7) ? printf("Aprovado! Nota final: %.1f", notaFinal) : printf("Reprovado! Nota final: %.1f", notaFinal);
      } else if (media > 7) {
        printf("Aprovado!");
      }
      break;

      case 5:
      printf("Informe a Nota 1: ");
      scanf("%f", &n1);

      printf("Informe a Nota 2: ");
      scanf("%f", &n2);

      printf("Informe a Nota 3: ");
      scanf("%f", &n3);

      printf("Informe a Nota 4: ");
      scanf("%f", &n4);

      printf("Informe a Nota 5: ");
      scanf("%f", &n5);

      media = (n1 + n2 + n3 + n4 + n5) / 5;

      printf("A média é de %.1f\n", media);

      if (media < 7) {
        printf("Reprovado! Informe a nota final: ");
        scanf("%f", &notaFinal);
        (notaFinal > 7) ? printf("Aprovado! Nota final: %.1f", notaFinal) : printf("Reprovado! Nota final: %.1f", notaFinal);
      } else if (media > 7) {
        printf("Aprovado!");
      }
    }


    
  return 0;
}