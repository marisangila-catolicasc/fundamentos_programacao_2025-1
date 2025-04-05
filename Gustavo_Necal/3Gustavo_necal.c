#include <stdio.h>

int main() {
    int a, b;
    float resultado;
    char operacao;

    printf("Digite um numero:\n");
    scanf("%d", &a);
    printf("Digite outro numero:\n");
    scanf("%d", &b);

    printf("[+] - Soma\n");
    printf("[-] - Subtracao\n");
    printf("[*] - Multiplicacao\n");
    printf("[/] - Divisao\n");
    printf("Escolha uma operacao:\n");
    scanf(" %c", &operacao);  // espaço antes do %c para capturar corretamente

    switch (operacao) {
        case '+':
            resultado = a + b;
            printf("O resultado é: %.2f\n", resultado);
            break;
        case '-':
            resultado = a - b;
            printf("O resultado é: %.2f\n", resultado);
            break;
        case '*':
            resultado = a * b;
            printf("O resultado é: %.2f\n", resultado);
            break;
        case '/':
            if (b != 0) {
                resultado = (float)a / b;
                printf("O resultado é: %.2f\n", resultado);
            }
            if (b == 0) {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Operação inválida, tente novamente!\n");
            break;
    }

    return 0;
}
