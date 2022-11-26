#include "queue_list2.h"
int main()
{
    queue q;
    initiaize(&q);
    enqueue(&q,10);
    enqueue(&q,11);
    enqueue(&q,12);
    
    printf("\n%d",dequeue(&q));
    enqueue(&q,13);
    printf("\n%d",dequeue(&q));
    printf("\n%d",dequeue(&q));
    printf("\n%d",dequeue(&q));
    printf("\n%d",dequeue(&q));
    return 0;
}
/* output
10
11
12
13
the queue is empty 
-100
*/