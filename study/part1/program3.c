#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 20

int auxiliar;
int *sizeVetor;
int number[TAM];

void inicialization() {
    printf("--------------------------------------\n");
    printf("------- Inicializando programa! ------\n");
    printf("--------------------------------------\n");
    preacher();
}

void preacher() {
    printf("Digite um numero para o tamanho do vetor: ");
    int tamanho;
    scanf("%d", &tamanho);

    sizeVetor = (int*)malloc(tamanho * sizeof(int));

    printf("Preencha o vetor: ");
    for (int preacherVetor = 0; preacherVetor < tamanho; preacherVetor++) {
        printf("Digite o proximo numero:\n");
        scanf("%d", &sizeVetor[preacherVetor]);
    }

    bubbleSort(tamanho);
}

void bubbleSort(int tamanho) {
    setlocale(LC_ALL, "");

    for (int cont = 1; cont < tamanho; cont++) {
        for (int position = 0; position < tamanho - 1; position++) {
            if (sizeVetor[position] > sizeVetor[position + 1]) {
                auxiliar = sizeVetor[position];
                sizeVetor[position] = sizeVetor[position + 1];
                sizeVetor[position + 1] = auxiliar;
            }
        }
    }

    display(tamanho);
    free(sizeVetor);
}

void display(int tamanho) {
    printf("Vetor ordenado: ");
    for (int displayCount = 0; displayCount < tamanho; displayCount++) {
        printf("%d ", sizeVetor[displayCount]);
    }
    printf("\n");
}

int main() {
    inicialization();
    return 0;
}
