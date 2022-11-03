#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 5
typedef struct 
{
    int data[STACK_SIZE];
    int top;
}stack;

void initialize(stack *stc)
{
    stc->top=-1;
}

void push(stack *stc, int x)
{
    if(stc->top==STACK_SIZE-1)
        printf("\nthe stack is full\n");
    else
        stc->data[++stc->top]=x;
}

int pop(stack *stc)
{
    if(stc->top==-1)
    {
        printf("\nthe stack is empty\n");
        return -100;
    }
    else
        return stc->data[stc->top--];
}
