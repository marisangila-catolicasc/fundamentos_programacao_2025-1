#include <stdio.h>

int main(void) {
    int operacao, num1, num2;
    while (1) {
        printf("Escolha uma opção\n");
        printf("[1] - Soma\n");
        printf("[2] - Subtração\n");
        printf("[3] - Multiplicação\n");
        printf("[4] - Divisão\n");
        printf("[5] - Sair\n");
        scanf("%d", &operacao);
        if (operacao == 5) {
            printf("Saindo\n");
            break;  
        }
        if (operacao >= 1 && operacao <= 4) {
            printf("Digite o primeiro digito: \n");
            scanf("%d", &num1);
            printf("Digite o segundo digito: \n");
            scanf("%d", &num2);
            switch (operacao) {
                case 1:
                    printf("A soma é: %d\n", num1 + num2);
                    break;
                case 2:
                    printf("A subtração é: %d\n", num1 - num2);
                    break;
                case 3:
                    printf("A multiplicação é: %d\n", num1 * num2);
                    break;
                case 4:
                    
                    if (num2 != 0) {
                        printf("A divisão é: %d\n", num1 / num2);
                    } else {
                        printf("Não da pra dividir por 0!\n");
                    }
                    break;
            }
        } else {
            printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0; 
}


