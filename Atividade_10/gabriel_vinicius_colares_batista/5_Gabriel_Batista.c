#include <stdio.h>

int meu_strlen(char *str) {
    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}

int verifica_palindromo(char *str) {
    int tamanho = meu_strlen(str);
    int i, j;

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char texto[100];

    printf("Digite uma string: ");
    scanf("%[^\n]", texto);

    if (verifica_palindromo(texto)) {
        printf("%s é um palíndromo.\n", texto);
    } else {
        printf("%s não é um palíndromo.\n", texto);
    }

    return 0;
}