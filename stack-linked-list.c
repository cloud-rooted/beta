#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int x) {
    struct node *n = malloc(sizeof(*n));
    n->data = x;
    n->next = top;
    top = n;
}

void pop() {
    if(!top) 
        printf("Empty\n");
    else {
        printf("Popped %d\n", top->data);
        struct node *temp = top;
        top = top->next;
        free(temp);
    }
}

void display() {
    if(!top) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");
    struct node *temp = top;
    while(temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    push(10); 
    push(20);
    push(30);

    display(); 

    pop();      
    display();  

    return 0;
}

