#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 4
typedef struct
{
    int data;
    struct node *next;
}node;
typedef struct
{
    int cnt;
    int front, rear;
    int data[QUEUE_SIZE];
}queue;
void initialize(queue *q)
{
    q->cnt=0;
    q->rear=-1;
    q->front=0;

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
        printf("\nteh queue is full\n");
    else
    {
        q->rear++;
        q->cnt++;
        if(q->rear==QUEUE_SIZE)
            q->rear=0;
        q->data[q->rear]=x;
    }
}
int dequeue(queue *q)
{
    if(isEmpty(q))
    {
        printf("\nthe queue is empty \n");
        return -100;
    }    
    else
    {
        int x=q->data[q->front];
        q->front++;
        q->cnt--;
        if(q->front==QUEUE_SIZE)
            q->front=0;
        return x;
    }
}