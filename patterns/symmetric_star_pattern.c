#include <stdio.h>

int main()
{
    int n, i, j, p, m;

    printf("Enter the size: ");
    scanf("%d", &n);

    p = n - 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = p; i > 0; i--)
    {
        for (m = 1; m <= i; m++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

