#include <stdlib.h>
#include <stdio.h>
//stack_list.h dosyasında dersteki yöntem şeklinde yazmıştık burada ise daha farlı bir metod ile aynı fonksiyonları yazıyoruz
//derste listeyi bir struct yapısının içine oluşturduk bunu bir liste ve int counter değerlerini bir yapıda tutmka için yaptık
//counter değeri kullnamak istemezsek listeyi bir structin içinde olutrumaya gerek yok. Nasıl yani sadece liste olutrurup buna stack mi diyicez?
//evet liste bir stack'tir zaten :)). 
//şimdi struct(struct  stack)olmadan oluşturduk o zaman fonlsiyonlara stack *stc değeri gönderemeyiz. fonksiyonlarımızın mantığı aynı kalmakla
//beraber ufak değişiklikler yapıyoruz.
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node* push(node *top, int data)
{
    node *p=(node*)malloc(sizeof(node));
    p->data=data;
    p->next=NULL;
    if(top==NULL)
        top=p;
    else
    {
        node *last=top;
        while(last->next!=NULL) last=last->next;
        last->next=p;
    }
    return top;
}
int pop(node *top)//burada bir sıkıntımız var ilk düğmü hiç silemiyor
{                  //çünkü bunun için top değerini NULL yapmalı ama return'lemediği için  
    if(top==NULL)   //top değerinin değiştiremiyoruz.
    {
        printf("\nthe stack is empty ");
        return -100;//bazı gerçekler değişmez :)
                    //return değeri gerektiği için rastgele bir sayı föndürdük. diğer dosyada(stack_list.h) da aynı yapmıstık
    } 
    if(top->next==NULL)//liste tek elemalı olma durumu. eğer bu kısmı eklemzsek alttaki while da sıkıntı yaşarız.
    {    
        int data=top->data;
        top=NULL;
        return data;
    }
    else
    {
        node *last=NULL, *iter=top;
        while(iter->next->next!=NULL) iter=iter->next;
        last=iter->next;
        int data=last->data;
        iter->next=NULL;
        free(last);
        return data;
    }
}
