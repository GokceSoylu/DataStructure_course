#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
node* merch(node* head1, node *head2)
{
    node *p=head1;
    if(head1==NULL)
    {
        head1=head2;
        return head1;
    }
    while(p->next!=NULL) p=p->next;
    p->next=head2;
    return head1;     
}
void print(node*);
int main()
{
    node *head=NULL, *head2=NULL, *p=(node*)malloc(sizeof(node)), *pp=(node*)malloc(sizeof(node));
    int i, c;
    printf("how many nodes are there in the first list ");
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        if(head==NULL)
        {
            head=p;
            scanf("%d",&p->data);
        }
        else
        {
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
            scanf("%d",&p->data);
        }
    }
    p->next=NULL;
    printf("\nwhat about number of second list nodes ");
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        if(head2==NULL)
        {
            head2=pp;
            scanf("%d",&pp->data);
        }
        else
        {
            pp->next=(node*)malloc(sizeof(node));
            pp=pp->next;
            scanf("%d",&pp->data);
        }
    }
    pp->next=NULL;
    print(head);
    print(head2);
    head=merch(head, head2);
    print(head);
    return 0;
}
void print(node *h)
{
    printf("\n");
    while(h!=NULL)
    {
        printf("\n%d",h->data);
        h=h->next;
    }
}