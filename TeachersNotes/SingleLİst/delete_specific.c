#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data; 
    struct Node *next;
};
typedef struct Node node;
node* delete(node *head, int data)//basta ortada sonda bos tek eleman
{
    node *delete=head, *pre;
    int control=0;//bu olmadığında 
    if(head==NULL)//boşsa normalde olmasada hata almayız ancak boş olma durumda belirtmek istedim.
    {
        printf("\nthe list is empty");
        return head;
    }
    else if(head->data==data)
    {
        head=head->next;
        control=1;
    }
    else if(head->next==NULL)//tek elemanlıysa
    {
        if(head->data==data)
        {
            head=head->next;
            control=1;
        }
    } 
    else
    {
        while(delete!=NULL)
        {
            if(delete->data==data)
            {
                control=1;
                break;
            }
            pre=delete;
            delete=delete->next;
        }    
        if(control==1)//bulunmadan assağıdaki kodu çalıştırrısa seg faoult veriri pre->next=NULL çünkü.
            pre->next=pre->next->next;
    }
    if(control==0)
        printf("\nthe value could not be found");
    else
        free(delete);
    return head;
}
void print(node *head)
{
    printf("\n\n");
    while(head!=NULL)
    {
        printf("\n%d",head->data);
        head=head->next;
    }
}
int main()
{
    node *head=NULL, *p=(node*)malloc(sizeof(node));
    int data;
    printf("\nto stop recording please enter -1");
    while(1)
    {
        scanf("%d",&data);
        if(data==-1) break;
        if(head==NULL)
            head=p;
        else
        {
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
        }
        p->data=data;
    }
    p->next=NULL;
    print(head);
    printf("\nwhich value do want to delete ");
    scanf("%d",&data);
    head=delete(head, data);
    print(head);
    return 0;
}