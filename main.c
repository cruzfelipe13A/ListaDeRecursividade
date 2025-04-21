#include <stdio.h>

int comprimento(char *str) {
    if (*str == '\0')
        return 0;
    return 1 + comprimento(str + 1);
}

int main() {
    char palavra[] = "recursivo";
    printf("%d\n", comprimento(palavra));  // Saída: 9
    return 0;
}
