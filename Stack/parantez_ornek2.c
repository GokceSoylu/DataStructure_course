#include "stack_list.h"
int main()
{//uyuşup uyuşmaduğınaad bakıcaz
    char string[100];
    int i, cnt=0;
    stack s;
    initialize(&s);
    printf("\nkontrol etmek istediğiniz ifadeyi giriniz lutfen ");
    scanf("%s",string);
    for(i=0;string[i];i++)
    {
        if(string[i]=='(')
            push(&s,1);
        else if(string[i]=='[')
            push(&s,2);
        else if(string[i]=='{')
            push(&s,3);
        else if(string[i]==')')
            if(s.cnt!=0 && s.top->data==1) pop(&s);
            else 
            {
                printf("\nyazilan ifade de parantez hatasi vardir");
                cnt=1;
                break;
            }
        else if(string[i]==']') 
            if(s.cnt!=0 && s.top->data==2) pop(&s);
            else 
            {
                printf("\nyazilan ifade de parantez hatasi vardir");
                cnt=1;
                break;
            }
        else if(string[i]=='}')
            if(s.cnt!=0 && s.top->data==3) pop(&s);
            else 
            {
                printf("\nyazilan ifade de parantez hatasi vardir");
                cnt=1;
                break;
            }
    }
    if(s.cnt!=0 && cnt==0) printf("\nyazilan ifade de parantez hatasi vardir");
    if(s.cnt==0 && cnt==0) printf("\nyazilan ifade de parantez hatsi yoktur");
    return 0;
}