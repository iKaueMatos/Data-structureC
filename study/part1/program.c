#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 10

int main(int argc, char const *argv[])
{
    
    int number[TAM];
    int i, auxiliar, contador;

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite %d o proximo numero:", i + 1); 
        scanf("%d", &number[i]);
    }

    return 0;
}
