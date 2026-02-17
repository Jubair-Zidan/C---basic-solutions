#include <stdio.h>

int main()
{
    int i, n, fac = 1;
    printf("enter digit: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fac = fac * i;
        printf("%d", i);
        if (i < n)
        {
            printf(" * ");
        }
    }
    printf(" = %d", fac);

    return 0;
}