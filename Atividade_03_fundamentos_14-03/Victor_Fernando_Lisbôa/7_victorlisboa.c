#include <stdio.h>
#include <math.h>

int main() {
  float cam, dol;
  
  printf("Digite o valor do cambio \n");
  scanf("%f", &cam);
  
  printf("Digite a quantidade em dolar \n");
  scanf("%f", &dol);

  float real = cam * dol;
  printf("Necessitara de %.2f reais para comprar %.2f dolares", real, dol);
}