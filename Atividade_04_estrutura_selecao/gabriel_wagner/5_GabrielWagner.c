#include <stdio.h>

int main() {
    int idade;

    printf("Idade?\n");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Nao eleitor\n");
    } else {
        if (idade <= 65) {
            printf("Eleitor obrigatorio\n");
        } else {
            printf("Eleitor facultativo\n");
        }
    }

    return 0;
}
