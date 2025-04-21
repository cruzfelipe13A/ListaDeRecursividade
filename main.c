#include <stdio.h>

void contagem_regressiva(int n) {
    if (n < 0) {
        return;
    }
    printf("%d ", n);  
    contagem_regressiva(n - 1);  
}

int main() {
    int n = 3;
    contagem_regressiva(n);  
    return 0;
}
