#include <stdio.h>

int main()
{
    int i, n, r, temp, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    do
    {
        r = temp % 10;
        sum = sum + r * r * r;
        temp /= 10;

    } while (temp > 0);
    if (sum == n)
    {
        printf("%d is armstrong number", n);
    }
    else
    {
        printf("%d is not armstrong number", n);
    }

    return 0;
}