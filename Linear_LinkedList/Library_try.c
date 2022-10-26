#include <stdio.h>
#include <stdlib.h>
#include "list.h"
/*struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;*/
int main()
{
    node *head=NULL, *p=NULL;
    head=create(head);
    print(head);
    head=add(head,25,3);
    print(head);
    p=node_search(head, 25);
    printf("\n p->data = %d",p->data);
    printf("\n25 var mi =  %d",rekursif_search(head,25));

    return 0;
}