#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int age;
    struct Student *next;
};
typedef struct Student std;
int main()
{
    std *head=NULL, *p=(std*)malloc(sizeof(std)), *last=(std*)malloc(sizeof(std)), *print;
    int i, c;
    printf("*nhow many students are there");
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
    print=head;
    while(print!=NULL)
    {
        printf("\n%d",print->age);
        print=print->next;
    }
    p=head;
    while(p->next!=NULL)
        p=p->next;
    p->next=last;
    last->next=NULL;
    printf("\nwhat about last students age ");
    scanf("%d",&last->age);
    print=head;
    while(print!=NULL)
    {
        printf("\n%d",print->age);
        print=print->next;
    }
    return 0;
}

