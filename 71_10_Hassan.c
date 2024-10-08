#include <stdio.h>
#include <stdlib.h>

int stack[5];
int top = -1;

void push();

void pop();

void display();

int main()
{
    int choice;

    while (1)
    {
        printf("\n\n");
        printf("\t\t*** Stack Operations ***\n");
        printf("\t\t1. PUSH [Insert Element]\n");
        printf("\t\t2. POP [Delete Element]\n");
        printf("\t\t3. DISPLAY [Display Stack Elements]\n");
        printf("\t\t4. EXIT\n");

        printf("\n\nEnter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("\n\nYou Entered a Wrong Choice!");
        }
    }
}

void push()
{
    int n;

    if (top == 4)
    {
        printf("\nStack is FULL");
    }
    else
    {
        printf("\n\nEnter the element to be pushed into the stack:");
        scanf("%d", &n);
        top++;
        stack[top] = n;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\n\nStack is EMPTY");
    }
    else
    {
        printf("\n\n%d element popped out of the stack", stack[top]);
        top--;
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("\n\nStack is EMPTY");
    }
    else
    {
        printf("\n\nThe elements in the stack are:");
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
}
