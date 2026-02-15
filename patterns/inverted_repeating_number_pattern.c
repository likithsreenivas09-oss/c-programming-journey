#include <stdio.h>

int main() {
    int n, i, j, l;

    printf("Enter the size: ");
    scanf("%d", &n);

    l = 1;

    for (i = n; i > 0; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", l);
        }
        printf("\n");
        l = l + 1;
    }

    return 0;
}
