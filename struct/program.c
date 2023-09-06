#include <stdio.h>

//Object
struct person 
{
    int age;
    float weight;
};

int main(int argc, char const *argv[])
{
    struct person personHuman;
    personHuman.age = 20;
    personHuman.weight = 1.50;

    printf("Digite sua idade: ");
    scanf("%d", &personHuman.age);
    printf("Digite seu peso: ");
    scanf("%d %.2f\n", &personHuman.weight);
    printf("%d %.2f\n", personHuman.age, personHuman.weight);
    // printf("%d %.2f\n", personHuman.age, personHuman.weight);
    return 0;
}
