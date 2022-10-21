#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};
typedef struct Node node;
void rekursif_reversePrint(node*);
int main()
{
    node *head=NULL, *p=(node*)malloc(sizeof(node));
    int i, c;
    printf("number of nodes ");
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
    rekursif_reversePrint(head);
    return 0;
} 
void rekursif_reversePrint(node *head)
{
    if(head==NULL)
        return;
    rekursif_reversePrint(head->next);
    printf("\n%d",head->data);
}