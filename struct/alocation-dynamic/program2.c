struct person
{
    int age;
    float weight;
};

int main(int argc, char const *argv[])
{
    struct person *personHuman;

    personHuman = (struct person*) malloc(sizeof(struct person)); 
    personHuman->age = 20;
    personHuman->weight = 50.44;

    printf("%d \n", personHuman->age);
    printf("%.2f \n", personHuman->weight);
    return 0;
}
