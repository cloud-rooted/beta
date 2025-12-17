#include <stdio.h>
#define MAX 5

int q[MAX], f = -1, r = -1;

void enqueue(int x) {
    if((r + 1) % MAX == f) 
        printf("Full\n");
    else {
        if(f == -1) f = 0; 
        r = (r + 1) % MAX;
        q[r] = x;
    }
}

void dequeue() {
    if(f == -1) 
        printf("Empty\n");
    else {
        printf("Dequeued %d\n", q[f]);
        if(f == r) 
            f = r = -1; 
        else 
            f = (f + 1) % MAX;
    }
}

void display() {
    if(f == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    int i = f;
    while(1) {
        printf("%d ", q[i]);
        if(i == r) break;  
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    enqueue(10); 
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();  

    dequeue();      
    dequeue();      
    display();  

    enqueue(50);
    enqueue(60);
    display();  

    return 0;
}

