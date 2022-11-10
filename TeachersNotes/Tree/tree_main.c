#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    BTREE myroot=NULL;
    int i;
    scanf("%d",&i);
    while(i!=-1)
    {
        myroot=insert(myroot,i);
        scanf("%d",&i);
    }
    return 0;
}