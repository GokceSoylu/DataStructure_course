/* Creating list */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c, i;
    struct a
    {
        int n;
        struct a *next;
    };
    typedef struct a a;
    a *head, *p;
    head=(a*)malloc(sizeof(a));
    // şu anda liste oluştu tek düğm head bir alana sahip 
    printf("how much number do want to enter");
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        if(i==0)
        {   p=(a*)malloc(sizeof(a));
            head->next=p;
        }
        else
        {
            p->next=(a*)malloc(sizeof(a));
            p=p->next;    
        }
        printf("Please enter the %d.number",i+1);
        scanf("%d",&p->n);
    }
    return 0;

}