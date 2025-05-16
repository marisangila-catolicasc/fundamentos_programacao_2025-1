#include <stdio.h>

int verifica_par_impar(int n){
    if (n % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int num, par;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    par = verifica_par_impar(num);

    if (par == 1){
        printf("\nÉ par!\n");
    } else {
        printf("\nNão é par!\n");
    }
    
    return 0;
}