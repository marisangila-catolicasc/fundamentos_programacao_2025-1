#include <stdio.h>

int main(void){

    int n1; 

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n1);   

    if (n1 < 0){

        printf("Negativo\n");
    }
    else if (n1 > 0){

        printf("Positivo \n");
    }

    return 0;
}