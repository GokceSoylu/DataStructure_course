#include "stack_list.h"
stack reverse(stack *s);
int main()
{
    stack s,*ss;
    initialize(&s);
    push(&s,10);
    push(&s,9);
    push(&s,8);
    push(&s,7);
    s=reverse(&s);
    while(!isEmpty(&s))
        printf("\n%d",pop(&s));
    return 0;
}
stack reverse(stack *s)
{
    stack ss;
    initialize(&ss);
    while(!isEmpty(s))
        push(&ss,pop(s));
    return ss;
}