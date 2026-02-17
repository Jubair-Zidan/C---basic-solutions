#include <stdio.h>

int findp(int b, int p)
{
    int result = 1;
    for (int i = 1; i <= p; i++)
    {
        result = result * b;
    }
    return result;
}

int main()
{
    int b, p, result;

    printf("Enter b number: ");
    scanf("%d", &b);

    printf("Enter p (p): ");
    scanf("%d", &p);

    result = findp(b, p);

    printf("%d^%d = %d\n", b, p, result);

    return 0;
}
