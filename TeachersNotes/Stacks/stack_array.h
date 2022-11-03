#include <stdlib.h>
#include <stdio.h>
#define STACK_SIZE 5
typedef struct
{
    int data[STACK_SIZE];
    int top;
}stack;
void reseting(stack *stc)
{
    stc->top=-1;
}
void push(stack *stc, int c)
{
    if(stc->top==STACK_SIZE)
    {
        printf("\nthe stack is full\n");
        return;
    }    
    else
        stc->data[++stc->top]=c;
}
int pop(stack *stc)
{
    if(stc->top==-1)
    {
        printf("\nthe stack is empty");
        return -100;
    }    
    return stc->data[stc->top--];
}
