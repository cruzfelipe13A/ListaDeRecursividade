#include <stdio.h>

int buscaBinaria(int arr[], int low, int high, int x) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            return buscaBinaria(arr, low, mid - 1, x);
        }
        return buscaBinaria(arr, mid + 1, high, x);
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int resultado = buscaBinaria(arr, 0, n - 1, x);

    if (resultado != -1) {
        printf("Elemento encontrado no índice %d\n", resultado);
    } else {
        printf("Elemento não encontrado\n");
    }

    return 0;
}
