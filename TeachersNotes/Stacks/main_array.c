#include <stdio.h>
#include "stack_array.h"
int main()
{
    stack stc;
    reseting(&stc);
    printf("\n%d",pop(&stc));
    push(&stc, 10);
    push(&stc, 8);
    push(&stc, 6);
    push(&stc, 4);
    push(&stc, 2);
    printf("\nthe top --%d--\n",stc.top);
    push(&stc, 7);
    printf("\nthe top -%d-\n",stc.top);
    printf("\n%d",pop(&stc));
    printf("\n%d",pop(&stc));
    printf("\n%d",pop(&stc));
    printf("\n%d",pop(&stc));
    printf("\n%d",pop(&stc));
    printf("\n%d",pop(&stc));
    return 0;
}
//the stack is empty 
//-100
//4
//the stack is full
//4
//2
//4
//6
//8
//10
//the stack is empty 
//-100