#include <stdio.h>

int main()
{
    int i, n, temp, r;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    printf("Reverse number ");
    while (temp > 0)
    {
        r = temp % 10;
        printf("%d", r);
        temp /= 10;
    }

    return 0;
}