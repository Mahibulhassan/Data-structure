#include<stdio.h>
#define queueSize 100

int myQueue[queueSize], front = 0, rear = -1;


void enqueue(int value)
{
    if(rear==queueSize)
        printf("Queue is full! Cannot insert any Data!\n");
    else
        myQueue[++rear] = value;
}

void dequeue()
{
    if(front==queueSize)
        printf("Queue is empty!\n");
    else
        printf("Dequeued value: %d\n", myQueue[front++]);
}

void display()
{
    int i;

    for(i = front; i<=rear; i++)
        printf("%d\n", myQueue[i]);
}

int main()
{
    for(int i = 10; i<=100; i=i+10)
    {
        enqueue(i);
    }

    printf("Full Queue is:\n");
    display();
    puts("");

    dequeue();
    dequeue();
    
    printf("\nUpdated Queue is:\n");
    display();
    puts("");

    enqueue(999);

    printf("\nUpdated Queue is:\n");
    display();
    puts("");

    return 0;
}
