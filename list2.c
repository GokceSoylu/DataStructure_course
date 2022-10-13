#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct student
    {
        int age;
        struct student *next;
    };
    typedef struct student std;
    int i, c;
    std *head, *p;
    head=(std*)malloc(sizeof(std));
    printf("how many student are there ");
    scanf("%d",&c);
    for(i=0;i<c;i++)
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
        printf("please enter %d.students age",i+1);
        scanf("%d",&p->age);
    }
    p=head->next;
    for(i=0;i<c;i++)
    {   
        printf("%d.students age: %d\n",i+1,p->age);
        p=p->next;
    }
    return 0;
}