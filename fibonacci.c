#include <stdio.h>

void fibonacci_number(int n)
{
    int i, fi = 0, sec = 1, fibo = 0, count = 0;

    for (i = 0; i < n; i++)
    {
        if (count <= 1)
        {
            fibo = count;
        }
        else
        {
            fibo = fi + sec;
            fi = sec;
            sec = fibo;
        }
        printf("%d ", fibo);
        count++;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    fibonacci_number(n);

    return 0;
}
