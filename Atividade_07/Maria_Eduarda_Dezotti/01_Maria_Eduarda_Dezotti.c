#include <stdio.h>

int main() {
    int num1, num2;

    // Solicita os dois números inteiros
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    // Compara e incrementa até que num1 seja igual a num2
    while (num1 < num2) {
        num1++;
        printf("Incrementando: %d\n", num1);
    }

    // Exibe resultado final
    if (num1 == num2) {
        printf("Os numeros agora sao iguais: %d\n", num1);
    }

    return 0;
}