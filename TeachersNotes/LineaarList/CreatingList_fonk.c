#include <stdio.h>//! görüldüğü üzere head'i return lemeye gerek yok!
#include <stdlib.h>
struct Student
{
    int age;
    struct Student *next;
};
typedef struct Student std;
void create(std *head, int x)
{
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
}
int main()
{
    int i;
    std *head=(std*)malloc(sizeof(std));
    create(head,3);
    for(i=0;i<3;i++)
    {
        head=head->next;
        printf("\n%d",head->age);
    }
    return 0;
}