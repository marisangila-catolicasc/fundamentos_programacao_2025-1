#include <stdlib.h>
#include <stdio.h>

/*
3. As ma¸c˜as importadas custam R$ 2.30 cada se forem compradas menos de uma
d´uzia, e R$ 1.95 se forem compradas uma d´uzia ou acima. Fa¸ca um programa que
leia o n´umero de ma¸c˜as compradas, calcule e escreva o custo total da compra.
*/

int main() {
  int qntMacas;
  float preco;
  
  printf("Quantidade de macas? ");
  scanf("%d", &qntMacas);
  
  if (qntMacas < 12){
    preco = qntMacas * 2.30;
  }
  else{
    preco = qntMacas * 1.95;
  }
    printf("O valor total da compra é de R$%.2f", preco);
  
  return 0;
}
