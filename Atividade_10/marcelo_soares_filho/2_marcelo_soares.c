#include <stdio.h>

void meu_strcat(char *destino, char *origem) {
    int i = 0, j = 0;

    while (destino[i] != '\0') {
        i++;
    }
    while (origem[j] != '\0') {
        destino[i + j] = origem[j];
        j++;
    }
    destino[i + j] = '\0';
}

int main() {
    char str1[100], str2[50];

    printf("Digite a primeira string: ");
    scanf("%[^\n]", str1);
    getchar();

    printf("Digite a segunda string: ");
    scanf("%[^\n]", str2);

    meu_strcat(str1, str2);

    printf("Strings concatenadas: %s\n", str1);

    return 0;
}