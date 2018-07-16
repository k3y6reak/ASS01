#include <stdio.h>
#include <stdlib.h>

typedef struct _list {
    struct _node *cur;
    struct _node *head;
    struct _node *tail;
} linkedlist;

typedef struct _node {
    int data;
    struct _node *next;
} node;


int list_printall(linkedlist *a1)
{
    node * p = a1->cur;
    while(p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}


int list_add_to_tail(linkedlist *a1, int a2)
{
    if(!a1->head)
    {
        a1->head = malloc(sizeof(node));
        a1->head->data = a2;
        a1->head->next = 0;

        a1->cur = a1->head;
    }
    else
    {
        a1->head->next = malloc(sizeof(node));
        a1->head->next->data = a2;
        a1->head->next->next = 0;
        a1->head = a1->head->next;
    }
}


int list_init(linkedlist *a1)
{
    a1->head = 0;
    a1->cur = a1->head;
}


int main(void)
{
    linkedlist *l[2];

    list_init(*l);
    list_add_to_tail(*l, 0x1);
    list_add_to_tail(*l, 0x2);
    list_add_to_tail(*l, 0x3);

    list_printall(*l);

    return 0;
}