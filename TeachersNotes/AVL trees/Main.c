#include "AVL.h"
int main()
{
    AVLTree *root=NULL;
    root=insert(root,60);
    root=insert(root,35);
    root=insert(root,20);
    root=insert(root,15);
    root=insert(root,17);
    root=insert(root,30);
    root=insert(root,72);
    root=insert(root,65);    
    preOrder(root);
    return 0;
}