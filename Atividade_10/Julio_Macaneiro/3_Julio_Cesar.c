#include <stdio.h>
void meu_strcpy(char *st1, char *st2);
int main(void) {

    char palavra[100];

    printf("Informe um número: ");
    scanf("%s", palavra);

    char copia[200];

    meu_strcpy(palavra, copia);
}

void meu_strcpy(char *st1, char *st2) {
    int a = 0, b = 0;

    while (st1[b] != '\0') {
        st2[a] = st1[b];
        a++;
        b++;
    }

    st2[a] = '\0';

    printf("string copiada: %s\n", st1);
    printf("string original: %s\n", st2);
}
