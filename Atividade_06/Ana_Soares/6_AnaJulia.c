#include <stdio.h>

int main() {
    int numero, aumentos, x;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);

    printf("Agora digite o número do aumento:\n");
    scanf("%d", &aumentos);

    printf("\nOs números com aumentos são:\n");
    
    for(x = 0; x <= numero; x+= aumentos) {
        printf("\n%d\n", x); 
    }
    return 0;
}
