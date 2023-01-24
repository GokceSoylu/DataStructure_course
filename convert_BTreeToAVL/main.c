#include "AVL.h"
#include "BST.h"
void storeArray(BST node,int a[], int *index)
{
    if(node!=NULL)
    { 
        a[*index]=node->data;
        (*index)++;
        storeArray(node->left,a,index);
        storeArray(node->right,a,index);
    }
}
AVLTree* convertAVL(int a[])
{
    AVLTree* node=NULL;
    int i=-1;
    while(++i!=8)
        node=insert(node,a[i]);
    return node;
}
int main()
{
    //Crreating a Binary Search Tree
    BST head=NULL;
    head=add(head,60);
    head=add(head,35);
    head=add(head,20);
    head=add(head,15);
    head=add(head,17);
    head=add(head,72);
    head=add(head,65);
    head=add(head,30);

    //creat an array
    int array[20]={0}, *index=(int*)malloc(sizeof(int));
    *index=0;

    //store the bst in the array
    storeArray(head,array,index);
       
    //and convert it an AVL :)) 
    AVLTree *node=NULL;
    node=convertAVL(array);
    printf("\n\n");
    preOrder(node);
    return 0;
}
