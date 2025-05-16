#include <stdio.h>

int meu_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int verifica_palindromo(char *str) {
    int i = 0, j = meu_strlen(str) - 1;
    while (i < j) {
        if (str[i] != str[j]) return 0;
        i++;
        j--;
    }
    return 1;
}

int main() {
    char palavra[100];
    printf("digite uma palavra: ");
    scanf("%s", palavra);

    if (verifica_palindromo(palavra))
        printf("eh um palindromo.\n");
    else
        printf("nao eh um palindromo.\n");

    return 0;
}
