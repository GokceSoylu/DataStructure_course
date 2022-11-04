#include "stack_list.h"
int main()
{
    char string[100];
    stack s;
    int i, cnt=0;
    scanf("%s",string);
    for(i=0;string[i];i++)
    {
        if(string[i]=='(') push(&s,1);
        else if(string[i]==')') if(pop(&s)==-100)
        {
            printf("\nyazilan ifade de parantez haatsi vardir");
            cnt=1;
            break;
        } 
    }
    if(s.cnt!=0) printf("\nyazilan ifade de parantez hatasi vardir");
    else if(cnt==0) printf("\nyazilan ifade de parantez hatasi yoktur");
    return 0;
}