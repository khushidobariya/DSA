#include <stdio.h>

int main() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}}, T[3][2];
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            T[j][i] = A[i][j];
        }
    }

    printf("Transpose:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}
