#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    struct tree *right, *left;
};
typedef struct tree *BTREE;
/*int count(BTREE root)
{
    if(root->right!=NULL)
        return 1+count(root->right);
    if(root->left!=NULL) 
        return 1+count(root->left);
}*/
int count(BTREE root)
{
    if(root==NULL)
        return 0;
    if(root->right==root->left)
        return 0;
    return 1+count(root->left)+count(root->right);
}
BTREE add(BTREE root, int data)
{
    if(root==NULL)
    {
        root=(BTREE)malloc(sizeof(struct tree));
        root->data=data;
        root->right=root->left=NULL;
    }
    else
    {
        if(root->data > data)
            root->left=add(root->left,data);
        else
            root->right=add(root->right,data); 
    }  
    return root;
}
int main()
{
    BTREE tmp,root=(BTREE)malloc(sizeof(struct tree));//
    root->right=(BTREE)malloc(sizeof(struct tree));
    root->left=(BTREE)malloc(sizeof(struct tree));
    root=add(root,20);
    root=add(root,10);
    root=add(root,7);
    root=add(root,11);
    root=add(root,22);
    root=add(root,21);
    root=add(root,23);
    printf("%d",count(root));
    return 0;
}