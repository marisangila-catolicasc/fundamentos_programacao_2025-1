#include <stdio.h>

void meu_strcpy(char *dest, const char *src) {
int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
char origem[] = "aula de programacao!";
char destino[100];
    meu_strcpy(destino, origem);
    printf("E entao, temos: %s\n", destino);
    return 0;
}