#include <stdio.h>

int meu_strlen(const char *str) {
int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    printf("O tamanho e: %d\n", meu_strlen("Eduardo"));
    return 0;
}