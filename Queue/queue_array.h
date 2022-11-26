#include <stdio.h>
#include <stdio.h>
#define QUEUE_SIZE 5
typedef struct 
{
    int cnt, rear, front, data[QUEUE_SIZE];
}queue;
int isEmpty(queue *q)
{
    if(q->cnt==0) return 1;
    else return 0;
}
int isFull(queue *q)
{
    if(q->cnt==QUEUE_SIZE-1) return 1;
    else return 0;
}
void initialize(queue *q)
{
    q->cnt=0;
    q->rear=-1;
    q->front=0;
}
void enqueue(queue *q, int data)
{
    if(isFull(q)) printf("\nthe queue is full");
    else
    {
        q->data[++q->rear]=data;
        q->cnt++;
        if(q->rear==QUEUE_SIZE-1) q->rear=-1;
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
        int x=q->data[q->front++];
        q->cnt--;
        if(q->front==QUEUE_SIZE) q->front=0;
        return x;
    }
}
