#include <stdio.h>

int main(void) {
  int qtd;

  printf("As maçãs importadas custam R$ 2.30 cada se forem compradas menos de "
         "uma dúzia, e R$1.95 se forem compradas uma dúzia ou acima. \n\n");
  printf("Quantas maçãs você deseja comprar? ");
  scanf("%d", &qtd);

  if (qtd < 12){
    printf("O valor total da compra é de R$ %.2f", qtd * 2.30);
  }else if(qtd >= 12){
    printf("O valor total da compra é de R$ %.2f", qtd * 1.95);
  }

  return 0;
}