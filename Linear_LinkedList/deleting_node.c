#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *delete(struct node *head, int x)
{
    if(head!=NULL)
    {
        struct node *tmp=head;
        if(head->data==x)
        {
            head=head->next;
            free(tmp);
        }
        else
        {
            while(tmp->next!=NULL && tmp->next->data!=x)
                tmp=tmp->next;
            if(tmp->next==NULL)
                return head;//aranana yoksa
            struct node *deleted=tmp->next;//olamda silebilir misin?
            tmp->next=deleted->next;//delelted->next=NULL olduğu için son elelmanı dahi silsen hata almaız
            free(deleted);  
        }
    }
    return head;
}
