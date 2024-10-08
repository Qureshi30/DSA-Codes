#include <stdio.h>
#include <stdlib.h>
int f = -1;
int r = -1;
int a[5];
void enqueue_rear(int x)
{
    if (f == (r + 1) % 5)
    {
        printf("queue is full");
    }
    else
    {
        if (f == -1 && r == -1)
        {
            f = 0;
            r = 0;
            a[r] = x;
        }
        else
        {
            r = (r + 1) % 5;
            a[r] = x;
        }
    }
} // function to enqueue element
void dequeue_front()
{
    if (f == -1 && r == -1)
        printf("\n queue is empty");
    else if (r == f)
    {
        printf("\n %d element dequed ", a[f]);
        f = -1, r = -1;
    }
    else
    {
        printf("\n %d element dequeued ", a[f]);
        f = (f + 1) % 5;
    }
} // function to dequeue element
void enqueue_front(int x)
{
    if (f == (r + 1) % 5)
    {
        printf("queue is full");
    }
    else
    {
        if (f == -1 && r == -1)
        {
            f = 0;
            r = 0;
            a[r] = x;
        }
        else
        {
            f = (4 + f) % 5;
            a[f] = x;
        }
    }
}
void dequeue_rear()
{
    if (f == -1 && r == -1)
        printf("\n Queue is Empty");
    else if (r == f)
    {
        printf("\n %d Element Dequed ", a[f]);
        f = -1, r = -1;
    }
    else
    {
        if (r == 0 && f != 4)
        {
            r = 4;
        }
        else
        {
            printf("\n %d Element Dequeued ", a[f]);
            r = (4 + r) % 5;
        }
    }
}

void display()
{
    if (f != -1 && r != -1)
    {
        for (int i = f; i != r; i = (i + 1) % 5)
        {
            printf("\n %d", a[i]);
        }
        printf("\n %d", a[r]);
    }
    else
        printf("Queue is empty");
} // function to dispaly
void main()
{
    int ch, n1;
    while (1) // while loop untill condition false
    {
        printf("\n queue operator");
        printf("\n 1. enter 1 for enqueue_rear");
        printf("\n 2. enter 2 for dequeue_front");
        printf("\n 3. enter 3 for enqueue_front ");
        printf("\n 4. enter 4 for dequeue_rear");
        printf("\n 5. enter 5 for display");
        printf("\n 6. enter 6 for exit");
        printf("\n enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("Enter the number ");
            scanf("%d", &n1);
            enqueue_rear(n1);
            break;
        } // element will be added
        case 2:
        {
            dequeue_front();
            break;
        } // element will be removed
        case 3:
        {
            printf("Enter number");
            scanf("%d", &n1);
            enqueue_front(n1);
            break;
        }
        case 4:
        {
            dequeue_rear();
            break;
        }
        case 5:
        {
            display();
            break;
        }
        case 6:
        {
            exit(1);
            break;
        }
        default:
            printf("wrong choice");
        }
    } // end of switch case
} // end of main
