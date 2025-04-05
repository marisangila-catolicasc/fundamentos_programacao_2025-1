#include <stdio.h>

int main() {
    int opera;
    int num1, num2, resultado;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite a operação que quer realizar:\n");
    printf("1. (+)\n");
    printf("2. (-)\n");
    printf("3. (/)\n");
    printf("4. (*)\n");
    scanf("%d", &opera);

    switch (opera) {
        case 1:
            resultado = num1 + num2;
            printf("O resultado da soma é %d\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("O resultado da subtração é %d\n", resultado);
            break;
        case 3:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("O resultado da divisão é %d\n", resultado);
            } else {
                printf("Erro: divisão por zero.\n");
            }
            break;
        case 4:
            resultado = num1 * num2;
            printf("O resultado da multiplicação é %d\n", resultado);
            break;
        default:
            printf("Operação inválida.\n");
            break;
    }

    return 0;
}