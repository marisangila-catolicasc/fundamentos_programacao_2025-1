
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);

    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    printf("Ajustando os valores...\n");

    while (num1 != num2) {
        printf("num1 = %d | num2 = %d\n", num1, num2);
        if (num1 < num2)
            num1++;
        else
            num1--;
    }

    printf("Os números agora são iguais: %d\n", num1);

    return 0;
}
