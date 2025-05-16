#include <stdio.h>

void meu_strcat(char *destino, char *origem) {
    char *dest_ptr = destino;
    
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }
    
    while (*origem != '\0') {
        *dest_ptr = *origem;
        dest_ptr++;
        origem++;
    }
    
    *dest_ptr = '\0';
}

int main() {
    char str1[100], str2[50];
    
    printf("Digite a primeira string: ");
    scanf("%99[^\n]", str1);
    getchar();
    
    printf("Digite a segunda string: ");
    scanf("%49[^\n]", str2);
    
    meu_strcat(str1, str2);
    
    printf("Strings concatenadas: %s\n", str1);
    
    return 0;
}