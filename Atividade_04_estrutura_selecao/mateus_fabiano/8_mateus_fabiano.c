#include <stdio.h>
#include <math.h>
int main(){

    int ano, bis;

    printf("Digite um ano:\n");
    scanf("%d", &ano);

    bis = ano%4;

    if(bis>0){
        printf("O ano não é bissexto.\n");
    }else{
        printf("Ano bissexto.\n");
    }

    return 0;
}