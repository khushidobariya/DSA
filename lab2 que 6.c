#include <stdio.h>
int main() {
    int arr[2][2] = {{10, 20}, {30, 40}};
    int i, j;

    printf("Elements are:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
