#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter digit: ");
    scanf("%d", &n);

    int count = 0;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("%d is prime", n);
    }
    else if (count++)
    {
        printf("%d is not prime", n);
    }

    return 0;
}