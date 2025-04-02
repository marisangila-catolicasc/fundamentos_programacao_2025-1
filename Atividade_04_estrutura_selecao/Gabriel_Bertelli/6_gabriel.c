#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    int numero1;
    int numero2;
    int numero3;

    printf("Digite o número 1: ");
    scanf("%d", &numero1);
    printf("Digite o número 2: ");
    scanf("%d", &numero2);
    printf("Digite o número 3: ");
    scanf("%d", &numero3);

    if (numero1 >= numero2 && numero1 >= numero3) {
        printf("O maior número é: %d\n", numero1);
    } 
    else if (numero2 >= numero1 && numero2 >= numero3) {
        printf("O maior número é: %d\n", numero2);
    } 
    else {
        printf("O maior número é: %d\n", numero3);
    }

    return 0;
}
