#include <stdio.h>//? burada ise return kullandık çünkü head'i fonksiyonun içinde oluştuk ve head'in tuttuğu adrese ulaşmak için po,nter
#include <stdlib.h>//? return'ledik. peki ne döndürdük. head pointerinin tuttuğu adresi döndürdük ve bu adresi yeni pointera atadık. 
struct Student//? özetle pointerların bulunduğu adresler farklı. tuttuğu aderler aynı. iki farklı ointer aynı adresi tutuyor.
{
    int age;
    struct Student *next;
};
typedef struct Student std;
std* create( int x)
{
   std *head=(std*)malloc(sizeof(std));
   int i;
    std *p;
    for(i=0;i<x;i++)
    {
        if(head->next==NULL)
        {
            p=(std*)malloc(sizeof(std));
            head->next=p;
        }
        else
        {
            p->next=(std*)malloc(sizeof(std));
            p=p->next;
        }
        printf("\n%d. Students age  ",i+1);
        scanf("%d",&p->age);
    }
    return head;
}
int main()
{
    int i;
    std *head=create(3);
    
    for(i=0;i<3;i++)
    {
        head=head->next;
        printf("\n%d",head->age);
    }
    return 0;
}