#include <stdio.h>

int meu_strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) return 0;
        i++;
    }
    return (str1[i] == str2[i]);
}

int main() {
    char s1[100], s2[100];
    printf("Digite a primeira string: ");
    fgets(s1, 100, stdin);
    printf("Digite a segunda string: ");
    fgets(s2, 100, stdin);
    if (meu_strcmp(s1, s2))
        printf("As strings são iguais.\n");
    else
        printf("As strings são diferentes.\n");
    return 0;
}
