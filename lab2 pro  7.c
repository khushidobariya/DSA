#include <stdio.h>

int main() {
    int arr[3][3][3];
    int i, j, k;

    printf("Enter elements of 3x3x3 array:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            for(k = 0; k < 3; k++)
                scanf("%d", &arr[i][j][k]);

    int key, found = 0;
    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                if(arr[i][j][k] == key) {
                    printf("Element %d found at Layer=%d, Row=%d, Column=%d\n", key, i, j, k);
                    found = 1;
                }
            }
        }
    }

    if(!found)
        printf("Element not found.\n");

    return 0;
}
