#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node *next;

};
struct node *start=NULL;

void insert_start(int value){
    struct node *newnode;

    newnode = (struct node*) malloc (sizeof(struct node));
    newnode ->data = value;

    newnode -> next = start;
    start = newnode;
}

void insert_end(int value){
    struct node *newnode, *temp;

    newnode = (struct node*) malloc (sizeof(struct node));
    newnode -> data = value;
    newnode -> next = NULL;

    if (start == NULL)
    {
        start = newnode;
        return;
    }
    
    temp = start;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp-> next = newnode;
}

void insert_middle(int value, int pos){
    struct node *newnode, *temp;
    int i;

    newnode = (struct node*) malloc (sizeof(struct node));
    newnode -> data = value;

    temp=start;
    for (i=0;i<pos-1;i++){
        temp = temp -> next;
    

        if (temp == NULL){
            printf("Invalid possition/n");
            return;
        }
    }

    newnode-> next = temp->next ;
    temp -> next = newnode;
}

void display(){
    struct node *temp;

    if (start== NULL){
        printf ("The link list is emty/n");
        return;
    }
    temp = start;

    while(temp != NULL){
        printf("%d->",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
    }

    int main(){
        insert_start(30);
        insert_start(255);

        insert_end(056);
        insert_end(110);

        insert_middle(497, 1);

        printf("LINKED LIST:");
        display();


        return 0;
    }