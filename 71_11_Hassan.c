#include <stdio.h>
#include <stdlib.h>
int front = -1;
int rear = -1;
int a[5];

void enqueue(int x)
{
    if (rear == 4)
    {
        printf("Queue is Full");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        a[rear] = x;
        printf("\n Element Entered");
    }
    else
    {
        rear++;
        a[rear] = x;
        printf("\n Element Entered ");
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\n Queue is Empty");
    }
    else if (rear == front)
    {
        printf("\n %d Element Dequed", a[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\n %d Element Dequed", a[front]);
        front++;
    }
}

void display()
{
    if (front != -1 && rear != -1)
    {
        for (int i = front; i <= rear; i++)
        {
            printf("\n %d", a[i]);
        }
    }
    else
        printf("\n Queue is empty");
}
void main()
{
    int ch, n1;
    while (1)
    {
        printf("\n Queue Operator");
        printf("\n 1. enter 1 for enqueue");
        printf("\n 2. enter 2 for dequeue");
        printf("\n 3. enter 3 for display");
        printf("\n 4. enter 4 for exit");
        printf("\n enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("Enter the number ");
            scanf("%d", &n1);
            enqueue(n1);
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            exit(1);
            break;
        }
        default:
            printf("wrong choice");
        }
    }
}