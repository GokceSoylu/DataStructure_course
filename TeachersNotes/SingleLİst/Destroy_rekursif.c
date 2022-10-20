//! neden ilk iki eleman silinmiyor
//* adresleri yazdırıp gerçekten head adres tutumaya mı dec-vam ediyor diye bakabiliriz 
#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int age;
    struct Student *next;
};
typedef struct Student std;
std* destroy(std* head);
void destroy_(std* head);
void print(std* head);
int main()
{
    std *head=NULL, *p=(std*)malloc(sizeof(std));
    int c, i;
    printf("how many students are there ");
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        if(head==NULL)
        {
            head=p;
            scanf("%d",&p->age);
        }
        else
        {
            p->next=(std*)malloc(sizeof(std));
            p=p->next;
            scanf("%d",&p->age);
        }
    }
    p->next=NULL;
    print(head);
    printf("\nbeforo dest head = %d\n",head);
    head=destroy(head);
    printf("\nafrer destroy ");
    printf("head = %d\n",head);
    printf("\n%d\n",head->age);
    print(head);
}
std* destroy(std* head)
{
    if(head==NULL)
        return NULL;
    destroy(head->next);
    free(head);
}
void destroy_(std *head)
{
    if(head==NULL)
        return;
    destroy_(head->next);
    free(head);
}
void print(std *head)
{
    std *p=head;
    while(p!=NULL)
    {
        printf("\n%d",p->age);
        p=p->next;
    }
}
//peki list dairesel olsa nasışçyazarız?
