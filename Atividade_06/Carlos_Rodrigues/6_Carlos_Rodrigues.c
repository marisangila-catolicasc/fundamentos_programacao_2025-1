#include <stdio.h>

int main() {
    int numero, aumentos, x;

    printf("Digite o número desejado:\n");
    scanf("%d", &numero);

    printf("Digite agora o número do aumento:\n");
    scanf("%d", &aumentos);

    printf("\nOs números com os aumentos são:\n");
    
    for(x = 0; x <= numero; x+= aumentos) {
        printf("\n%d\n", x); 
    }
    return 0;
}
