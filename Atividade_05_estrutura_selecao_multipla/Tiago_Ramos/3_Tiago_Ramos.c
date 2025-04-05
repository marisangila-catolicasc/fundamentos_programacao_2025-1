#include <stdio.h>

int main() {

    float numero1;
    float numero2;
    float resultado;
    int operacao;

    printf("Informe o primeiro número: ");
    scanf("%f", &numero1);

    printf("Informe o segundo número: ");
    scanf("%f", &numero2);

    printf("\nEscolha a operação desejada:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Divisão\n");
    printf("4 - Multiplicação\n");
    printf("Digite o número da operação: ");
    scanf("%d", &operacao);

    printf("\n");

    switch (operacao) {

        case 1:
            resultado = numero1 + numero2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;

        case 2:
            resultado = numero1 - numero2;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;

        case 3:
            resultado = numero1 / numero2;
            if (numero2 == 0) {
                printf("Divisão por zero não funciona.\n");
            } else {
                printf("Resultado da divisão: %.2f\n", resultado);
            }
            break;

        case 4:
            resultado = numero1 * numero2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;

        default:
            printf("Escolha entre 1 e 4.");
    }

    return 0;
}
