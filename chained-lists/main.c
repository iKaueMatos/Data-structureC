#include <stdlib.h>
#include "list.h"

int main(int argc, char const *argv[])
{
    list* list;
    list = createList();
    list = insertList(list, 10);
    list = insertList(list, 20);
    return 0;
}
