#include <stdio.h>//!WORG
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node * destroy(struct node * head)
{
    struct node *tmp=head;//her node'u tek tek silmek
    while(head!=NULL)
    {
        head=head->next;
        free(tmp);
        tmp=head;
    }
    return head;//retun NULL; both are same
}
int main()
{
    struct node *head, *p=(struct node*)malloc(sizeof(struct node));
    int i, member;
    printf("\nmember ");
    scanf("%d",&member);
    for(i=0;i<member;i++)
    {
        if(head==NULL)
        {
            head=p;
            scanf("%d",&p->data);
        }
        else
        {
            p->next=(struct node*)malloc(sizeof(struct node));
            p=p->next;
            scanf("%d",&p->data);
        }
    }
    //print(head);
    head=destroy(head);
    //printf("\nafter dest %d",head->data);
    return 0;
}
