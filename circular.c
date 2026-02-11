#include <stdio.h>
#include <stdlib.h>
int queue_arr[100];
int front = -1, rear = -1, data, MAX;
void enqueue();
void dequeue();
void display();
int main()
{
    int choice;
    printf("Enter the size of the Circular Queue (<100)");
    scanf("%d", &MAX);
    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.Display\n");
    printf("4.Quit\n");
    while (1)
    {
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            printf("Wrong choice\n");
        }
    }
    return 0;
}
void enqueue()
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Queue Overflow \n");
        return;
    }
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % MAX;
    }
    printf("Input the element for insertion in queue : ");
    scanf("%d", &data);
    queue_arr[rear] = data;
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue Underflow\n");
        return;
    }
    printf("Element deleted from queue is : %d\n", queue_arr[front]);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
}
void display()
{
    int front_pos = front, rear_pos = rear;
    if (front == -1)

    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements :\n");
    if (front_pos <= rear_pos)
        while (front_pos <= rear_pos)
        {
            printf("%d ", queue_arr[front_pos]);
            front_pos++;
        }
    else
    {
        while (front_pos <= MAX - 1)
        {
            printf("%d ", queue_arr[front_pos]);
            front_pos++;
        }
        front_pos = 0;
        while (front_pos <= rear_pos)
        {
            printf("%d ", queue_arr[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}