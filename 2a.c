#include <stdio.h>
int stack[100], choice, n, top, x, i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top = -1;
    printf("Enter the size of stack[MAX=100]:");
    scanf("%d", &n);
    printf("\n\tstack operations array");
    printf("\n\t 1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit");
    do
    {
        printf("\nEnter the choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case1:
            push();
            break;
        case2:
            pop();
            break;
        case3:
            display();
            break;
        case4:
            printf("\nExit point");
            break;
        default:
            printf("\n Please enter a valid choice (1/2/3/4)");
        }
    } while (choice != 4);
    return 0;
}
void push()
{
    if (top >= n - 1)
    {
        printf("\nStack is overflow");
    }
    else
    {
        printf("Enter a value to be pushed:");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top <= -1)
    {
        printf("\nStack is underflow");
    }
    else
    {
        printf("The popped element is %d", stack[top]);
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        printf("\nThe element in stack\t");
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
            printf("\nPress next choice");
        }
    }
    else
    {
        printf("\n Stack is empty");
    }
}