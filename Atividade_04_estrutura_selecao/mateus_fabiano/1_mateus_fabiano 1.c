#include <stdio.h>
int main(){
    float n;

    printf("Digite um número:\n");
    scanf("%f", &n);

    if(n >=0){
        printf("O valor inserido é positivo!");
    }else{
        printf("O valor inserido é negativo!");
    }
    return 0;
}