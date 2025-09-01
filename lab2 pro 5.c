#include <stdio.h>
int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 1}, {6, 7, 8}};
    int found = 0;
    int i, j, k;  // Declare variables here

    for (i = 0; i < 3; i++) {
        int min_row = a[i][0];
        int col_index = 0;

        for (j = 1; j < 3; j++) {
            if (a[i][j] < min_row) {
                min_row = a[i][j];
                col_index = j;
            }
        }

        int is_saddle = 1;

        for (k = 0; k < 3; k++) {
            if (a[k][col_index] > min_row) {
                is_saddle = 0;
                break;
            }
        }

        if (is_saddle) {
            printf("Saddle point at (%d, %d): %d\n", i, col_index, min_row);
            found = 1;
        }
    }

    if (!found)
        printf("No saddle point\n");

    return 0;
}
