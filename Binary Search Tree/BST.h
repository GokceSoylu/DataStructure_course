#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    struct tree *left, *right;
};
typedef struct tree tree;
typedef tree *BST;
BST add(BST root, int data)
{
    if(root==NULL)
    {
        BST root=(BST)malloc(sizeof(tree));
        root->left=root->right=NULL;
        root->data=data;
        return root;
    }    
    if(root->data < data)
    {
        root->right=add(root->right, data);
        return root;
    }    
    root->left=add(root->left, data);
    return root;
}
void traverse_in(BST root)
{
    if(root==NULL) return;
    traverse_in(root->left);
    printf("\n%d",root->data);
    traverse_in(root->right);
}
void traverse_pre(BST root)
{
    if(root==NULL) return;
    printf("\n%d",root->data);
    traverse_pre(root->left);
    traverse_pre(root->right);
}
void traverse_pos(BST root)
{
    if(root==NULL) return;
    traverse_pos(root->left);
    traverse_pos(root->right);
    printf("\n%d",root->data);
}