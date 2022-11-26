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

void initiaize(queue *q)
{
    q->cnt=0;
    q->front=q->rear=NULL;
}
void push(queue *q, int data)
{
    if(isFull(q))
        printf("\nthe queue is full");
    else
    {
        node *tmp=(node*)malloc(sizeof(node));
        tmp->data=data;
        tmp->next=q->top;
        q->top->tmp;
        q->cnt++;
    }
}
int pop(queue *q)
{
    if(isEmpty(q))
    {
        printf("\nthe queue is empty");
        return -100;
    }
    else
    {
        node *dlt=q->top;
        q->top=q->top->next;
        free(dlt);
        q->cnt--;
    }
}
int isFull(queue *q)
{
    if(q->cnt==QUEUE_SIZE) return 1;
    else return 0;
}
