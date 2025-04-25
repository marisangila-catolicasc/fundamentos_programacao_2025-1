#include <stdio.h>

int main(void){

    int n, in;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    printf("Digite um incremento: \n");
    scanf("%d", &in);

    for (int i = 0; i <= n / in; i++){
        printf("%d", in * i);
    }

    return 0;
}