#include <stdio.h>

int meu_strcmp(char *t1, char *t2);

int main() {
    char a[100], b[200];

    printf("Digite a sua primeira string: ");
    scanf("%s", a);

    printf("Digite a sua segunda string: ");
    scanf("%s", b);

    int confere = meu_strcmp(a, b);

    if (confere) {
        printf("iguais");
    } else {
        printf("diferentes");
    }

    return 0;
}

int meu_strcmp(char *t1, char *t2) {
    int i = 0;

    while (t1[i] != '\0' && t2[i] != '\0') {
        if (t1[i] != t2[i]) {
            return 0;
        }
        i++;
    }

    if (t1[i] == '\0' && t2[i] == '\0') {
        return 1;
    } else {
        return 0;
    }
}
