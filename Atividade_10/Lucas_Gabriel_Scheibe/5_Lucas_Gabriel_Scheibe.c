#include <stdio.h>

int verifica_palindromo(char *pala, int tamanho);
int meu_strlen(char *palavra);

int main() {
    char palavra[100];

    printf("Digite: ");
    scanf("%s", palavra);

    int length = meu_strlen(palavra);
    int verificacao = verifica_palindromo(palavra, length);

    if (verificacao == 1) {
        printf("palindromo\n");
    } else {
        printf("não é palindromo\n");
    }

    return 0;
}

int verifica_palindromo(char *pala, int tamanho) {
    int i = tamanho - 1, j = 0;
    char alap[100];

    printf("Tamanho: %d\n", tamanho);

    while (i >= 0) {
        alap[j] = pala[i];
        i--;
        j++;
    }
    alap[j] = '\0';

    printf("Pala: %s\n", pala);
    printf("Alap: %s\n", alap);

    int k = 0;
    while (pala[k] != '\0') {
        if (pala[k] != alap[k]) {
            return 0;
        }
        k++;
    }
    return 1;
}

int meu_strlen(char *palavra) {
    int i = 0;

    while (palavra[i] != '\0') {
        i++;
    }
    return i;
}
