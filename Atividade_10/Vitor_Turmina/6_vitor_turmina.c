#include <stdio.h>

int verifica_par_impar(int num){
    if(num % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    int num;

    printf("Informe um numero:\n");
    scanf("%d", &num);
    
    if(verifica_par_impar == 1){
        printf("O numero eh par");
    }
    else{
        printf("O numero eh impar");
    }
return 0;
}