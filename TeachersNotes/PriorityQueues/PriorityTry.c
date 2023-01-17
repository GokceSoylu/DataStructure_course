#include "PriorityQueue.h"
int main()
{
    int i,array[10]={0,20,12,17,8,3,5,0,0,0};
    for(i=1;i<10;i++)
        printf("\t%d",array[i]);
    printf("\n");
    insert(array,25,7);
    for(i=1;i<10;i++)
        printf("\t%d",array[i]);
    printf("\n");
    printf("deleted %d\n",deleteToMax(array,8));
    printf("\n");
    for(i=1;i<10;i++)
        printf("\t%d",array[i]);
    return 0;
}