#include "stack_list2.h"
int main()
{
    node *top=NULL;
    top=push(top, 10);
    top=push(top, 20);
    top=push(top, 30);
    print(top);
    printf("\n\n--deleting--");
    printf("\n3. %d",pop(top));
    printf("\n2. %d",pop(top));
    printf("\n1. %d",pop(top));
    return 0;
}