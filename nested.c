#include <stdio.h>

int main()
{
    int n, num = 1;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop for rows
    for (int i = 1; i <= n; i++)
    {
        // Loop for printing numbers in each row
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++; // Increase the number
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
