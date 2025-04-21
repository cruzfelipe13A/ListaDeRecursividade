#include <stdio.h>

void imprimirImpares(int n) {
    if (n <= 0)
        return;

    imprimirImpares(n - 2);

    if (n % 2 == 1)
        printf("%d ", n);
}

int main() {
    int n = 7;
    imprimirImpares(n);
    return 0;
}
