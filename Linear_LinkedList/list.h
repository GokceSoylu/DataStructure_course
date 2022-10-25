#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
node* create(node *head)
{
    int c, i;
    node *p=(node*)malloc(sizeof(node));
    printf("\nhow much node do want to create ");
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        if(i==0)
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
    return head;
}
node* add(node *head, int data, int side)   //? TRY
{
    int i;
    node *p=head, *q=(node*)malloc(sizeof(node));
    q->data=data;
    for(i=0;i<side-1;i++) p=p->next;
    q->next=p->next;
    p->next=q;
    return head;
}
node * addFront(node *head, int data)
{
    node *p=(node*)malloc(sizeof(node));
    p->data=data;
    p->next=head;
    head=p;
    return head;
}
node* addLast(node* head, int data)
{
    node *p=(node*)malloc(sizeof(node)), *pp=head;
    p->data=data;
    p->next=NULL;
    if(head==NULL)
    {
        head=p;
        return head;
    }
    while(pp->next!=NULL) pp=pp->next;
    pp->next=p;
    return head;
}
node* node_search(node *head, int data) //? TRY
{
    node *p=head;
    if(head==NULL)
        printf("\nthe list is empty");
    else 
    {
        while(head!=NULL)
        {
            if(head->data==data) return head;
            head=head->next;
        }
    }
    return NULL;
}
int search(node *head, int data)
{
    while(head!=NULL)
    {
        if(head->data==data)
            return 1;
        head=head->next;
    }
    return 0;
}
int rekursif_search(node *head, int data)   //? TRY
{
    if(head==NULL)
        return 0;
    if(head->data==data)
        return 1;
    else
       rekursif_search(head->next, data);
}
int count(node *head)
{
    int counter=0;
    while(head!=NULL) 
    {
        head=head->next;
        counter++;
    }
    return counter;
}
int rekursif_count(node *head)
{
    if(head==NULL)
        return 0;
    return rekursif_count(head->next)+1;
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
void rekursif_print(node *head)
{
    if(head==NULL)
        return ;
    printf("\n%d",head->data);
    rekursif_print(head->next);
}
node* delet(node *head, int data)//basta ortada sonda bos tek eleman
{
    node *delet=head, *pre;
    int control=0;//bu olmadığında 
    if(head==NULL)//boşsa normalde olmasada hata almayız ancak boş olma durumda belirtmek istedim.
    {
        printf("\nthe list is empty");
        return head;
    }
    else if(head->data==data)
    {
        head=head->next;
        control=1;
    }
    else if(head->next==NULL)//tek elemanlıysa
    {
        if(head->data==data)
        {
            head=head->next;
            control=1;
        }
    } 
    else
    {
        while(delet!=NULL)
        {
            if(delet->data==data)
            {
                control=1;
                break;
            }
            pre=delet;
            delet=delet->next;
        }    
        if(control==1)//bulunmadan assağıdaki kodu çalıştırrısa seg faoult verir pre->next=NULL çünkü.
            pre->next=pre->next->next;
    }
    if(control==0)
        printf("\nthe value could not be found");
    else
        free(delet);
    return head;
}
node* destroy(node * head)
{
    node *delet;
    while(head!=NULL)
    {
        delet=head;
        head=head->next;
        free(delet);
    }
    return head;
}
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
node* rekursif_destroy(node* head)
{
    if(head==NULL)
        return head;
    rekursif_destroy(head->next);
    free(head);
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
void rekursif_reversePrint(node *head)
{
    if(head==NULL)
        return;
    rekursif_reversePrint(head->next);
    printf("\n%d",head->data);
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