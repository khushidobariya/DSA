#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 1;
    while (i < n) {
        printf("%d ", i);
        i = i * 2;
    }

    return 0;
}
