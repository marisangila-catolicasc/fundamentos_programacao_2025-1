#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18)
        printf("Não eleitor.\n");
    else {
        if (idade <= 65)
            printf("Eleitor obrigatório.\n");
        else
            printf("Eleitor facultativo.\n");
    }

    return 0;
}
