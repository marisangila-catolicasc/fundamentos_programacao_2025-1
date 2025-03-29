#include <stdio.h>

int main(void) {
  float macas, preco, preco_duzia;

  printf("Digite a quantidade de maçãs compradas: ");
  scanf("%f", &macas);

  if(macas >= 12){
    preco_duzia = macas * 1.95;
    printf("O valor total da compra é: R$%.2f", preco_duzia);
  }else{
    preco = macas * 2.30;
    printf("O valor total da compra é: R$%.2f", preco);
  }
    
  return 0;
}