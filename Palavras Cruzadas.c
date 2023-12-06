#include <stdio.h>
#include <string.h>

void jogoStart() {
    char resp[4];

    printf("Existem 5 níveis no total.\n");

    int nivel = 1;

    do {
      switch (nivel) {
        case 1:
        printf("\n1. Ruído; Barulho.\n_ _ _  ");
        scanf("%s", resp);

        if (strcmp(resp, "som") == 0) {
          printf("\n1. Ruído; Barulho.\n S O M\nCorreto!\n");
          nivel++;
        } else {
          printf("\nResposta incorreta! Tente outra vez!\n");
        }
        break;

        case 2:
        printf("\n2. Afiar (a lâmina).\n_ _ _ _ _ _  ");
        scanf("%s", resp);

        if (strcmp(resp, "amolar") == 0) {
          printf("\n2. Afiar (a lâmina).\nA M O L A R\nCorreto!\n");
          nivel++;
        }  else {
          printf("\nResposta incorreta! Tente outra vez!\n");
        }
        break;

        case 3:
        printf("\n3. Pensamento que não é fruto de emoção.\n_ _ _ _ _ _ _ _  ");
        scanf("%s", resp);

        if (strcmp(resp, "racional") == 0) {
          printf("\n3. Pensamento que não é fruto de emoção.\nR A C I O N A L\nCorreto!\n");
          nivel++;
        }  else {
          printf("\nResposta incorreta! Tente outra vez!\n");
        }
        break;

        case 4:
        printf("\n4. Traço que segue a mesma direção.\n_ _ _ _  ");
        scanf("%s", resp);

        if (strcmp(resp, "reta") == 0) {
          printf("\n4. Traço que segue a mesma direção.\nR E T A\nCorreto!\n");
          nivel++;
        }  else {
          printf("\nResposta incorreta! Tente outra vez!\n");
        }
        break;

        case 5:
        printf("\n5. Desacertos; Enganos.\n_ _ _ _ _ ");
        scanf("%s", resp);

        if (strcmp(resp, "erros") == 0) {
          printf("\n5. Desacertos; Enganos.\nE R R O S\nCorreto!\n");
          nivel++;
        }  else {
          printf("\nResposta incorreta! Tente outra vez!\n");
        }
        break;
      }
    } while (nivel <= 5);

  printf("Fim de todos os níveis :)");

}

int main() {
    int start;

    printf("Bem-vindo ao jogo de Palavras Cruzadas em C!\n");
    printf("Gostaria de começar?\nSIM (1) NÃO (2)\n");
    scanf("%d", &start);

    if (start == 1) {
        jogoStart();
    }

    return 0;
}
