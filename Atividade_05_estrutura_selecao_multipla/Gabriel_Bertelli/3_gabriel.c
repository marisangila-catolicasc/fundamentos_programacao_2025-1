#include <stdio.h>

int main(int argc, char const *argv[]) {

    float numero1; 
    float numero2;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    char operacao;
    printf("\n[+] Para adição\n");
    printf("[-] Para subtração\n");
    printf("[*] Para multiplicação\n");
    printf("[/] Para divisão\n");
    printf("Escolha a operação: ");
    scanf(" %c", &operacao);

    float resultado;

    switch(operacao) {
        
        case '+':
            resultado = numero1 + numero2;
            break;

        case '-':
            resultado = numero1 - numero2;
            break;

        case '*':
            resultado = numero1 * numero2;
            break;

        case '/':
            if (numero2 == 0) {
                printf("Não pode dividir por 0.\n");
                return 1;
            }
            resultado = numero1 / numero2;
            break;

        default:
            printf("Você digitou uma operação inválida.\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    
    return 0;
}
