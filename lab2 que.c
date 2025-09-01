#include <stdio.h>
#define ROWS 3
#define COLS 3

int main() {
    int arr[ROWS][COLS] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int i, j;  // Declare loop variables here

    printf("2D Array in Row-Major Order:\n");
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n2D Array in Column-Major Order (Simulated):\n");
    for(j = 0; j < COLS; j++) {
        for(i = 0; i < ROWS; i++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

