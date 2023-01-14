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
    node->height=1;
    return node;
}
int max(int a, int b)
{
    return (a>b)?a:b;
}
int height(AVLTree *node)
{
    if(node==NULL) return 0;
    return node->height;
}
int getBalance(AVLTree *node)
{
    if(node==NULL) return 0;
    return height(node->left)-height(node->right);
}
/*
AVLTree* rightRotate(AVLTree *z)
{
    AVLTree *y=z->left;
    
    z->left=y->right;
    y->right=z;

    z->height=1+max(z->left->height,z->right->height);
    y->height=1+max(y->left->height,y->right->height);

    return y;
}
AVLTree* leftRotate(AVLTree *z)
{
    AVLTree *x=z->right;
    
    x->left=z;

    x->height=1+max(x->left->height,x->right->height);

    return x;
}
*/
 
AVLTree* rightRotate(AVLTree* y){
    AVLTree* x = y->left;
    AVLTree* T2 = x->right;
 
    x->right = y;
    y->left = T2;
 
    x->height = max(height(x->right), height(x->left)) + 1;
    y->height = max(height(y->right), height(y->left)) + 1;
 
    return x;
}
 
AVLTree* leftRotate(AVLTree* x){
    AVLTree* y = x->right;
    AVLTree* T2 = y->left;
 
    y->left = x;
    x->right = T2;
 
    x->height = max(height(x->right), height(x->left)) + 1;
    y->height = max(height(y->right), height(y->left)) + 1;
 
    return y;
}
AVLTree* insert(AVLTree *node, int data)
{
    //NULL olma durumu yeni node creating
    if(node==NULL)
    {
        return createNode(data);
    }
    
    //doğru yeri bulma ve ekleme
    if(node->data>data)
        node->left=insert(node->left,data);
    else if(node->data<data)
        node->right=insert(node->right,data);
    
    //yükseklik güncelleme
    node->height=1+max(height(node->left), height(node->right));
    
    //denge hesabı
    int b=getBalance(node);

    //left left rotation
    if(b>1 && data < node->left->data)
        return rightRotate(node);
   
    //right right rotation
    if(b < -1 && data > node->right->data)
        return leftRotate(node);
    
    //left right rotation
    if(b>1 && data > node->left->data)
    {
        node->left=leftRotate(node->left);
        return rightRotate(node);
    }

    //right left rotation
    if(b<-1 && data < node->right->data)
    {
        node->right=rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}
void preOrder(AVLTree *node)
{
    if(node!=NULL)
    {
        printf("\n%d",node->data);
        preOrder(node->left);
        preOrder(node->right);
    } 

}




//#include "AVL.h"
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