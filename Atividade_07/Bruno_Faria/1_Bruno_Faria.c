#include <stdio.h>

int main() {
    int num1, num2;

    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);


    printf("Início: num1 = %d, num2 = %d\n", num1, num2);

    
    while (num1 != num2) {
        if (num1 < num2) {
            num1++;
        } else {
            num1--;
        }
        printf("num1 agora é %d\n", num1);
    }

    printf("Agora os números são iguais: %d\n", num1);

    return 0;
}
