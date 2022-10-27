#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
     struct Node *next;
};
typedef struct 
{
    int cnt;
    struct Node *top;
}stack;

