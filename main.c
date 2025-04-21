#include <stdio.h>

int potencia(int x, int n) {
    if (n == 0) {
        return 1;  
    }
    return x * potencia(x, n - 1);  
}

int main() {
    int x = 2, n = 5;
    printf("Resultado: %d\n", potencia(x, n));
    return 0;
}
