#include <stdio.h>

int meu_strcmp(char *t1, char *t2);

int main() {
    char comp[100], pmoc[100];

    printf("String1: ");
    scanf("%s", comp);

    printf("String2: ");
    scanf("%s", pmoc);

    int iguais = meu_strcmp(comp, pmoc);

    if (iguais == 1) {
        printf("Sao iguais\n");
    } else {
        printf("Sao diferentes :<\n");
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