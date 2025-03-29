#include <stdio.h>
int main(){

    float total;
    int qtdemacas;

    printf("Digite macas voce comprou:\n");
    scanf("%d", &qtdemacas);

    if(qtdemacas>=12){
        total = qtdemacas * 1.95;
    }else{
        total = qtdemacas * 2.30;
    }

    printf("O total da sua compra é de: R$%.2f", total);

    return 0;
}