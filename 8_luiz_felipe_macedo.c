#include <stdio.h>


int main(){
    
    int maior = 0, num;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }
    }
    printf("Maior numero: %d\n", maior);

    return 0;
}