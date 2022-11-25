#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *pre, *next;
};
typedef struct Node node;
node* create_(void)
{
    node* head=(node*)malloc(sizeof(node));
    head->next=NULL;
    head->pre=NULL;
    return head;
}
node* addLast(int data, node *head)
{
    node* tmp=(node*)malloc(sizeof(node));
    node *p=head;
    tmp->data=data;
    tmp->next=NULL;
    if(p!=NULL)
    {
        
        while(p->next!=NULL)
            p=p->next;
        p->next=tmp;
        tmp->pre=p;
        
        return head;
    }
    else
        tmp->pre=NULL;
    return tmp;
}
void addAfter(int data, node *head)//after dan sonraki yere ekler
{
    node* tmp=(node*)malloc(sizeof(node));
    tmp->data=data;
    tmp->next=NULL;
    while(head->data!=data)
        head=head->next;
    head->next=tmp;
    tmp->pre=head;
}
node* addFirst(int data, node* head)
{
    node* tmp=(node*)malloc(sizeof(node));
    tmp->data=data;
    head->pre=tmp;
    tmp->next=head;
    head=tmp;
    head->pre=NULL;
    return head;
}
node* deleteNode(int data, node* head)
{
    node *dlt, *p=head;
    if(p==NULL)
    {
        printf("\nthe list iss empty\n");
        return p;
    }
    if(p->data==data)//tek elemanlıda olabilir
    {
        dlt=head;
        head=NULL;
        free(dlt);
        return head;
    }
    while(p->next!=NULL && p->next->data!=data)
        p=p->next;
    if(p->next->data==data)//todo really :))
    {
        dlt=p->next;
        p->next=p->next->next;
        if(dlt->next!=NULL)
            dlt->next->pre=p;
        free(dlt);
    }
    else
        printf("\naranan eleman listede bulunamamistir\n");
    return head;
}
