#include <stdio.h>

int meu_strlen(const char *str) {
int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    printf("O tamanho é: %d\n", meu_strlen("Bruno"));
    return 0;
}