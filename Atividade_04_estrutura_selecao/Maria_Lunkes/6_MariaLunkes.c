#include <stdio.h>

int main() {
    int num1, num2, num3;
    int num_maior;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite um segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite um terceiro número: ");
    scanf("%d", &num3);
    
    num_maior = num1; 

    if (num2 > num_maior)
        num_maior = num2;
    if (num3 > num_maior)
        num_maior = num3;

    printf("O maior número é: %d\n", num_maior);

    return 0;
}