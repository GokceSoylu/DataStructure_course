#include <stdio.h>//listeyse başa orrtaya sona ekelme eğer bir düğüm varsa boş olma durumu
#include <stdlib.h>
struct node
{
    int data;
    int height;
    struct node *right;
    struct node *left;
};
typedef struct node AVLTree;
AVLTree* createNode(int data)
{
    AVLTree *node=(AVLTree*)malloc(sizeof(AVLTree));
    node->data=data;
    node->right=NULL;
    node->left=NULL;
    node->height=0;
    return node;
}
int max(int a, int b)
{
    return (a>b) ? a:b;
}
int height(AVLTree *node)
{
    if(node==NULL) return -1;
    else return node->height;
}
AVLTree* rightRotate(AVLTree *z)
{
    AVLTree *y=z->left;
    z->left=y->right;
    y->right=z;

    z->height=max(z->left->height,z->right->height);
    y->height=max(y->left->height,y->right->height);

    return y;
}
AVLTree* leftRotate(AVLTree *z)
{
    AVLTree *x=z->right;
    z->right=x->left;
    x->left=z;

    x->height=max(x->left->height,x->right->height);
    z->height=max(z->left->height,z->right->height);

    return x;
}
