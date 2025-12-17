#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *f=NULL,*r=NULL;

void enqueue(int x){
    struct node *n=malloc(sizeof(*n));
    n->data=x; n->next=NULL;
    if(!f) f=r=n;
    else r->next=n, r=n;
}

void dequeue(){
    if(!f) printf("Empty\n");
    else{
        printf("dequeueeted %d\n",f->data);
        struct node *temp=f;
        f=f->next;
        free(temp);
    }
}

void display(){
    if(!f){
        printf("Queue is empty\n");
        return;
    }
    struct node *temp=f;
    printf("Queue elements: ");
    while(temp){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();

    enqueue(40);
    display();

    return 0;
}

