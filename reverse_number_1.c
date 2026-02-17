#include <stdio.h>

int main()
{
    int i, n, temp, r, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp /= 10;
    }
    if (sum == n)
    {
        printf("%d is palindrome number", n);
    }
    else
    {
        printf("%d is not palindrome number", n);
    }

    return 0;
}