#include <stdio.h>
#include <math.h>

int main()
{
    // int n, r, sum = 0, first, last;
    // printf("enter any number: ");
    // scanf("%d", &n);

    // int temp = n;

    // last = temp % 10;
    // printf("lastdigit %d\n", last);

    // int count = 0;
    // while (temp > 0)
    // {
    //     r = temp % 10;
    //     if (temp < 10)
    //     {
    //         first = temp;
    //         printf("firstdigit %d\n", first);

    //         sum = first + last;
    //         printf("sum of first and last digit %d\n", sum);
    //     }
    //     temp /= 10;
    //     count++;
    // }
    // printf("%d\n", count);

    int n, first, last;
    printf("Enter number: ");
    scanf("%d", &n);

    last = n % 10;
    first = n;
    while (first >= 10)
    {
        first /= 10;
    }
    printf("First digit is %d\n", first);
    printf("Last digit is %d\n", last);

    printf("\n");
    return 0;
}