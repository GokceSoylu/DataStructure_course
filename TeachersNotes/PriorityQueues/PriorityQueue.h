#include <stdio.h>//ekleme silem
#define SIZE 5
void insert(int *array, int data, int index)
{
    if(index==SIZE)
        printf("heap is full");
    else
    {
        array[index]=data;    
        while(index!=1 && array[index/2]<array[index])
        {
            swap(&array[index/2],&array[index]);
            index=index/2;
        }
    }
}
void swap(int *a, int *b)
{
    int *tmp=a;
    a=b;
    b=tmp;
}
int deleteToMax(int*array, int index)//index ilk boş elemenı gösteriri
{
    int i=1,max;//ilk elemanı silyoruz. çünkü en büyük/en küçük priority önxelikli olanı siliyoruz 
    if(index==0) 
    {
        printf("heap is empty");
        return 0;
    }
    //silinen elemanı koruyruz
    max=array[i];
    
    //son elemanı başa alıyoruz
    array[i]=array[index-1];
    array[index-1]=0;

    //en büyüğü başa alama parant çaçuklardan büyük mü değil mi kontrolu
    while(i<index && (array[i*2]>array[i] || array[i*2+1]>array[i]))
    {
        if(array[i*2]>array[i*2+1])
        {
            swap(&array[i*2],&array[i]);
            i*=2;
        }    
        else
        {
            swap(&array[i*2+1],&array[i]);

            i*=2+1;
        }    
        
    }
    return max;
}