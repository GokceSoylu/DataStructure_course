#include "stack_list.h"
int main()
{
    stack s;
    initialize(&s);
    push(&s,10);
    push(&s,9);
    push(&s,8);
    s=reverse(&s);
    while(!isEmpty(&s))
        printf("\n%d",pop(&s));
    return 0;
}
stack reverse(stack *s)
{
    stack ss;
    while(!isEmpty(s))
        push(&ss,pop(s));
    return ss;
}