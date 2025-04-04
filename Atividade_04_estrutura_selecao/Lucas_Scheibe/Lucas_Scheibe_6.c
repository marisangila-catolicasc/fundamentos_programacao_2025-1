#include <stdio.h>

int main (){
    float a, b, c;

    printf("Digite um numero:\n");
    scanf ("%f", &a);

    printf("Digite outro numero:\n");
    scanf ("%f", &b);

     printf("Digite mais um outro numero:\n");
    scanf ("%f", &c);

        if(a > b && a > c){
            printf("o primeiro numero e maior");
            }
            else if (b > a && b > c){
                printf("o segundo numero e maior");
            }
            else if (c > a && c > a){
                printf("o terceiro numero e maior");
            }
            else{
                printf("os numeros sao iguais ou deu tudo errado");
            }
}