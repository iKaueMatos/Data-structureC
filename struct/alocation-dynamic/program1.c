#include <stdio.h>
#include <stdlib.h>

//typedef -> é utilizado para Definição de novos tipos
typedef struct person 
{
    int age;
    int weight;
} tperson;


int main(int argc, char const *argv[])
{
    tperson *personHuman;

    personHuman = (struct person*)malloc(sizeof(struct person));
    personHuman->age = 20;
    personHuman->weight = 76.44;
    printf("%d\n", personHuman->age);
    return 0;
}
