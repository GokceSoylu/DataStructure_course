#include <stdlib.h>
#include <stdio.h>
#define QUEUE_SIZE 10
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
typedef struct
{
    int cnt;
    node *front, *rear;//rear is last, front is head
}queue;
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
void initiaize(queue *q)
{
    q->cnt=0;
    q->front=q->rear=NULL;
}
void enqueue(queue *q, int data)
{
    if(isFull(q))
        printf("\nthe queue is full");
    else
    {
        node *tmp=(node*)malloc(sizeof(node));
        tmp->data=data;
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
int dequeue(queue *q)
{
    if(isEmpty(q))
    {
        printf("\nthe queue is empty");
        return -100;
    }
    else
    {
        int data=q->front->data;
        node *dlt=q->front;
        q->front=q->front->next;
        free(dlt);
        q->cnt--;
        return data;
    }
   
}
