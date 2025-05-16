#include <stdio.h>

int verifica_palindromo(char str[]) {
    int i = 0, j;
    while (str[i] != '\0') i++;
    j = i - 2;
    i = 0;
    while (i < j) {
        if (str[i] != str[j]) return 0;
        i++; j--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);
    printf("É palíndromo? %d\n", verifica_palindromo(str));
    return 0;
}
