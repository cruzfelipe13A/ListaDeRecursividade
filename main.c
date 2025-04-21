#include <stdio.h>
#include <string.h>

int verificar_palindromo(char *str, int inicio, int fim) {
    if (inicio >= fim) return 1;
    if (str[inicio] != str[fim]) return 0;
    return verificar_palindromo(str, inicio + 1, fim - 1);
}

int main() {
    char str[] = "arara";
    int comprimento = strlen(str);
    int resultado = verificar_palindromo(str, 0, comprimento - 1);
    printf("%d\n", resultado);
    return 0;
}
