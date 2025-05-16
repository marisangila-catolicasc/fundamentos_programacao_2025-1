#include <stdio.h>

int meu_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int main() {
    char s[100];
    printf("Digite alguma string: ");
    scanf("%s", s);

    int tam = meu_strlen(s);
    printf("A string tem %d caracteres.\n", tam);

    return 0;
}
