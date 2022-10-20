#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int age;
    struct Student *next;
};
typedef struct Student std;
void print(std*);
int main()
{
    std *p=(std*)malloc(sizeof(std)), *head=(std*)malloc(sizeof(std)), *new=(std*)malloc(sizeof(std));
    int i=0, age;
    while(i<3)
    {
        if(head->next==NULL)
            head->next=p;
        else
        {
            p->next=(std*)malloc(sizeof(std));
            p=p->next;
        }
        printf("%d.age ",i+1);
        scanf("%d",&p->age);
        i++;
    }
    head=head->next;
    print(head);
    printf("\nbasa eklemek iatediginiz yas ");
    scanf("%d",&new->age);
    new->next=head;
    head=new;
    printf("\n\n\n");
    print(head);
    return 0;
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