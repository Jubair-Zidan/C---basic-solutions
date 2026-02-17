#include <stdio.h>

int main()
{
    int r, temp, n, sum = 0;
    scanf("%d", &n);

    temp = n;
    while (temp > 0)
    {
        r = temp % 10;
        if (r % 2 != 0)
        {
            sum = sum + r;
        }

        temp /= 10;
    }
    printf("%d", sum);

    return 0;
}