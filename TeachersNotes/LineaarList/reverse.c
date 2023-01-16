#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};
typedef struct Node node;
node* reverse(node *);
void print(node *);
int main()
{
    node *head=NULL, *p=(node*)malloc(sizeof(node));
    int i, c;
    printf("\nnumber of nodes ");
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
    print(head);
    head=reverse(head);
    print(head);
    return 0;
}
node *reverse(node *head)
{
    node *p=head->next, *pre=head, *q;
    while(p!=NULL)
    {
        q=p->next;
        p->next=pre;
        pre=p;
        p=q;
    }
    head->next=NULL;
    return pre;
}
void print(node *head)
{
    printf("\n");
    while(head!=NULL)
    {
        printf("\n%d",head->data);
        head=head->next;
    }
}