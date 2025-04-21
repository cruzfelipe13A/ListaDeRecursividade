#include <stdio.h>

int soma_array(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    return arr[n - 1] + soma_array(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Soma dos elementos do array: %d\n", soma_array(arr, n));
    return 0;
}
