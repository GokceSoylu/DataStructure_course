#include <stdio.h>//normal linked list sadece null yok :)) baktın sona mı geldin hooop başa sarıyosun tekrar :)
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node* createList(int data)
{
    node *head=(node*)malloc(sizeof(node));
    head->data=data;
    head->next=head;
    return head;
}
node* addFirst(int data, node *head)
{
    node* tmp=(node*)malloc(sizeof(node));
    tmp->data=data;
    if(head==NULL)
    {
        head=tmp;
        tmp->next=head;
    }    
    else
    {
        node *last=head->next;
        while(last->next!=head)
            last=last->next;
        last->next=tmp;
        tmp->next=head;
        head=tmp;//todo dikkat edelim sadece bu kısmı sildiğimizde addLast fonksiyonu oluyor :))
    }
    return head;
}
node* addLast(int data, node* head)
{
    node *tmp=(node*)malloc(sizeof(node));
    tmp->data=data;
    if(head==NULL)
    {
        head=tmp;
        tmp->next=head;
    }
    else
    {
        node *last=head;
        while(last->next!=head)
            last=last->next;
        last->next=tmp;
        tmp->next=head;
    }
    return head;
}
int countList(node* head)
{
    int counter=0;
    node *p;
    if(head==NULL)
        return counter;
    else
        counter++;
    p=head->next;
    while(p!=head)
    {
        counter++;
        p=p->next;
    }    
    return counter;
}
int countList2(node *head)
{
    int counter=0;
    if(head==NULL)
        return counter;
    node *p=head;
    do
    {
        counter++;
        p=p->next;
    } while (p!=head);
    return counter;
}
void printList(node* head)
{
    node *p=head;
    if(head->next==head)
    { 
        printf("\nthe list is empty");
    }
    do
    {
        printf("\n%d",p->data);
        p=p->next;
    } while (p!=head);
}