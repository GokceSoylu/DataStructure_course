#include <stdio.h>
#include "queue_array.h"
int main()
{
    queue q;
    initialize(&q);
    enqueue(&q, 4);
    enqueue(&q, 5);
    enqueue(&q, 1);
    enqueue(&q, 6);
    enqueue(&q, 10);
    printf("\n%d",dequeue(&q));
    printf("\n%d",dequeue(&q));
    enqueue(&q,8);
    printf("\n%d",dequeue(&q));
    printf("\n%d",dequeue(&q));
    
    return 0;
}