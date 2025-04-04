#include <stdlib.h>
#include <stdio.h>
int main() {
    int numero;
    printf("Escolha um numero\n");
    scanf("%d", &numero);
    if(numero%2 == 0){
        printf("E par");
    }else{
        printf("E impar");
    }
    return 0;
}
