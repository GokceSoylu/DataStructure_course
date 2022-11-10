#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right, *left;
};
typedef struct node *BTREE;

/*create a new node*/
BTREE new_node(int data)//eğer btree yi pointer yapmadıysan return e * koyarız
{
    BTREE p;
    p=(BTREE)malloc(sizeof(struct node));//buradan pointerlık yer ayırdam ne olur
    p->data=data;
    p->left=p->right=NULL;
    return p;
}
BTREE insert(BTREE root, int x)
{
    if(root==NULL)//for new node
        root=new_node(x);
    else//for find correct location
    {
        if(x<root->data)
            root->left=insert(root->left,x);
        else    root->right=insert(root->right,x);
    }
    return root;
}
/*get number from user till -1 */
