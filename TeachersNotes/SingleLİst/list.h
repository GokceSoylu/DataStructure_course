#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
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
