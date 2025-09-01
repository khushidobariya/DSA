#include <stdio.h>

int main() {
    int identity[4][4] = {0};
    int i, j;

    for(i = 0; i < 4; i++) {
        identity[i][i] = 1;
    }

    printf("Identity Matrix:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", identity[i][j]);
        }
        printf("\n");
    }

    return 0;
}
