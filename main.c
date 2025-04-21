#include <stdio.h>

#define N 3
#define M 4

int labirinto[N][M] = {
    {0, 1, 0, 0},
    {0, 0, 0, 1},
    {1, 0, 1, 0}
};

int caminho(int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= M || labirinto[x][y] == 1)
        return 0;

    if (x == N-1 && y == M-1) {
        labirinto[x][y] = 2; 
        return 1; 
    }

    labirinto[x][y] = 2;

    if (caminho(x + 1, y) || caminho(x, y + 1) || caminho(x - 1, y) || caminho(x, y - 1))
        return 1;

    labirinto[x][y] = 0;
    return 0;
}

void imprimirLabirinto() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (labirinto[i][j] == 2)
                printf("* ");
            else
                printf("%d ", labirinto[i][j]);
        }
        printf("\n");
    }
}

int main() {
    if (caminho(0, 0)) {
        imprimirLabirinto();
    } else {
        printf("Não há caminho!\n");
    }
    return 0;
}
