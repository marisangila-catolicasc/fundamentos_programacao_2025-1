#include <stdio.h>
#include <math.h>

int main() {
    int numero_um, numero_dois;

    printf("Dê o primeiro número: ");
    scanf("%d", &numero_um);
    printf("Dê o segundo número: ");
    scanf("%d", &numero_dois);

    printf("O resultado da soma é: %d\n", numero_um + numero_dois);
    printf("O resultado da subtração é: %d\n", numero_um - numero_dois);
    printf("O resultado da multiplicação é: %d\n", numero_um * numero_dois);
    printf("O resultado da divisão é: %d\n", numero_um / numero_dois); 
    printf("O resultado do resto da divisão é: %d\n", numero_um % numero_dois); 
    printf("O resultado da potência é: %.0f\n", pow(numero_um, numero_dois));

    return 0;
}
