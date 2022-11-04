#include "stack_list2.h"
int main()
{
    node *top=NULL;
    top=push(top, 10);
    printf("\n1. %d",top->data);
    top=push(top, 20);
    printf("\n2. %d",top->data);
    top=push(top, 30);
    printf("\n3. %d",top->data);

    printf("\n3. %d",pop(top));
    printf("\n2. %d",pop(top));
    printf("\n1. %d",pop(top));

    return 0;
}