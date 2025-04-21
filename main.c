#include <stdio.h>

int contar_caracteres(char *str, char c) {
    if (*str == '\0') {
        return 0;
    }
    if (*str == c) {
        return 1 + contar_caracteres(str + 1, c);
    }
    return contar_caracteres(str + 1, c);
}

int main() {
    char str[] = "abracadabra";
    char c = 'a';
    printf("O caractere '%c' aparece %d vezes na string.\n", c, contar_caracteres(str, c));
    return 0;
}
