#include <stdio.h>

int main() {
    int m, n, o;
    int i, j, k;

    printf("Enter number of layers (m): ");
    scanf("%d", &m);

    printf("Enter number of rows (n): ");
    scanf("%d", &n);

    printf("Enter number of columns (o): ");
    scanf("%d", &o);

    int arr[m][n][o];

    
    printf("\nEnter elements of the 3D array:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            for(k = 0; k < o; k++) {
                printf("Element at layer %d row %d column %d: ", i+1, j+1, k+1);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    
    int max = arr[0][0][0];
    int layer = 0, row = 0, col = 0;

    
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            for(k = 0; k < o; k++) {
                if(arr[i][j][k] > max) {
                    max = arr[i][j][k];
    layer = i;
                    row = j;
                    col = k;
                }
            }
        }
    }

    
    printf("\nMaximum element = %d\n", max);
    printf("First occurrence at:\n");
    printf("Layer = %d\n", layer + 1);
    printf("Row = %d\n", row + 1);
    printf("Column = %d\n", col + 1);

    return 0;
}
