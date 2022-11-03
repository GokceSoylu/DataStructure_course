#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 4
struct node
{
    int data;
    struct node *next;
};
typedef struct 
{
    int cnt;
    struct node *top;
}stack;
void initialize(stack *stc)
{
    stc->cnt=0;
    stc->top=NULL;
}
void push(stack *stc, int data)
{
    if(stc->cnt==STACK_SIZE)
        printf("\nthe stack is full");
    else
    {
        struct node *tmp=(struct node*)malloc(sizeof(struct node));
        tmp->data=data;
        tmp->next=stc->top;
        stc->top=tmp;
        stc->cnt++;
    }
}
int pop(stack *stc)
{
    if(stc->cnt==0)
    {
        printf("\nthe stack is empty");
        return -100;
    }    
    else
    {   
        struct node *tmp=stc->top;
        int x=stc->top->data;
        stc->top=stc->top->next;
        free(tmp);
        stc->cnt--;
        return x;
    }
}

