#include <stdio.h>
const float atacado = 1.95, varejo = 2.30;

int main(){

    float macas;

    printf("Quantas macas voce comprou?\n");
    scanf("%f", &macas);

    if(macas >= 12){
        printf("A sua compra ficou em R$%.2f", macas * atacado);
    }
    else{
        printf("A sua compra ficou em R$%.2f", macas * varejo);
    }
}