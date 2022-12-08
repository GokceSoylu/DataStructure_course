#include "BST.h"
int main()
{
    BST root=NULL;
    root=add(root,12);
    root=add(root,200);
    root=add(root,190);
    root=add(root,213);
    root=add(root,56);
    root=add(root,24);
    root=add(root,18);
    root=add(root,27);
    root=add(root,28);
    traverse_in(root);
    if(search_general(root,28)) printf("\nvar");
    else printf("\nyok");
    printf("\nmax = %d",max(root));
    printf("\nmin = %d",min(root));
    root=delete(root,56);
    traverse_pre(root);
    printf("\nmax = %d",max(root));
    printf("\nmin = %d",min(root));
    return 0;//perfect :))
}