#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Escreva o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Escreva o segundo numero: ");
    scanf("%d", &num2);
    
    if (num1 < num2) {
        while (num1 < num2) {
            num1++;
            printf("%d\n", num1);
        }
    } else if (num1 > num2) {
        while (num1 > num2) {
            num1--;
            printf("%d\n", num1);
        }
    } else {
        printf("Os numeros ja sao iguais: %d\n", num1);
    }
    
    printf("Agora os dois numeros sao iguais: %d\n", num1);
    
    return 0;
}
