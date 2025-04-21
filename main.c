#include <stdio.h>

void hanoi(int n, char origem, char auxiliar, char destino) {
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }

    hanoi(n - 1, origem, destino, auxiliar);
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    hanoi(n - 1, auxiliar, origem, destino);
}

int main() {
    int n = 2;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
