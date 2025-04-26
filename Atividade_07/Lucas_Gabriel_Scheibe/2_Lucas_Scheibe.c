#include <stdio.h>

int main() {
    char operador, opcao;
    float a, b;

    do {
        printf("Escolha uma operacao (+, -, *, /) ou 's'para sair:\n");
        scanf(" %c", &operador);

        if (operador == 's'){
            printf("Obrigado por usar o programa!\n");
            break;
        }

        printf("Digite o primeiro numero:\n");
        scanf("%f", &a);

        printf("Digite o segundo numero:\n");
        scanf("%f", &b);

        switch(operador) {
            case '+':
                printf("Resultado: %.2f\n", a + b);
                break;
            case '-':
                printf("Resultado: %.2f\n", a - b);
                break;
            case '*':
                printf("Resultado: %.2f\n", a * b);
                break;
            case '/':
                if (b != 0) {
                    printf("Resultado: %.2f\n", a / b);
                } else {
                    printf("Divisao por zero nao e possivel.\n");
                }
                break;
            default:
                printf("Operacao invalida!\n");
        }

        printf("Deseja continuar? (s/n):\n");
        scanf(" %c", &opcao);

    } while(opcao == 's');

    return 0;
}
