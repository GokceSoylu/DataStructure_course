#include <stdio.h>//! return'e gerek yok
#include <stdlib.h>
struct Student
{
    int age;
    struct Student *next;
};
typedef struct Student std;
void add_last(std*);
void print(std*);
int main()
{
    std *head=NULL, *p=(std*)malloc(sizeof(std));
    int i, c;
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
    add_last(head);
    print(head);
    return 0;
}
void print(std *head)
{
    std *print=head;
    while(print!=NULL)
    {
        printf("\n%d",print->age);
        print=print->next;
    }
}
void add_last(std* head)
{
    std *last=(std*)malloc(sizeof(std)), *p=head;
    printf("what about last students age ");
    scanf("%d",&last->age);
    while(p->next!=NULL) p=p->next;
    p->next=last;
    last->next=NULL;
}