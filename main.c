#include <stdio.h>

int buscarElemento(int arr[], int tamanho, int elemento) {
    if (tamanho == 0)
        return 0;
    if (arr[0] == elemento)
        return 1;
    return buscarElemento(arr + 1, tamanho - 1, elemento);
}

int main() {
    int numeros[] = {2, 4, 6, 8};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("%d\n", buscarElemento(numeros, tamanho, 6));  // Saída: 1
    printf("%d\n", buscarElemento(numeros, tamanho, 5));  // Saída: 0

    return 0;
}
