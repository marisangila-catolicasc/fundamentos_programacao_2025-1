#include <stdio.h>
int main()
{
int quantidade_maca;
float valor_compra;
  
printf("Informe a quantidade de macas que deseja comprar: ");
scanf("%d", &quantidade_maca);
  
if(quantidade_maca >= 12){
valor_compra = 1.95 * quantidade_maca;
} else {
valor_compra = 2.30 * quantidade_maca;
}
  
printf("O valor total da sua compra eh R$%.2f ", valor_compra);

return 0;
}