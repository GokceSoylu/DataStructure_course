#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *pre;
    int data;
    struct node *next;
}; 
struct node* addFront(struct node *head, int x)
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->pre=NULL;
    p->next=head;
    if(head!=NULL)
        head->pre=p;
    head=p;
    return head;
}
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
    struct node *tmp, *head=NULL, *p=(struct node*)malloc(sizeof(struct node));
    int i, c;
    printf("\nhow many node are there");
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
    printf("\n");
    head=addFront(head, 10);
    printf("\nafter\n");
    print(head);
    return 0;
}
