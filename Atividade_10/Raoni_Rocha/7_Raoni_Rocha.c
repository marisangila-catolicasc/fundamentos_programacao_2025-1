#include <stdio.h>

int verifica_primo(int num){
    if(num <= 1){
        return 0;
    }
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(verifica_primo(num)){
        printf("O numero %d e primo\n", num);
    }else{
        printf("O numero %d nao e primo\n", num);
    }
    
    return 0; 
}

