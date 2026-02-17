#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Total Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

