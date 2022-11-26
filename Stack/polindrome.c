#include "stack_array2.h"
int main()
{
    stack s;
    char c[20];
    int i;
    reset(&s);
    scanf("%s",c);
    printf("\n%s\n",c);
    for(i=0;i<20;i++)
        push(&s,c[i]);  
    for(i=0;i<20;i++)
        printf("%c ",pop(&s));
    return 0;
}