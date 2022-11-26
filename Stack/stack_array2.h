#include <stdio.h>
#include <stdlib.h>
#define STACK_SİZE 20//yani hocam char dizisi(string) yaptığımızda size'ı bir fazla arttırmamız gerekiyor. '\0' muhabbeti :))
typedef struct
{
    int top;
    char data[STACK_SİZE];
}stack;
void reset(stack *s)
{
    s->top=-1;
}
void push(stack *s, char data)
{
    if(s->top==STACK_SİZE-1)
        printf("\nthe stack is full");
    else
        s->data[++s->top]=data;
}
char pop(stack *s)
{
    if(s->top==-1)
    {
        printf("\nthe stack is empty");
        return 0;
    }
    return s->data[s->top--];
}
