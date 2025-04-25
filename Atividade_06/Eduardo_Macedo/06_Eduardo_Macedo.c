#include <stdio.h>

int main() {
    int limite, passo;

    printf("Informe o valor limite: ");
    scanf("%d", &limite);

    printf("Informe o valor do incremento: ");
    scanf("%d", &passo);

    for (int contador = 0; contador <= limite; contador += passo) {
        printf("%d\n", contador);
    }

    return 0;
}
