#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *pre;
    struct node *next;
};
typedef struct node node;
node* createList(int data)
{
    node *head=(node*)malloc(sizeof(node));
    head->pre=NULL;
    head->pre=NULL;
    head->data=data;
    return head;
}
node* addFront(node* head, int data)
{
    node *tmp=(node*)malloc(sizeof(node));
    tmp->data=data;
    tmp->pre=NULL;
    tmp->next=head;
    if(head!=NULL)
        head->pre=tmp;
    head=tmp;
    return head;
}
node* addLast(int data, node* head)
{
    node* tmp=(node*)malloc(sizeof(node));
    tmp->pre=NULL;
    tmp->data=data;
    if(head==NULL)   
        head=tmp;
    else
    {
        node *last=head;
        while(last->next!=NULL)
            last=last->next;
        last->next=tmp;
        tmp->pre=last;
    }
    return head;
}
node* deleteNode(int data, node* head)
{
    node *dlt=head;
    if(head!=NULL)
    {
        if(head->data==data)
        {
            head=head->next;
            head->pre=NULL;
            free(dlt);
        }
        else
        {
            while(dlt!=NULL && dlt->data!=data)
                dlt=dlt->next;
            if(dlt==NULL)
            {
                printf("\nthe data does not exist in the list\n");
                return head;
            }
            dlt->pre->next=dlt->next;
            if(dlt->next!=NULL)
                dlt->next->pre=dlt->pre;
        }
    }
    return head;
}