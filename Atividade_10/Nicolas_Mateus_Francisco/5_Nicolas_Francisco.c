#include <stdio.h>
#include <string.h>

int verifica_palindromo(char *str) {
    int i = 0;
    int tamanho = strlen(str);


    if (str[tamanho - 1] == '\n') {
        str[tamanho - 1] = '\0';
        tamanho--;
    }


    while (i < tamanho / 2) {
        if (str[i] != str[tamanho - i - 1]) {
            return 1;
        }
        i++;
    }

    return 0;
}

int main() {
    char frase[100];

    printf("Digite uma palavra: ");
    fgets(frase, sizeof(frase), stdin);

    if (verifica_palindromo(frase)) {
        printf("A string nao eh um palindromo!\n");
    } else {
        printf("A string eh um palindromo!\n");
    }

    return 0;
}
