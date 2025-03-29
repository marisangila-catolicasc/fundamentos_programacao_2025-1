#include <stdio.h>
int main(){

    int n, pi;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    pi = n % 2;

    if(pi >0){
        printf("Ímpar");
     }else{
         printf("Par");
        }
    }
