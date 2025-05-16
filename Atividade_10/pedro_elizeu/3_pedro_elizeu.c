#include <stdio.h>

void meu_strcpy(char *destino, char *origem) {
    int i = 0;
    
    do {
        destino[i] = origem[i];
        i++;
    } while (origem[i-1] != '\0');
}

int main() {
    char origem[100], destino[100];
    
    printf("Digite uma string: ");
    scanf("%99[^\n]", origem);
    
    meu_strcpy(destino, origem);
    
    printf("String copiada: %s\n", destino);
    
    return 0;
}