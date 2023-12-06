#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Função de comparação para qsort
int comparadorInteiros(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Função para preencher o array com valores aleatórios entre 0 e 1000
void preencherArray(int array[], int tamanho) {
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        array[i] = rand() % 1001;
    }
}

// Função para imprimir os elementos do array
void imprimirArray(int array[], int tamanho) {
    printf("Array: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Função para encontrar os três maiores valores sem repetição
void encontrarMaiores(int array[], int tamanho) {
    for (int i = 0; i < 3; i++) {
        int indiceMaior = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (array[j] > array[indiceMaior]) {
                // Verifica se o valor já foi escolhido como um dos maiores
                int repetido = 0;
                for (int k = 0; k < i; k++) {
                    if (array[j] == array[k]) {
                        repetido = 1;
                        break;
                    }
                }
                if (!repetido) {
                    indiceMaior = j;
                }
            }
        }
        // Troca o elemento atual com o maior encontrado
        int temp = array[i];
        array[i] = array[indiceMaior];
        array[indiceMaior] = temp;
    }

    printf("Os três maiores valores sem repetição: %d, %d, %d\n", array[0], array[1], array[2]);
}

// Função para encontrar os três menores valores sem repetição
void encontrarMenores(int array[], int tamanho) {
    for (int i = 0; i < 3; i++) {
        int indiceMenor = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (array[j] < array[indiceMenor]) {
                // Verifica se o valor já foi escolhido como um dos menores
                int repetido = 0;
                for (int k = 0; k < i; k++) {
                    if (array[j] == array[k]) {
                        repetido = 1;
                        break;
                    }
                }
                if (!repetido) {
                    indiceMenor = j;
                }
            }
        }
        // Troca o elemento atual com o menor encontrado
        int temp = array[i];
        array[i] = array[indiceMenor];
        array[indiceMenor] = temp;
    }

    printf("Os três menores valores sem repetição: %d, %d, %d\n", array[0], array[1], array[2]);
}

// Função para calcular a média
float calcularMedia(int array[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return soma / tamanho;
}

// Função para calcular a mediana (o array deve estar ordenado)
float calcularMediana(int array[], int tamanho) {
    if (tamanho % 2 == 0) {
        return (array[tamanho / 2 - 1] + array[tamanho / 2]) / 2.0;
    } else {
        return array[tamanho / 2];
    }
}

// Função para calcular o desvio padrão
float calcularDesvioPadrao(int array[], int tamanho, float media) {
    float somaQuadrados = 0;
    for (int i = 0; i < tamanho; i++) {
        somaQuadrados += (array[i] - media) * (array[i] - media);
    }
    return sqrt(somaQuadrados / tamanho);
}

int main() {
    const int tamanhoArray = 10000;
    int array[tamanhoArray];

    preencherArray(array, tamanhoArray);
    imprimirArray(array, tamanhoArray);

    encontrarMaiores(array, tamanhoArray);
    encontrarMenores(array, tamanhoArray);

    float media = calcularMedia(array, tamanhoArray);
    printf("Média: %.2f\n", media);

    // Ordena o array para calcular a mediana
    qsort(array, tamanhoArray, sizeof(int), comparadorInteiros);
    float mediana = calcularMediana(array, tamanhoArray);
    printf("Mediana: %.2f\n", mediana);

    float desvioPadrao = calcularDesvioPadrao(array, tamanhoArray, media);
    printf("Desvio Padrão: %.2f\n", desvioPadrao);

    // Implemente a lógica para encontrar valores repetidos, se necessário

    return 0;
}