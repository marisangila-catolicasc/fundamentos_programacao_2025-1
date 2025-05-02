#include <stdio.h>
int main() {
    float somatoria = 0;
    float numeros[5];
    int i;
    for (i = 0; i < 3; i++) {
        
        printf("Digite os números escolhidos:");    
        scanf("%f", &numeros[i]);
        somatoria += numeros[i];
    }
        printf("O resultado da media será de: %.2f\n", soma / i);
    return 0;
}