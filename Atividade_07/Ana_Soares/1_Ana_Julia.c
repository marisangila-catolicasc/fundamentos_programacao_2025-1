#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    while (num1 != num2) {
        if (num1 < num2) {
            num1++;  
        } else {
            num1--;  
        }
    }

    printf("Os numeros agora sao iguais!\n");
    printf("Num1 = %d\n", num1);
    printf("Num2 = %d\n", num2);

    return 0;
}
