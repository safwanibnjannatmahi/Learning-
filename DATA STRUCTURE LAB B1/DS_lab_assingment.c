#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    int priority;
    struct Node* next;
};

struct Node* head = NULL;

// Insert based on priority
void insert(int value, int pr) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->priority = pr;
    temp->next = NULL;

    if (head == NULL || pr < head->priority) {
        temp->next = head;
        head = temp;
    } else {
        struct Node* p = head;
        while (p->next != NULL && p->next->priority <= pr) {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}

// Delete highest priority
void deletePQ() {
    if (head == NULL) {
        printf("Queue is Empty\n");
        return;
    }

    struct Node* temp = head;
    printf("Deleted: %d\n", temp->data);
    head = head->next;
    free(temp);
}

// Display
void display() {
    struct Node* temp = head;

    if (head == NULL) {
        printf("Queue is Empty\n");
        return;
    }

    while (temp != NULL) {
        printf("Value: %d Priority: %d\n", temp->data, temp->priority);
        temp = temp->next;
    }
}

// Main
int main() {
    int choice, value, pr;

    while (1) {
        printf("\n1.Insert 2.Delete 3.Display 4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                printf("Enter priority: ");
                scanf("%d", &pr);
                insert(value, pr);
                break;
            case 2:
                deletePQ();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}
