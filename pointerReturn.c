#include <stdio.h>
void fonk(int** p)
{
    int b=40;
    *p=&b;
}
int main()
{
    int a=20;
    int *p=&a;
    int **pp=&p;
    fonk(pp);
    printf("%d",*p);
    return 0;//pointeri adresiyle gondermiyoruz 
    //sadece tuttuğu adresi kopyalayıp gönderiyoruz
}