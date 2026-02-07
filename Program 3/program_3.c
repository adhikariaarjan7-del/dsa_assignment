#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void display() {
    struct node *temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reversetraversal(struct node *temp) {
    if (temp == NULL) {
        return;
    }
    reversetraversal(temp->next);
    printf("%d ", temp->data);
}

int main() {
    int n, i, value;
    
    printf("How many elements: ");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &value);
        insert(value);
    }
    
    display();
    
    printf("Reverse: ");
    reversetraversal(head);
    printf("\n");
    
    return 0;
}
