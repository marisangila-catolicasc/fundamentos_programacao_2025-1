#include <stdio.h>

int main() {
    int numero, par = 0, impar = 0;

    for(int i = 0; i <= 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);
    
        if (numero % 2)
        {
            par++;
        } else {
            impar++;
        } 
    }

    printf("numeros pares: %d\n", par);
    printf("numeros impares: %d\n", impar);
    
    return 0;
}