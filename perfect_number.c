#include <stdio.h>

int perfect_number(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    return (sum == num);
}

int main()
{
    int st, end;
    printf("Enter range: ");
    scanf("%d %d", &st, &end);

    printf("Range between %d and %d are:\n", st, end);
    for (int i = st; i <= end; i++)
    {
        if (perfect_number(i))
            printf("%d is perfect number\n", i);
    }

    return 0;
}
