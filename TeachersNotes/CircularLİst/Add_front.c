#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* addfront(struct node *head, int x)
{
    struct node *tmp=(struct node*)malloc(sizeof(struct node));
    tmp->data=x;
    if(head==NULL)
    {
        tmp->next=tmp;
        head=tmp;
    }
    else
    {
        tmp->next=head;
        struct node *last=head;
        while(last->next!=head)
            last=last->next;
        last->next=tmp;
        head=tmp;// if we delete this line it will be adding last:))
    }
    return head;
}
void print(struct node* head)
{
    struct node *print=head;
    do
    {
        printf("\n%d",print->data);
        print=print->next;
    }while(print!=head);
}
//! there is no NULL pointer in the circuler list
int main()
{
    struct node *head=NULL, *p=(struct node*)malloc(sizeof(struct node));//head=NULL sürekli unutuyoruz dikkat edelim
    int i, c;
    printf("how many nodes ");
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
            p->next=(struct node*)malloc(sizeof(struct node));
            p=p->next;
            scanf("%d",&p->data);
        }
    }
    p->next=head;
    print(head);
    printf("\n");
    head=addfront(head,10);
    printf("\nafter\n");
    print(head);
    return 0;
}
