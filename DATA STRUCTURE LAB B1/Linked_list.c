#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head;

int main()
{
    struct Node *p = malloc(sizeof(struct Node));
    struct Node *q = malloc(sizeof(struct Node));
    struct Node *r = malloc(sizeof(struct Node));
    struct Node *s = malloc(sizeof(struct Node));
    struct Node *t = malloc(sizeof(struct Node));



    p->next = q;
    q->next = r;
    r->next = s;
    s->next = t;
    t->next = NULL;

    head = p;

    struct Node *ptr = head;

    while(ptr)
    {
        scanf("%d", &ptr->data);
        ptr = ptr->next;
    }

    ptr = head;

    while(ptr)
    {
        printf("%d", ptr->data);

        ptr = ptr->next;
    }


return 0;


}