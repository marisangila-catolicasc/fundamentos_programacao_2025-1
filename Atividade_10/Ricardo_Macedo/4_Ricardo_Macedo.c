#include <stdio.h>

int meu_strcmp(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; 
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;
    } else {
        return 0;
    }
}

int main() { 
    char texto1[] = "Teste";
    char texto2[] = "Teste";

    if (meu_strcmp(texto1, texto2)) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}
