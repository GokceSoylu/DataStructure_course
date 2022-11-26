#include <stdio.h>
int main()
{
    int a;
    int b=++a=11;
    printf("\n%d",b);//12
    return 0;
}