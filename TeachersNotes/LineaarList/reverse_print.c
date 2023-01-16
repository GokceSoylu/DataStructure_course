#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
void reverse_print(node *);
int main()
{
    node *head=NULL, *p=(node*)malloc(sizeof(node));
    int c, i;
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
    reverse_print(head);
    return 0;
}
void reverse_print(node *head)
{
    node *p=NULL, *tmp;
    while(head!=NULL)
    {
        tmp=(node*)malloc(sizeof(node));
        tmp->data=head->data;
        tmp->next=p;
        p=tmp;
        head=head->next;
    }
    while(p!=NULL)
    {
        printf("\n%d",p->data);
        p=p->next;
    }
}