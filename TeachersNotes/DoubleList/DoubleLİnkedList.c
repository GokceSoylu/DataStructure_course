#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *pre;
    int data;
    struct node *next;
};
void print(struct node *head)
{
    struct node *p=head;
    while(p!=NULL)
    {
        printf("\n%d",p->data);
        p=p->next;
    }
}
int main()
{
    struct node *head=NULL, *tmp, *p=(struct node*)malloc(sizeof(struct node));
    int i, c;
    printf("how many dodes are there ");
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        if(head==NULL)
        {
            head=p;
            p->pre=NULL;
            scanf("%d",&p->data);
        }
        else
        {
            p->next=(struct node*)malloc(sizeof(struct node));
            tmp=p;
            p=p->next;
            p->pre=tmp;
            scanf("%d",&p->data);
        }
    }
    p->next=NULL;
    print(head);
    return 0;
}