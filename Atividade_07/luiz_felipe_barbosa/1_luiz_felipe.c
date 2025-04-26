#include <stdio.h>

int main() {
    int num1, num2;

    // Solicita os dois números ao usuário
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Mostra os valores iniciais
    printf("Iniciando com num1 = %d e num2 = %d\n", num1, num2);

    // Enquanto os números forem diferentes
    while (num1 != num2) {
        if (num1 < num2) {
            num1++;  // Incrementa num1 se for menor
        } else {
            num1--;  // Decrementa num1 se for maior
        }
        printf("num1 agora é: %d\n", num1);  // Mostra o progresso
    }

    printf("Agora os números são iguais: %d\n", num1);
    return 0;
}
