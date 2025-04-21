#include <stdio.h>
#include <math.h>

int verificar_primo(int n, int divisor) {
    if (divisor == 1) {
        return 1;
    }
    if (n % divisor == 0) {
        return 0;
    }
    return verificar_primo(n, divisor - 1);
}

int is_primo(int n) {
    if (n <= 1) {
        return 0;
    }
    return verificar_primo(n, (int)sqrt(n));
}

int main() {
    int n1 = 7, n2 = 9;
    printf("Resultado para %d: %d\n", n1, is_primo(n1));
    printf("Resultado para %d: %d\n", n2, is_primo(n2));
    return 0;
}
