#include <stdio.h>

int main()
{
    int j, i, n, space, value;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1)
            {
                value = 1;
            }
            else
            {
                value = value * (i - j + 1) / (j - 1);
            }
            printf("%4d", value);
            // printf("   *");
        }
        printf("\n");
    }

    return 0;
}