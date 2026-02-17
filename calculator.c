#include <stdio.h>

void calculator(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        printf("sum of a&b is: %d\n", (a + b));
        break;

    case '-':
        printf("subtraction of a&b is: %d\n", (a - b));
        break;

    case '*':
        printf("Multiplication of a&b is: %d\n", (a * b));
        break;

    case '/':
        if (b == 0)
        {
            printf("Invalid Ans\n");
        }
        else
        {
            printf("division of a&b is: %d\n", (a / b));
        }
        break;

    case '%':
        if (b == 0)
        {
            printf("Invalid Ans\n");
        }
        else
        {
            printf("Remainder of a&b is: %d\n", (a % b));
        }
        break;

    default:
        printf("Invalid Operator!\n");
    }
}

int main()
{
    int a, b;
    char op;

    printf("Enter digit: ");
    scanf("%d %d", &a, &b);

    printf("Enter Operator: ");
    scanf(" %c", &op);

    calculator(a, b, op);

    return 0;
}
