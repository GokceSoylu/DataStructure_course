#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
struct Stack
{
    int counter;
    node *top;
};
typedef struct Stack stack;
int main()
{
    stack s;//şimdi bu bir tane stack'in içine bir liste oluşturucucaz. Aslinda stac'in olayı bu normal dizi liste oluşturuyorduk ya
    //işte şimdi bunu bir strutct yapısısnın içinde oluşturucaz. tek bir struct yapısın içinde liste ve dizi ee noldu kuyu gibi üst üste birikmiş data işte olay bu :))
    s.counter=0;
    s.top=(node*)malloc(sizeof(node));
    s.counter++;
    s.top->data=s.counter*10;
    //bir liste oluşturduk tek düğüm artık bunu ekleme silme işlmeleri byapabiliriz;
}