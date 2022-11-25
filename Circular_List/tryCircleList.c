#include "Circular_List.h"
int main()
{
    node * head=createList(10);
    head=addFirst(9,head);
    head=addFirst(8,head);
    head=addLast(11,head);
    printf("\nnumber of nodes in the list = %d",countList(head));
    printf("\n2 the number of nodes = %d",countList2(head));
    printList(head);
    return 0;
}