#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Numero 1?\n");
    scanf("%d", &num1);
    
    printf("Numero 2?\n");
    scanf("%d", &num2);

    printf("Soma ");
    printf("%d\n", num1 + num2);
    
    printf("Menos ");
    printf("%d\n", num1 - num2);
    
    printf("Vezes ");
    printf("%d\n", num1 * num2);
    
    printf("Divisao ");
    printf("%d\n", num1 / num2);
    
    printf("Resto ");
    printf("%d\n", num1 % num2);

    return 0;
}
