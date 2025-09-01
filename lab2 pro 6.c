#include <stdio.h>

int main() {
    int arr[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    int l, row, col;

    printf("3D Array Elements:\n");
    for (l = 0; l < 2; l++) {
        printf("L %d:\n", l);
        for (row = 0; row < 3; row++) {
            for (col = 0; col < 4; col++) {
                printf("%d ", arr[l][row][col]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

