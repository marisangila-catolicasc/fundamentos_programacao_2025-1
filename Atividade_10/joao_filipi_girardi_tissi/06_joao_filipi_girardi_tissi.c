#include <stdio.h>

int verifica_par_impar(int num){
    if (num % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (verifica_par_impar(num) == 1){
        printf("O numero %d e par.\n", num);
    }else{
        printf("O numero %d e impar.\n", num);
    }
    return 0; 
}