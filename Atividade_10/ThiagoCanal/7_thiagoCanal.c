#include <stdio.h>

int primo(int n);

int main(void){
    int number;

    printf("Numero: ");
    scanf("%d", &number);

    int primidade = primo(number);

    if(primidade == 1){
        printf("Primo");
    }else if(primidade == 0){
        printf("Not primo");
    }
}

int primo(int n){
    if(n < 2){
        return 0;
    }

    for(int i = 2; i <= n / 2; i++){
        if((n % i) == 0){
            return 0;
        }
    }

    return 1;
}