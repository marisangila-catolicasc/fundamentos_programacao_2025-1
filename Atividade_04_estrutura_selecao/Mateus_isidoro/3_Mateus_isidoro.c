#include <stdlib.h>
#include <stdio.h>
int main() {
    int quanidade_maca;
    float valor_final;
    float valor1 = 2.30;
    float valor2 = 1.95;
    printf("Digite a quanidade de maças\n");
    scanf("%d", &quanidade_maca);
    if(quanidade_maca >= 12){
      printf("O valor da venda e de %.2f\n", valor2);
      valor_final = quanidade_maca * valor2;
      printf("O valor total da compra e de %.2f", valor_final);
    }else{
      printf("O valor da venda e de %.2f\n", valor1);
      valor_final = quanidade_maca * valor1;
      printf("O valor total da compra e de %.2f", valor_final);
    }
    return 0;
}
