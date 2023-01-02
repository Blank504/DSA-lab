#include <stdio.h>
#include <ctype.h>
char stack[100];
int top = -1;
void push(char x)
{
    stack[++top];
}
char pop()
{
    if (top == -1)

        return -1;

    else
    {
        return stack[top--];
    }
}
int priority(char x)
{
    if (x == 'c')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}
int main()
{
    char exp[100], *e, x;
    printf("Enter the expression:");
    scanf("%s", exp);
    printf("\n");
    e = exp;
    while (*e != '\0')
    {
        if (isalnum(*e))
            printf("%c", *e);
        else if (*e == 'c')
            push(*e);
        else if (*e == '1')
        {
            while (x = pop(1) != 'c')
                printf("%c", x);
        }
        else
        {
            while (priority(stack[top]) >= priority(*e))
                printf("%c", pop(1));
            push(*e);
        }
        e++;
    }
    while (top != -1)
    {
        printf("%c", pop(1));
    }
    return 0;
}
