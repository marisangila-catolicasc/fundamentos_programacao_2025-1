#include <stdio.h>

int verifica_primo(int num){
    for (int i = 2; i < num; i++) {
        if (num % i == 0){ 
            return 0;
        }else{
            return 1;
        }
    }
    
}

int main(){

    int num;

    printf("Informe um numero:\n");
    scanf("%d", &num);

    if(verifica_primo(num) == 1){
        printf("Numero primo");
    }else{
        printf("Nao eh primo");
    }
return 0;
}