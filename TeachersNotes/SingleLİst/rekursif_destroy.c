#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
node* rekursif_destroy(node*);
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
    head=rekursif_destroy(head);
    return 0;
}
node* rekursif_destroy(node* head)
{
    if(head==NULL)
        return head;
    rekursif_destroy(head->next);
    free(head);
}
