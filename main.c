#include <stdio.h>

int encontrarCaminho(int matriz[3][3], int x1, int y1, int x2, int y2) {
    if (x1 > x2 || y1 > y2 || matriz[x1][y1] == 1) {
        return 0;
    }
    if (x1 == x2 && y1 == y2) {
        printf("(%d,%d) ", x1, y1);
        return 1;
    }
    printf("(%d,%d) ", x1, y1);
    if (encontrarCaminho(matriz, x1, y1 + 1, x2, y2)) {
        return 1;
    }
    if (encontrarCaminho(matriz, x1 + 1, y1, x2, y2)) {
        return 1;
    }
    return 0;
}

int contarCaminhos(int matriz[3][3], int x1, int y1, int x2, int y2) {
    if (x1 > x2 || y1 > y2 || matriz[x1][y1] == 1) {
        return 0;
    }
    if (x1 == x2 && y1 == y2) {
        return 1;
    }
    return contarCaminhos(matriz, x1, y1 + 1, x2, y2) + contarCaminhos(matriz, x1 + 1, y1, x2, y2);
}

int main() {
    int matriz[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    printf("Caminho de (0,0) a (2,2): ");
    encontrarCaminho(matriz, 0, 0, 2, 2);
    printf("\n");

    int totalCaminhos = contarCaminhos(matriz, 0, 0, 2, 2);
    printf("Total de caminhos possíveis: %d\n", totalCaminhos);

    return 0;
}
