#include <stdio.h>
#define MAX 5

int s[MAX], top = -1;

void push(int x) {
    if(top == MAX - 1)
        printf("Overflow\n");
    else 
        s[++top] = x;
}

void pop() {
    if(top == -1)
        printf("Underflow\n");
    else 
        printf("Popped %d\n", s[top--]);
        
}

void display() {
    if(top == -1) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");
    for(int i = 0; i <= top; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
}

int main() {
    push(10); 
    push(20);
    push(15);
    push(8);

    display(); 

    pop();  
    display();  

    return 0;
}

