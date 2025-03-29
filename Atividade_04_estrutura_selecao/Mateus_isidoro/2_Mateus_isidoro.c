#include <stdlib.h>
#include <stdio.h>
int main() {
    int numero;
    printf("Escolha um numero\n");
    scanf("%d", &numero);
    if(numero%2 == 0){
        printf("É par");
    }else{
        printf("É impar");
    }
    return 0;
}
