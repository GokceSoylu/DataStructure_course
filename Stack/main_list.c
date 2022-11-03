#include <stdio.h>
#include "stack_list.h"
int main()
{
    stack s;
    int data, i;
    initialize(&s);
    printf("\nsadece initilize ettik bu yğzden henüz counter = %d",s.cnt);//0
    printf("\nstack'in tban değeri ");
    scanf("%d",&data);
    push(&s, data);
    for(i=0;i<4;i++)
    {
        push(&s,(s.cnt+1)*data);
    }
    printf("\ntum stack'i doldurduğumuz içn artik counter = %d",s.cnt);//5
    printf("\n\nsimdi de pop fonksiyonu sayesinde stack'in degerlerini silerken ekrana yazdiralim\n\n");
    for(i=0;i<5;i++)
        printf("\n%d",pop(&s));
    printf("\nstack'in tmamami bosaldi bu yuzden counter = %d",s.cnt);
    return 0;
}//dikkat ettik mi fonksiyonlarda arrow(stc->) kullanırken burada dot(stc.) kulandık. çünkü struct yapısında içeriğe ulaşmada nokta kullanılır
//biz fonksiyona adresle göndersiğimiz için fonksiyon içerisinde pointer gibi davaranır. 