#include <stdio.h>

int par_impar(int n);

int main(void){
    int number;

    printf("Numero: ");
    scanf("%d", &number);

    int paridade = par_impar(number);

    if(paridade == 1){
        printf("Par");
    }else{
        printf("Impar");
    }
}

int par_impar(int n){
    if((n % 2) == 0){
        return 1;
    }else{
        return 0;
    }
}