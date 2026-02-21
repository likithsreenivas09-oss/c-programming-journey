#include <stdio.h>

int main()
{
    int x, y, z;
    int i, j, k;
    int searchValue;
    int found = 0;

    // Taking size from user
    printf("Enter size of 3D array (Layer Row Column): ");
    scanf("%d %d %d", &x, &y, &z);

    // Validation check
    if(x <= 0 || y <= 0 || z <= 0)
    {
        printf("Invalid size. All dimensions must be positive.\n");
        return 1;
    }

    // Declaring array with user-defined size
    int arr[x][y][z];

    // Taking input
    printf("\nEnter elements:\n");

    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
        {
            for(k = 0; k < z; k++)
            {
                printf("Element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    // Taking value to search
    printf("\nEnter value to search: ");
    scanf("%d", &searchValue);

    // Searching for first occurrence
    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
        {
            for(k = 0; k < z; k++)
            {
                if(arr[i][j][k] == searchValue)
                {
                    printf("\nValue found at Layer %d, Row %d, Column %d\n",
                           i + 1, j + 1, k + 1);
                    found = 1;
                    break;
                }
            }
            if(found)
                break;
        }
        if(found)
            break;
    }

    if(found == 0)
    {
        printf("\nValue not found in the array.\n");
    }

    return 0;
}
