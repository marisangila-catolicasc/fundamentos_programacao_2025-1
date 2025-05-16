#include <stdio.h>

void meu_strcat(char *dest, char *src) {
    int a = 0, b = 0;

    while (dest[a] != '\0') { 
    a++;
    }
    while (src[b] != '\0') {
        dest[a + b] = src[b];b++;
    }
    dest[a + b] = '\0';
}

int main() {
    char texto1[100], texto2[100];

    printf("Informe a 1ª string: ");
    scanf(" %[^\n]", texto1);
    getchar();

    printf("Informe a 2ª string: ");
    scanf(" %[^\n]", texto2);

    meu_strcat(texto1, texto2);

    printf("Resultado da junção: %s\n", texto1);

    return 0;
}
