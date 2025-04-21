#include <stdio.h>

#define N 4

int tabuleiro[N][N];

int ehSeguranca(int linha, int coluna) {
    for (int i = 0; i < linha; i++) {
        if (tabuleiro[i][coluna] == 1) {
            return 0;
        }
        if (coluna - (linha - i) >= 0 && tabuleiro[i][coluna - (linha - i)] == 1) {
            return 0;
        }
        if (coluna + (linha - i) < N && tabuleiro[i][coluna + (linha - i)] == 1) {
            return 0;
        }
    }
    return 1;
}

int resolverNRainhas(int linha) {
    if (linha == N) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (tabuleiro[i][j] == 1) {
                    printf("Q ");
                } else {
                    printf(". ");
                }
            }
            printf("\n");
        }
        printf("\n");
        return 1;
    }

    for (int coluna = 0; coluna < N; coluna++) {
        if (ehSeguranca(linha, coluna)) {
            tabuleiro[linha][coluna] = 1;
            if (resolverNRainhas(linha + 1)) {
                return 1;
            }
            tabuleiro[linha][coluna] = 0;
        }
    }
    return 0;
}

int main() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    resolverNRainhas(0);
    return 0;
}
