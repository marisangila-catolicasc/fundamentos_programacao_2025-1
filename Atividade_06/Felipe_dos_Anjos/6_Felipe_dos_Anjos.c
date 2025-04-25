#include <stdio.h>

int main() {
    int n, i;

    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    printf("Digite o valor do incremento: ");
    scanf("%d", &i);

    
    if (i == 0) {
        printf("O incremento não pode ser zero!\n");
        return 1; 
    }

    
    for (int j = 0; j <= n; j += i) {
        printf("%d ", j);
    }
    printf("\n");

    return 0;
}
