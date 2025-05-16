#include <stdio.h>

int verifica_palindromo(char *str) {
    int tamanho = 0;
    char *ptr = str;
    
    while (*ptr != '\0') {
        tamanho++;
        ptr++;
    }
    
    for (int i = 0; i < tamanho / 2; i++) {
        if (str[i] != str[tamanho - 1 - i]) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char texto[100];
    
    printf("Digite uma string: ");
    scanf("%99[^\n]", texto);
    
    if (verifica_palindromo(texto)) {
        printf("%s é um palíndromo\n", texto);
    } else {
        printf("%s não é um palíndromo\n", texto);
    }
    
    return 0;
}