#include <stdio.h>

int main()
{
    int n, i, j, isPrime, sum = 0;

    // Input n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop through numbers from 2 to n
    for (i = 2; i <= n; i++)
    {
        isPrime = 1; // Assume i is prime

        // Check if i is prime
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        // Print if prime
        if (isPrime == 1)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nsum of prime numbers: %d", sum);

    // int i, j, n;
    // printf("Enter Range: ");
    // scanf("%d", &n);

    // printf("list of prime numbers are: ");
    // for (i = 2; i <= n; i++)
    // {
    //     for (j = 2; j <= i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             break;
    //         }
    //     }
    //     if (i == j)
    //     {
    //         printf("%d ", i);
    //     }
    // }

    printf("\n");
    return 0;
}
