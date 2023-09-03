void f(int *vetor) {
    vetor[0] = 20;
}

int main(int argc, char const *argv[])
{
    int vetor[10],i;

    for (i = 0; i < 10; i++) {
        //Desta forma estamos se refindo ao endereço da memoria onde se encontra 0
        printf("%d", *(vetor + i));
        printf("\n");
    }

    for (i = 0; i < 10; i++) {
        // Desta forma estamos se refindo ao endereço da memoria onde se encontra o vetor
        // que no caso e na memoria RAM
        printf("%d", vetor + i);
        printf("\n");
    }

    f(vetor);
    printf("%d\n", vetor[0]);
    return 0;
}
