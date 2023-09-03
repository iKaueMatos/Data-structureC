#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main(int argc, char const *argv[])
{   
    //ponteiro -> desta forma conseguimos capturar o endereço de memoria alocado no 
    //momento de sua inicialização
    int *vetor;
    vetor = (int*) malloc(MAX * sizeof(int));

    if (vetor == NULL) {
        printf("Mémoria insuficiente\n");
        exit(1);
    }

    // printf("endereço da mémoria alocada de forma dinamica:%d", vetor);

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    vetor[5] = 60;
    vetor[6] = 70;
    vetor[7] = 100;
    vetor[8] = 120;
    vetor[9] = 200;
    
    printf("%d", vetor[9]);
    free(vetor); // após utilizar o free não e póssivel chamarmos um valor novamente 
    return 0;
}
