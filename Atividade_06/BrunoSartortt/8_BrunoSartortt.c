#include <stdio.h>

int main() {
int num, maior;
    
    printf("Diga 10 números inteiros diferentes\n");
    printf("Número 1: ");
scanf("%d", &maior);

    for(int i = 2; i <= 10; i++) {

    printf("Número %d: ", i);
scanf("%d", &num);
        
        if(num > maior) {
            maior = num;
        }
    }
    printf("\nO maior número informado foi: %d\n", maior);
return 0;
}