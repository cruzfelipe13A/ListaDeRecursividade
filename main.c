#include <stdio.h>

void imprimirCombinacao(int comb[], int k) {
    for (int i = 0; i < k; i++) {
        printf("%d ", comb[i]);
    }
    printf("\n");
}

void combinar(int arr[], int n, int k, int index, int comb[], int i) {
    if (index == k) {
        imprimirCombinacao(comb, k);
        return;
    }
    if (i >= n) return;

    comb[index] = arr[i];
    combinar(arr, n, k, index + 1, comb, i + 1); // inclui arr[i]
    combinar(arr, n, k, index, comb, i + 1);     // não inclui arr[i]
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    int comb[10]; // tamanho máximo arbitrário

    combinar(arr, n, k, 0, comb, 0);
    return 0;
}
