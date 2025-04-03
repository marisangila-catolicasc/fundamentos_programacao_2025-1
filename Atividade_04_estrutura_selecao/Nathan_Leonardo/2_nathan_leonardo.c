#include <stdio.h>

int main(void){

    int n;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    if(n % 2 == 0){

        printf("Par \n");
    } else{

        printf("Impar \n");
    }

    return 0;
}