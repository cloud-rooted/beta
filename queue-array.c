#include <stdio.h>
#define MAX 5

int q[MAX], f = 0, r = -1;

void queue(int x) {
    if(r == MAX - 1) 
        printf("Full\n");
    else 
        q[++r] = x;
}

void dequeue() {
    if(f > r) 
        printf("Empty\n");
    else 
        printf("Dequeued %d\n", q[f++]);
}

void display() {
    if(f > r) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    for(int i = f; i <= r; i++) {
        printf("%d ", q[i]);
    }
    printf("\n");
}

int main() {
    queue(10); 
    queue(20);
    queue(30);

    display();

    dequeue();      
    display();  

    return 0;
}

