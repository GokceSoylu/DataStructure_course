#include <stdio.h>
#define SIZE 10
void swap(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp; 
}
void insertToMin(int*array, int data,int i)
{
    if(i==SIZE)
        printf("the heap is full");
    else
    {
        array[i]=data;
        while(i!=1 && array[i] < array[i/2])
        {
            swap(&array[i],&array[i/2]);
            i=i/2;
        }
    }
}


int deleteToMin(int* array, int index)
{
    int i=1, min;
    if(index==1)
    {
        printf("the heap is empty");
        return 0;
    }
    else
    {
        //silinecek eleamnı koruyoruz
        min=array[i];

        //sondaki elemanı başa atıyoruz
        array[i]=array[index-1];
        array[index-1]=0;

        //parent'ın child'dan küçük olmasını sağlıyoruz
        while((i*2+1)<SIZE &&(array[i]>array[i*2] || array[i]>array[(2*i)+1]))
        {
            //hangisinin daha küçük olduğunu kontrol ediyoorz. kardeş kıyası
            if(array[i*2]<array[(i*2)+1])
            {
                //sıfır olup olmadığını kontrol ediyoruz sona ulamış boş kısma ulaşmış olabiliriz
                if(array[i*2]!=0)
                {
                    swap(&array[i],&array[i*2]);
                    i=i*2;
                }
                else break;
            }    
            else
            {
                if(array[i*2+1]!=0)
                {
                    swap(&array[i],&array[i*2+1]);
                    i=(i*2)+1;
                }
                else break;  
                
            }   
        }
        return min;
    }
}