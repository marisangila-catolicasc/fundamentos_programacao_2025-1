#include <stdio.h>

void meu_strcat(char destino[], char origem[]) {
    int i = 0, j = 0;
    while (destino[i] != '\0') i++;
    while (origem[j] != '\0') {
        destino[i++] = origem[j++];
    }
    destino[i] = '\0';
}

int main() {
    char str1[200], str2[100];
    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);
    meu_strcat(str1, str2);
    printf("Resultado: %s", str1);
    return 0;
}
