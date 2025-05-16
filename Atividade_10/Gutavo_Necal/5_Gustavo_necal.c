#include <stdio.h>

int verifica_palindromo(char str[]) {
    int i = 0, j;
    while (str[i] != '\0' && str[i] != '\n') i++;
    j = i - 1;
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) return 0;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    if (verifica_palindromo(str))
        printf("É palíndromo.\n");
    else
        printf("Não é palíndromo.\n");
    return 0;
}
