#include <stdio.h> 

int main(void){

    int n1, n2, n3;

    printf("Digite um numero: \n");
    scanf("%d", &n1);
     
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);

    printf("Digite o terceiro numer: \n");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3){
        printf("O maior numero digitado é %d \n", n1);
    }
    else if (n2 > n1 && n2 > n3){
        printf("O maior numero digitado é %d \n", n2);
    }
    else{
        printf("O maior numero digitado é %d \n", n3);
    }

    return 0;
}