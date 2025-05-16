#include <stdio.h>

int meu_strcmp(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) return 0;
        i++;
    }
    return (s1[i] == '\0' && s2[i] == '\0') ? 1 : 0;
}

int main() {
    char a[100], b[100];
    printf("digite a primeira string: ");
    scanf("%s", a);
    printf("digite a segunda string: ");
    scanf("%s", b);

    if (meu_strcmp(a, b))
        printf("as strings são iguais.\n");
    else
        printf("as strings são diferentes.\n");

    return 0;
}
