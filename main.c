#include <stdio.h>

void gerarParenteses(char *s, int i, int abertos, int fechados, int n) {
    if (fechados == n) {
        printf("%s\n", s);
        return;
    }

    if (abertos < n) {
        s[i] = '(';
        gerarParenteses(s, i + 1, abertos + 1, fechados, n);
    }

    if (fechados < abertos) {
        s[i] = ')';
        gerarParenteses(s, i + 1, abertos, fechados + 1, n);
    }
}

int main() {
    int n = 3;
    char s[2 * n + 1];  
    s[2 * n] = '\0';
    gerarParenteses(s, 0, 0, 0, n);
    return 0;
}
