#include "BST.h"
int main()
{
    BST root=add(root,12);
    root=add(root,200);
    root=add(root,190);
    root=add(root,213);
    root=add(root,56);
    root=add(root,24);
    root=add(root,18);
    root=add(root,27);
    root=add(root,28);
    traverse_in(root);
    return 0;
}