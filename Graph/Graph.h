#include <stdio.h>
#include <stdlib.h>

int edges(int array[][5],int boyut)//graph'taki toplam kenar sayısını bulur. hocanın yazdığı kodda boyut yok bn ekledim :)
{
    int i,j, edges=0;
    for(i=0;i<boyut;i++)
        for(j=0;j<boyut;j++)
            edges+=array[i][j];
    return edges;
}
int degree(int A[][5],int vertex, int boyut)//Belirli bir vertexteki edges sayısnı blur. Yani belirli satırdaki toplamı bulur.
{
    int i, degree=0;
    for(i=0;i<boyut;i++)
        degree+=A[vertex][i];
    return degree;
}
int maxDegree(int A[][5],int boyut)//graph taki en yüksek dereceyi bulur
{
    int i, j, max=0, degree;
    for(i=0;i<boyut;i++)
    {
        degree=0;
        for(j=0;j<boyut;j++)
            degree+=A[i][j];
        if(max<degree)
            max=degree;
    }  
    return max;  
}
int edgesList()
{
    
}