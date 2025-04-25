#include <stdio.h>

int main() {
    int numero;
    int contador_pares = 0;
    int contador_impares = 0;
    
    printf("Digite 10 numeros inteiros:\n");
    
    for(int i = 1; i <= 10; i++) {
        printf("Numero %d: ", i);
        scanf("%d", &numero);
        
        if(numero % 2 == 0) {
            contador_pares++;
        } else {
            contador_impares++;
        }
    }
    
    printf("\nResultado:\n");
    printf("Quantidade de numeros pares: %d\n", contador_pares);
    printf("Quantidade de numeros impares: %d\n", contador_impares);
    
    return 0;
}