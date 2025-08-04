#include <stdio.h>

void func(int n) {
    if (n == 1)
        return;
    func(n / 2);
    func(n / 2);
}

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    func(n);
    return 0;
}
