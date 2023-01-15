#include "AVL.h"
int main()
{
    AVLTree *root=NULL;
    root=insert(root,1);
    root=insert(root,2);
    root=insert(root,4);
    root=insert(root,5);
    root=insert(root,6);
    root=insert(root,3);
    preOrder(root);
    return 0;
}