#include "Graph.h"
int main()
{
    int a[5][5]={{0,1,1,1,0},
                  {1,0,0,1,0},
                  {1,0,0,1,1},
                  {1,1,1,0,1},
                  {0,0,1,1,0}};
    int i;
    printf("the max degree = %d",maxDegree(a,5));
    for(i=0;i<5;i++)
        printf("\nthe degree of vertex%d = %d",i,degree(a,i,5));
    return 0;

}