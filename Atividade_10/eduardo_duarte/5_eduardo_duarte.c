#include <stdio.h>

int verifica_palindromo(const char *str) {
int i = 0, j = 0;
    while (str[j] != '\0') j++;
    j--;
    while (i < j) {
        if (str[i] != str[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
int main() {
const char *palavra = "arara";
    if (verifica_palindromo(palavra)) {
        printf("\"%s\" é um palíndromo.\n", palavra);
    } else {
        printf("\"%s\" não é um palíndromo.\n", palavra);
    }
    return 0;
}