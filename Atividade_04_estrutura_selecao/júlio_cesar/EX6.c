#include <stdio.h>

int main(void) {
    int n1, n2, n3;

    
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    
    if (n1 >= n2 && n1 >= n3) {
    printf("O maior numero e primeiro número: %d", n1);
        
    } else if (n2 >= n1 && n2 >= n3) {
    printf("O maior numero e segundo número: %d", n2);

        
    } else {
    printf("O maior numero e terceiro número: %d", n3);    
    }


    
    return 0;
}
