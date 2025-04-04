#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    float resultado = 0;
    char operacao;

    printf("Digite um número:\n");
    scanf("%d", &a);
    printf("Digite outro número:\n");
    scanf("%d", &b);
    printf("\n");

    printf("[+] - Soma\n");
    printf("[-] - Subtração\n");
    printf("[*] - Multiplicação\n");
    printf("[/] - Divisão\n");
    printf("Digite a operação desejada: ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            resultado = (float)a + b;
            break;
        case '-':
            resultado = (float)a - b;
            break;
        case '*':
            resultado = (float)a * b;
            break;
        case '/':
            if (b != 0) {
                resultado = (float)a / b;
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Erro: operação inválida!\n");
    }

    printf("O resultado e: %.2f\n", resultado);
    return 0;
}