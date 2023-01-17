#include <stdio.h>
int edges(int A[][5],int boyut )
{
    int i,j, result=0;
    for(i=0;i<boyut;i++)
        for(j=0;j<boyut;j++)
            result+=A[i][j];
    return result;
}
int degree(int A[][5],int v, int n)
{
    int result=0,i;
    for(i=0;i<n;i++)
        result+=A[v][n];
    return result;
}
int main()
{
    int n=5,i;
    int A[5][5]={{0,1,1,1,0},
                 {1,0,0,1,0},
                 {1,0,0,1,1},
                 {1,1,1,0,1},
                 {0,0,1,1,0}};
    int degree_sum=0;
    printf("\nedges = %d\n",edges(A,5));
    for(i=0;i<n;i++)
    {
        degree_sum+=degree(A,i,n);
        printf("\nthe degree of vertex %d = %d",i+1,degree(A,i,n));
    }
    return 0;
}

