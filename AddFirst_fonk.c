#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int age;
    struct Student *next;
};
typedef struct Student std;
std* add_first(std *, int);
void print(std *);
int main()
{
    std *head=(std*)malloc(sizeof(std)), *p=(std*)malloc(sizeof(std));
    head->next=NULL;        //change
    int i, age;
    for(i=0;i<4;i++)
    {
        printf("%d.students age ",i+1);
        if(head->next==NULL)
        {
            scanf("%d",&head->age);
            head->next=p;
        }
        else
        {
            scanf("%d",&p->age);
            p->next=(std*)malloc(sizeof(std));
            p=p->next;
        }
    }
    p=NULL;
    print(head);
    printf("\nbasa eklemek istediginiz yas ");
    scanf("%d",&age);
    head=add_first(head, age);
    print(head);
    return 0;
}
std* add_first(std *head, int age)
{
    std *new=(std*)malloc(sizeof(std));
    new->next=head;
    head=new;
    new->age=age;
    return head;    //! NEDEEEN RETURN HEAD GEREKLİ !
}
void print(std *head)
{
    std *p=head;
    while(p->next!=NULL)
    {
        printf("\n%d",p->age);
        p=p->next;
    }
}