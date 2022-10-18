#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int age;
    struct Student *next;
};
typedef struct Student std;
int search(std* head, int age)
{
    int i=0;
    std *p=head->next;
    while(p!=NULL)
    {
        if(p->age==age)
            return ++i;
        p=p->next;
        i++;
    }
    return 0;
}
int main()
{
    std *p, *head=(std*)malloc(sizeof(std));
    int i, age, crowd;
    printf("how much student are there ");
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
        printf("\n%d.Students age ",i+1);
        scanf("%d",&p->age);
    }
    printf("\nwhich age do you want to search  ");
    scanf("%d",&age);
    i=search(head,age);
    if(i==0)
        printf("\nthere is no any student who is %d years old",age);
    else
        printf("%d. Students age %d",i,age);
}