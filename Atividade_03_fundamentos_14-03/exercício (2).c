#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    float soma = numero1 + numero2;
    float subtracao = numero1 - numero2;
    float multiplicacao = numero1 * numero2;
    float divisao_primeiro_pelo_segundo = numero1 / numero2;
    float primeiro_elevado_pelo_segundo = pow(numero1, numero2);
    float resto_da_divisao_do_primeiro_pelo_segundo = (int)numero1 % (int)numero2;

    printf("A soma é: %f\n", soma);
    printf("A subtração é: %f\n", subtracao);
    printf("A multiplicação é: %f\n", multiplicacao);
    printf("A divisão do primeiro pelo segundo é: %f\n", divisao_primeiro_pelo_segundo);
    printf("O primeiro numero elevado pelo segundo é: %f\n", primeiro_elevado_pelo_segundo);
    printf("O resto da divisão do primeiro pelo segundo é: %.2f\n", resto_da_divisao_do_primeiro_pelo_segundo);

    return 0;
}