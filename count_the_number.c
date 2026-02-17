#include <stdio.h>

int main()
{
    int i, n;
    printf("enter number: ");
    scanf("%d", &n);

    int count = 0;
    if (n == 0)
    {
        count = 1;
    }
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    printf("%d", count);
    return 0;
}