#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows and columns for matrices: ");
    scanf("%d%d", &m, &n);


    int A[10][10], B[10][10], C[10][10];
    int i, j;

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum Matrix C = A + B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
