#include <stdio.h>

void imprimir_pares(int n) {
    if (n < 0) {
        return;
    }
    if (n % 2 == 0) {
        printf("%d ", n);
    }
    imprimir_pares(n - 1);
}

int main() {
    int n = 6;
    printf("Números pares até %d: ", n);
    imprimir_pares(n);
    printf("\n");
    return 0;
}
