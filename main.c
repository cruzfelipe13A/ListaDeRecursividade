#include <stdio.h>
#include <string.h>

void trocar(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permutar(char *str, int inicio, int fim) {
    if (inicio == fim) {
        printf("%s\n", str);
    } else {
        for (int i = inicio; i <= fim; i++) {
            trocar(&str[inicio], &str[i]);
            permutar(str, inicio + 1, fim);
            trocar(&str[inicio], &str[i]); // backtrack
        }
    }
}

int main() {
    char str[] = "abc";
    permutar(str, 0, strlen(str) - 1);
    return 0;
}
