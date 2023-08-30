#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 8
#define NUMS_TO_GENERATE 8

int isNumberEmpty(int number, int sentinel) {
    return number == sentinel;
}

void bubbleSort(int vetor[], int size) {
    for (int init = 0; init < size - 1; init++) {
        for (int subInit = 0; subInit < size - subInit - 1; subInit++) {
            if (vetor[subInit] > vetor[subInit + 1]) {
                int temp = vetor[subInit];
                vetor[subInit] = vetor[subInit + 1];
                vetor[subInit + 1] = temp;
            }
        }
    }
}

void userVetorAdd(int userVetor[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Digite um numero: ");
        scanf("%d", &userVetor[i]);
    }
}

void randomNumberGeneratorVetor(int vetor[], int size) {
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        vetor[i] = rand() % MAX;
    }
}

int compareVetores(int vetorGenarete[], int vetorUser[], int size) {
    for (int i = 0; i < size; i++) {
        if (vetorGenarete[i] != vetorUser[i]) {
            printf("Os vetores não são iguais!\n");
            bubbleSort(vetorGenarete, size);

            printf("Vetor gerado ordenado: ");
            for (int j = 0; j < size; j++) {
                printf("%d ", vetorGenarete[j]);
            }
            printf("\n");
            return 0;
        }
    }

    printf("Os vetores são iguais.\n");
    return 1;
}

void inicialize() {
    printf("***************************\n");
    printf("Welcome to the game!\n");
    printf("***************************\n");

    int vetorUser[NUMS_TO_GENERATE];
    int vetorGenerated[NUMS_TO_GENERATE];

    userVetorAdd(vetorUser, NUMS_TO_GENERATE);
    randomNumberGeneratorVetor(vetorGenerated, NUMS_TO_GENERATE);
    compareVetores(vetorGenerated, vetorUser, NUMS_TO_GENERATE);
}

int main(int argc, char const *argv[]) {
    inicialize();
    return 0;
}
