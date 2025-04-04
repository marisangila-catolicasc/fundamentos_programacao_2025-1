#include <stdio.h>
int main() {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if (ano > 0 && ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0))
        printf("Bissexto\n");
    else
        printf("Nao bissexto\n");
    return 0;
}