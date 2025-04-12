#include <stdio.h>

int main(){

    int maior = -9999999, num;

    printf("Informe 10 numeros diferentes\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &num);

        if(num > maior){
            maior = num;      
        }
    }
    printf("O maoir numero eh: %d", maior);
return 0;
}