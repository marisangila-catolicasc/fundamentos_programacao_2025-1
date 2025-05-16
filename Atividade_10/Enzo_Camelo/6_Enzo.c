#include <stdio.h>

int verifica_par_impar(int n){
    if (n % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int n, eh_par;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    eh_par = verifica_par_impar(n);

    if (eh_par == 1){
        printf("\nEh par!\n");
    } else {
        printf("\nNão eh par.\n");
    }
    
    return 0;
}