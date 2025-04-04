#include <stdio.h>
int main() {
    int quantidade_maca;
    float valor_final;
    float valor1 = 2.30;
    float valor2 = 1.95;
    printf("Digite a quantidade de maçãs: ");
    scanf("%d", &quantidade_maca);
    if(quantidade_maca >= 12){
      printf("O valor da venda eh de %.2f\n", valor2);
      valor_final = quantidade_maca * valor2;
      printf("O valor total da compra eh de %.2f", valor_final);
    }else{
      printf("O valor da venda eh de %.2f\n", valor1);
      valor_final = quantidade_maca * valor1;
      printf("O valor total da compra eh de %.2f", valor_final);
    }
    return 0;
}