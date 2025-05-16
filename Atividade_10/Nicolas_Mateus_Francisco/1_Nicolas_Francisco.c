#include <stdio.h>

int meu_strlen(char *str) {
    
    int tamanho = 0;

    while (str[tamanho] != '\0') {
        if(str[tamanho] == '\n') {
            break;
        }
        tamanho++;
    }

    return tamanho;
}

int main() {
    
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    int tamanho = meu_strlen(frase);

    printf("O tamanho da string é: %d\n", tamanho);

    return 0;
}
