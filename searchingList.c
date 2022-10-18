#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int age;
    struct Student *next;
};
typedef struct Student std;
int search(std*, int );
int main()
{
    std *head, *p;
    head=(std*)malloc(sizeof(std));
    int i, age, crowd;
    printf("\nhow much student are there ");
    scanf("%d",&crowd);
    for(i=0;i<crowd;i++)
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
        printf("\n%d. Students age ",i+1);
        scanf("%d",&p->age);
    }
    printf("\nwhic age do you want to search  ");
    scanf("%d",&age);
    i=search(head,age);
    if(i==0)
        printf("\nthe age deos not exist");
    else
        printf("%d.Student age is %d",i,age);
}
int search(std *head, int age)
{
    int i=0;
    head=head->next;
    while(head!=NULL)
    {
        if(head->age==age)
            return ++i;
        head=head->next;
        i++;
    }
    return 0;
}