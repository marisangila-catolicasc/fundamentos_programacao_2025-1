#include <math.h>
int main(){
  float real, dolar;
  float cambio = 5.65;

  printf("Digite um valor em dólares: \n");
  scanf("%f", &dolar);

  real = dolar * cambio;
    printf("%.2f dólares são equivalentes a %.2f reais.", dolar, real);

  return 0;
}