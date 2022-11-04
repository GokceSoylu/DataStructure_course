#include <stdlib.h>
#include <stdio.h>
//diğer kütüphane dosyasında dersteki yöntem şeklinde yazmıştık burada ise daha farlı bir metod ile aynı fonksiyonları yazıyoruz
//normalde stack listede her zaman başa ekleyip baştan siliyorduk. aslında mantık FIFO olayını sağlamak yani son gireni ilk sildikten sonra listenin neresine
//kaydettiğinin bir önemi yok. burada listenin sonun aekleyip sonundan silicez.
//çeşit çeşit staack fonksiyonları yazabilitriz deerste öğrendiğimizde stack'i adresle gondersik tüm değişiklikler kalııc oldu ancak fonksiyona
//stack değig node* gonderirsek o zaman ponter dda değişiklik yapınca bunu returlememiz gerekir işte o zaman ya return yapıcaz yada son ekliyicz
//push void yada node* döndürebilir sorun yok ancak pop int döndürmeli işte bu durum için ekleme silmeyi listenin sonunda yaparsak daah iyi olur :)
struct node
{
    int data;
    struct node *next;
};
struct stack
{
    int counter;
    struct node *root, *top;
};
typedef struct node node;
typedef struct stack stack;
node* push(node *p, int data)//return void yapmak asıl mantık :))
{
    
}