#include <stdio.h>
int main() {
    float soma = 0;
    float numeros[5];
    int i;
    for (i = 0; i < 3; i++) {
        
        printf("Digite os números que deseja:");    
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }
    printf("A media dos numeros será de: %.2f\n", soma / i);
    return 0;
}