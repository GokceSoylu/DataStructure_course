#include <stdio.h>
#include <stdlib.h>
#include "stack_list.h"
int main()
{
    stack s;
    initialize(&s);
    printf("\n%d",pop(&s));
    push(&s, 10);
    push(&s, 8);
    push(&s, 6);
    push(&s, 2);
    push(&s, 0);
    printf("\n%d",pop(&s));
    printf("\n%d",pop(&s));
    printf("\n%d",pop(&s));
    printf("\n%d",pop(&s));
    printf("%d\n",pop(&s));
    return 0;
}
