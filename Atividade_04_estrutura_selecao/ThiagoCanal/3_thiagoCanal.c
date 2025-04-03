#include <stdio.h>

int promocao(int num);

int main(void){
    int macas;
    

    printf("Quantas macas: ");
    scanf("%d", &macas);
    promocao(macas);
}

int promocao(int num){

    float preco, total;
    

    if(num >= 12){
        preco = 1.95;
        total = preco * num;
        
        printf("Total = R$%.2f", total);
    }else{
        preco = 2.3;
        total = preco * num;
        
        printf("Total = R$%.2f", total);
    }
}