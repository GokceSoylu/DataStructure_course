#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *pre;
};
struct node *delete(struct node *head, int x)
{
    if(head!=NULL)
    {
        struct node *tmp=head;
        if(head->data==x)
        {
            head=head->next;
            free(tmp);
            head->pre=NULL;
        }
        else
        {
            while(tmp!=NULL && tmp->data!=x)
                tmp=tmp->next;
            tmp->pre->next=tmp->next;
            if(tmp->next!=NULL)
                tmp->next->pre=tmp->pre;
        }
    }
    return head;
}
void print(struct node* head)
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
    int i ,c;
    printf("how many nodes are there ");
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
    head=delete(head, 1);
    printf("\n\nafter\n");
    print(head);
    return 0;
}