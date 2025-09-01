#include <stdio.h>
int main() {
    int arr[2][2];
    int i, j;  // Declare variables here

    printf("Enter 4 elements:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Entered Array:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
