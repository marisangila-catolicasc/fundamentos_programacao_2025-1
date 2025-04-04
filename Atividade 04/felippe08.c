#include <stdio.h>
int main() {
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano > 0) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            printf("Esse ano é bissexto!\n");
        } else {
            printf("Esse ano não é bissexto!\n");
        }
    } else {
        printf("Esse ano é invadalido!\n");
    }

    return 0;
}