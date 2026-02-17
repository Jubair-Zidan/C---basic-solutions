#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int digit = (int)log10(n);
    printf("digit count %d\n", digit);

    int first = n / (int)pow(10, digit);
    printf("first %d\n", first);

    int last = n % 10;
    printf("last %d\n", last);

    int middle = (n % (int)pow(10, digit)) / 10;
    printf("middle %d\n", middle);

    int swap = last * (int)pow(10, digit) + middle * 10 + first;

    printf("%d", swap);

    printf("\n");
    return 0;
}