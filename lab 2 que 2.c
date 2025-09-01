#include <stdio.h>

int main() {
    int matrix[3][3] = {0};
    int i, j;

    printf("Null Matrix (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
