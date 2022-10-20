struct node*delete(srruct node *head, int x)
{
    if(head!=NULL)
    {
        struct node *tmp=head;
        if(head->data==x)
        {
            head=head->next;
            free(tmp);
            head->pre=NULL;
        }
        else
        {
            while(tmp!=NULL && tmp->data!=x)
                tmp=tmp->next;
            tmp->pre->next=tmp->next;
            if(tmp->next!=NULL)
                tmp->next->pre=tmp->pre;
            
        }
    }
    return head;
}