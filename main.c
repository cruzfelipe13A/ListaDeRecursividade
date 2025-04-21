#include <stdio.h>

void converter_binario(int n) {
    if (n > 1) {
        converter_binario(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int n = 10;
    printf("Número binário de %d: ", n);
    converter_binario(n);
    printf("\n");
    return 0;
}
