#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insert(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    
    if (head == NULL) {
        newnode->prev = NULL;
        head = newnode;
    } else {
        struct node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}

void insertafter(int key, int value) {
    struct node *temp = head;
    
    while (temp != NULL) {
        if (temp->data == key) {
            struct node *newnode = (struct node*)malloc(sizeof(struct node));
            newnode->data = value;
            newnode->next = temp->next;
            newnode->prev = temp;
            
            if (temp->next != NULL) {
                temp->next->prev = newnode;
            }
            temp->next = newnode;
            return;
        }
        temp = temp->next;
    }
    printf("Node not found\n");
}

void deletenode(int value) {
    struct node *temp = head;
    
    while (temp != NULL) {
        if (temp->data == value) {
            if (temp->prev != NULL) {
                temp->prev->next = temp->next;
            } else {
                head = temp->next;
            }
            
            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            }
            
            free(temp);
            return;
        }
        temp = temp->next;
    }
    printf("Node not found\n");
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

int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    
    printf("Original list:\n");
    display();
    
    printf("\nInsert 25 after 20:\n");
    insertafter(20, 25);
    display();
    
    printf("\nDelete 30:\n");
    deletenode(30);
    display();
    
    return 0;
}