#include <stdio.h>

int main(void){

    int n1, n2;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &n2);

    if (n1 > n2){

        printf("O numero %d é maior que %d \n", n1, n2);
    }

    else if (n2 > n1){
        printf("O numero %d é maior que %d \n", n2, n1);
    }

    else {
        printf("Os numeros sãos iguais \n");

    }
    return 0;
}