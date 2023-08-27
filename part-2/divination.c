#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10
#define SIZE 2
#define NUMS_TO_GENERATE 1

int isNumberEmpty(int number, int sentinel) {
    return number == sentinel;
}

int isStringEmpty(const char *str) {
    return strlen(str) == 0;
}

int randomNumberGenerator() {
     srand(time(NULL));

    for (int i = 0; i < NUMS_TO_GENERATE; i++){
        printf("%d\n", rand() % MAX);
    }

    return EXIT_SUCCESS;
}

int comparable(int value) {
    int numberSort = randomNumberGenerator();

    if (value != numberSort) {
        printf("ERROR\n");
        return;
    }

    printf("congratulations you got it right the numbers are the same!!\n");
    printf("Your number is the same as the one drawn:%d", value);
}

/*Inicialize game*/
void divination(int value, const char *name) {
    int emptyNumber = -1;

    if (isNumberEmpty(value, emptyNumber) && isStringEmpty(name)) {
        printf("Error\n");
        return;
    }

    printf("***************************\n");
    printf("Welcome to the game, %s!\n", name);
    printf("***************************\n");
    printf("*****Number random is gerador*****\n");
    comparable(value);
}

int main() {
    int someNumber;
    char someName[20];

    printf("Enter your name:");
    scanf("%s", &someName);
    printf("Enter your kick number:");
    scanf("%d", &someNumber);
    divination(someNumber, someName);
    return 0;
}
