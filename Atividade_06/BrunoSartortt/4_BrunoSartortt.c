#include <stdio.h>

int main() {
int num, par = 0, impar = 0;
    
    printf("Diga 10 números inteiros:\n");
    
    for(int i = 0; i < 10; i++) {
    printf("Número %d: ", i + 1);
        scanf("%d", &num);
        
        if(num % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }
    
    printf("Resultado:\n");
    printf("Números pares: %d\n", par);
    printf("Números ímpares: %d\n", impar);
    return 0;
}