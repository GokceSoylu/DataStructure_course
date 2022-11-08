#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p=NULL, *pp;
    int a;
    p=&a;
    printf("\n%d",*p);
    printf("\n&a = %p",&a);
    p=NULL;
    pp=0x16db0f414;
    printf("%d",*pp);
    return 0;
}//direkt adress atayayaım dedimd olmadı ya🥲