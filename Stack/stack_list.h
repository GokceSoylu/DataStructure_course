#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 5
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
typedef struct 
{
    int cnt;
    node *top;
}stack;

void initialize(stack *stc)
{
    stc->cnt=0;
    stc->top=NULL;
}

void push(stack *stc, int x)
{
    if(stc->cnt==STACK_SIZE)
        printf("\nthe stack is full\n");
    else
    {
        node *tmp=(node*)malloc(sizeof(node));
        tmp->data=x;
        tmp->next=stc->top;
        stc->top=tmp;
        stc->cnt++;
    }
}

int pop(stack *stc)
{
    if(stc->cnt==0)
    {
        printf("\nthe stack is empty\n");
        return -100;
    }    
    else
    {
        node *tmp=stc->top;
        int x=tmp->data;
        stc->top=tmp->next;
        free(tmp);
        stc->cnt--;
        return x;
    }
}
int isEmpty(stack *s)
{
    if(s->cnt<=0) return 1;
    else return 0;
}
int isFULL(stack *s)
{
    if(s->cnt==STACK_SIZE) return 1;
    else return 0;
}

