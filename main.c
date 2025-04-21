#include <stdio.h>

void imprimirSubconjunto(int arr[], int n, int index, int vetorAux[]) {
    printf("{");
    for (int i = 0; i < n; i++) {
        if (vetorAux[i]) {
            printf("%d ", arr[i]);
        }
    }
    printf("}\n");
}

void gerarSubconjuntos(int arr[], int n, int index, int vetorAux[]) {
    if (index == n) {
        imprimirSubconjunto(arr, n, index, vetorAux);
        return;
    }

    vetorAux[index] = 1;
    gerarSubconjuntos(arr, n, index + 1, vetorAux);

    vetorAux[index] = 0;
    gerarSubconjuntos(arr, n, index + 1, vetorAux);
}

int main() {
    int arr[] = {1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int vetorAux[n];

    gerarSubconjuntos(arr, n, 0, vetorAux);
    return 0;
}
