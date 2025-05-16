#include <stdio.h>

int meu_strlen(char *str) {
    int contador = 0;
    char *ptr = str;
    
    while (*ptr != '\0') {
        contador++;
        ptr++;
    }
    
    return contador;
}

int main() {
    char texto[100];
    
    printf("Digite uma string: ");
    scanf("%99[^\n]", texto);
    
    printf("Tamanho: %d\n", meu_strlen(texto));
    
    return 0;
}