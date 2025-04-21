#include <stdio.h>
int main(){

    int num, pares = 0, impares = 0;

    for(int i = 0; i < 10; i++){
        printf("Informe um numero: \n");
        scanf("%d", &num);
        
        if(num % 2 == 0){
            pares++;
        }
        else{
            impares++;
        }
    }
    printf("Sao %d pares e %d impares", pares, impares);
    

    return 0;

}