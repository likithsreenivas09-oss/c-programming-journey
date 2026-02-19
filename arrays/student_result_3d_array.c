#include <stdio.h>

int main() {
    int n, m, k;
    int i, j, l;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter number of subjects: ");
    scanf("%d", &m);

    printf("Enter number of semesters: ");
    scanf("%d", &k);

    // Check for valid input
    if (n <= 0 || m <= 0 || k <= 0) {
        printf("Invalid input. All values must be greater than 0.\n");
        return 1;
    }

    int marks[n][m][k];

    // Input marks
    for (i = 0; i < n; i++) {
        printf("\nEntering marks for Student %d\n", i + 1);

        for (j = 0; j < m; j++) {
            for (l = 0; l < k; l++) {
                printf("Subject %d, Semester %d: ", j + 1, l + 1);
                scanf("%d", &marks[i][j][l]);
            }
        }
    }

    int total;
    int maxTotal = -1;      // Important change
    int topStudent = -1;
    float average;

    // Calculate totals and averages
    for (i = 0; i < n; i++) {

        total = 0;

        for (j = 0; j < m; j++) {
            for (l = 0; l < k; l++) {
                total += marks[i][j][l];
            }
        }

        average = (float)total / (m * k);

        printf("\n--------------------------");
        printf("\nStudent %d", i + 1);
        printf("\nTotal Marks = %d", total);
        printf("\nAverage Marks = %.2f\n", average);

        if (total > maxTotal) {
            maxTotal = total;
            topStudent = i;
        }
    }

    printf("\n==========================");
    printf("\nStudent %d has scored highest overall.", topStudent + 1);
    printf("\nHighest Total Marks = %d\n", maxTotal);

    return 0;
}
