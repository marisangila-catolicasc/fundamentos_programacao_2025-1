#include <stdio.h>

void par_impar(int n);

int main(void){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);
    par_impar(n);
}

void par_impar(int n){
    if((n % 2) == 0){
        printf("Par");
    }else{
        printf("Impar");
    }
}