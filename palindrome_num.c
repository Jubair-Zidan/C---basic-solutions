#include <stdio.h>

int main()
{

    int i, n, temp, sum = 0, r;
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp /= 10;
    }
    printf("%d", sum);
    // if (sum == n)
    //     printf("palindrom num");
    // else if (sum != n)
    //     printf("not palindrome num");

    return 0;
}