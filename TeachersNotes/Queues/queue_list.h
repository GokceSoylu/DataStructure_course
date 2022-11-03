#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 10
struct node
{
    int data;
    struct node* next;
};
typedef struct node node;
typedef struct 
{
    int cnt;
    struct node *front;
    struct node *rear;
}queue;
void initialize(queue *q)
{
    q->cnt=0;
    q->front=q->rear=NULL;
}
int isFull(queue *q)
{
    if(q->cnt==QUEUE_SIZE)
        return 1;
    else
        return 0;
}
int isEmpty(queue *q)
{
    if(q->cnt==0)
        return 1;
    else
        return 0;
}
void enqueue(queue *q, int x)
{
    if(isFull(q))
        printf("\the queue is full");
    else
    {
        node *tmp=(node*)malloc(sizeof(node));
        tmp->data=x;
        tmp->next=NULL;
        if(isEmpty(q))
            q->front=q->rear=tmp;
        else
        {
            q->rear->next=tmp;
            q->rear=tmp;
        }    
        q->cnt++;
    }
}
int dequeue(queue *q)//tek elemamlıysa
{
    if(isEmpty(q))
    {
        printf("\nthe queue is empty");
        return -100;
    }    
    else
    {
        node *tmp=q->front;//(node*)malloc(sizeof(node));
        int x=tmp->data;
        q->front=q->front->next;//yada q->front=tmp->next;
        free(tmp);
        q->cnt--;
        return x;
    }
}