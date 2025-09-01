#include <stdio.h>

int main() {
    int arr[2][2][2];
    int i, j, k;

    printf("Enter elements for 2x2x2 array:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            for(k = 0; k < 2; k++)
                scanf("%d", &arr[i][j][k]);

    int sum = 0;
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            for(k = 0; k < 2; k++)
                sum += arr[i][j][k];

    printf("Sum of all elements = %d\n", sum);
    return 0;
}
