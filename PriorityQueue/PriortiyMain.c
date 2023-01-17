#include "priortyQueue.h"
int main()
{
    int i,array[10]={0,1,5,6,20,0,0,0,0,0};
    for(i=1;i<10;i++)
        printf("\t%d",array[i]);
    printf("\n");
    insertToMin(array,4,5);
    for(i=1;i<10;i++)
        printf("\t%d",array[i]);
    printf("\n");
    printf("deleted %d\n",deleteToMin(array,6));
    printf("\n");
    for(i=1;i<10;i++)
        printf("\t%d",array[i]);
    return 0;
}