#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    struct tree *left, *right;
};
typedef struct tree tree;
typedef tree *BST;
BST add(BST root, int data)// works👍🏻
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
void traverse_in(BST root)// works👍🏻
{
    if(root==NULL) return;
    traverse_in(root->left);
    printf("\n%d",root->data);
    traverse_in(root->right);
}
void traverse_pre(BST root)// works👍🏻
{
    if(root==NULL) return;
    printf("\n%d",root->data);
    traverse_pre(root->left);
    traverse_pre(root->right);
}
void traverse_pos(BST root)// works👍🏻
{
    if(root==NULL) return;
    traverse_pos(root->left);
    traverse_pos(root->right);
    printf("\n%d",root->data);
}
int search_general(BST root, int data) // çok güzel oldu yaa. works 👍🏻
{
    if(root==NULL) return 0;
    if(data==root->data) return 1;
    if(search_general(root->right,data)==1) return 1;
    if(search_general(root->left,data)==1)return 1;
    return 0;
}
int search(BST root, int data)//works 👍🏻
{
    int x=0;
    if(root==NULL) return 0;
    if(root->data==data) return 1;
    if(data<root->data) x=search(root->left,data);
    else x=search(root->right,data);
    return x;
}
int max(BST root)
{
    while(root->right!=NULL) root=root->right;
    return root->data;
}
int min(BST root)
{
    while(root->left!=NULL) root=root->left;
    return root->data;
}
BST delete(BST root,int data)
{
    if(root==NULL) return NULL;
    if(root->data == data) 
    {
        if(root->right==NULL && root->left==NULL) return NULL;
        if(root->right!=NULL)
        {
            root->data=min(root->right);
            root->right=delete(root->right,min(root->right));
            return root;
        }
        root->data=max(root->left);
        root->left=delete(root->left,max(root->left));
        return root; 
    }
    if(data<root->data)
    {
        delete(root->left,data);
        return root;
    } 
    root->right=delete(root->right,data);
    return root;
}
int numberOf_Nodes(BST node)
{
    if(node==NULL) return 0;
    return numberOf_Nodes(node->left)+numberOf_Nodes(node->right)+1;
}
int parentNodes(BST node)
{
    if(node==NULL || node->left==NULL && node->right==NULL )  return 0;

    return parentNodes(node->left)+parentNodes(node->right)+1;
}