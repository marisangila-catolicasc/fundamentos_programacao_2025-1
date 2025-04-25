#include "stdio.h"

int main(void){
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    while(valor1 > valor2){
        valor1--;
        printf("%d\n",valor1);
    }
    while (valor1 < valor2){
        valor1++;
        printf("%d\n", valor1);
    }
    
}