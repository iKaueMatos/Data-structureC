#include <stdlib.h>
#include "list.h"

struct list 
{   
    int info;
    struct list* prox;
};

list* createList() {
    return NULL;
}

list* insertList(list *l, int i) 
{
    list* new = (list*)malloc(sizeof(list));
    new->info = i;
    new->prox = l;

    return new;
}