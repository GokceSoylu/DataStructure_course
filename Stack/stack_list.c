#include <stdio.h>//buradan sonra kitaba bakalım olması birde sadi şeker yaparız ki iyice bu konu otursun
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
struct stack
{
    int counter;
    node *top;
};
typedef struct stack stack;
int main()
{
    stack s;
    node *new=NULL, *p;
    int i;
    s.counter=0;
    s.top=NULL;
    for(i=0;i<5;i++)
    {
        new=(node*)malloc(sizeof(node));
        new->data=i+10;
        new->next=s.top;
        s.top=new;
        if(i==0)
            p=s.top;
    }
    printf("\ns.top->data = %d\np->data = %d",s.top->data, p->data);//14, 10
    
    /*for(i=0;i<5;i++)
    {
        printf("\n%d",p->data);
        p=p->next;
    }
    */
    //!BOM yukarıdaki kodu bilerek bırektım. burada ciddi bir hata var. listenin en alt elemanından next diyrek başa doğru ulaşabilmeyi beklliyoruz
    //!bu çift taraflı liste değil ki.
    p=s.top;
    for(i=0;i<5;i++)
    {
        printf("\n%d",p->data);
        p=p->next;
    }
   return 0;
}/*
14
13
12
11
10
*/