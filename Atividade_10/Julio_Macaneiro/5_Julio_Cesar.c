#include <stdio.h>
int meu_strlen(char *s) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

int verifica_palindromo(char *s, int n) {
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char palavra[100];

    printf("Digite algum numero: ");
    scanf("%s", palavra);
    int tamanho = meu_strlen(palavra);


    
    if (verifica_palindromo(palavra, tamanho)) {
        printf("Palindromo\n");
    } else {
        printf("Nao será um palindromo\n");
    }

    return 0;
}
