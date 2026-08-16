#include<stdio.h>
#define MAX 3

int stack[MAX], top = -1;

void push();
void pop();
void peek();
void update();
void display();

void main()
{
    int op;

    do
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Update");
        printf("\n5. Display");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                update();
                break;

            case 5:
                display();
                break;

            case 6:
                break;

            default:
                printf("\nInvalid choice");
        }

    } while(op != 6);
}

void push()
{
    int val;

    if(top == MAX - 1)
    {
        printf("\nStack Overflow");

    }
    else
    {
        printf("\nEnter the value: ");
        scanf("%d", &val);

        top++;
        stack[top] = val;
    }
}

void pop()
{
    int val;

    if(top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        val = stack[top];
        top--;

        printf("\nDeleted value is: %d", val);
    }
}

void peek()
{
    if(top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nTop element is: %d", stack[top]);
    }
}

void update()
{
    int i, x;

    if(top == -1)
    {
        printf("\nStack is empty");
        return;
    }

    printf("\nEnter index: ");
    scanf("%d", &i);

    printf("\nEnter new value: ");
    scanf("%d", &x);

    if(top - i + 1 < 0)
    {
        printf("\nInvalid index");
    }
    else
    {
        stack[top - i + 1] = x;
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nStack elements are:");

        for(i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
}


