#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
struct stack
{
    int counter;
    node *top;
};
typedef struct stack stack;
void push(stack *, int);
void print(stack);
int main()
{
    stack s;
    s.counter=0;
    s.top=NULL;
    push(&s,101);//normalde aşşagıda değişiklik yaptığımızda bildiğin gibşi local olur kendiisnde değişiklik olmaz. bu yüzden top değerini
    print(s);//returnlememiz beklebünir. bunun için sona ekleyende var return olayından kurtulmka için. head de değişiklik yapınca return gerekiyodu
}               //sona ekleyince gerekmiyor ya ondan bahsedşyorum. işte burada biz head di değişk-tiriyıruz returnden kurtulmak içinde stack'i
void push(stack *s, int data)//adresi ile gonderiyoruz. böylelikle stack içerinde yaptığımız değişikler kalıcı oluyor. head stack'in içind eya stack'in adresine
{                              //ulaşabildiğimiz için yaptığımız tüm değişiklikler kalıcı olur.
    node *tmp=(node*)malloc(sizeof(node));
    tmp->data=data;
    tmp->next=s->top;
    s->top=tmp;
    s->counter++;
}   
void print(stack s)
{
    while(s.top!=NULL)
    {
        printf("%d\n",s.top->data);
        s.top=s.top->next;
    }
}