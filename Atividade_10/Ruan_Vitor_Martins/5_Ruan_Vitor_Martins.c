#include <stdio.h>
#include <string.h>

int verifica_palindromo(char str[]) {
    int i, tamanho;

    tamanho = strlen(str);

    for (i = 0; i < tamanho / 2; i++) {
        if (str[i] != str[tamanho - 1 - i]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (verifica_palindromo(palavra) == 1) {
        printf("eh um palindromo\n");
    } else {
        printf("nao eh um\n");
    }

    return 0;
}

