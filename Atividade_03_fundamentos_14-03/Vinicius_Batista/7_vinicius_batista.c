#include <stdio.h>

int main(){
float real;
float cambio;
float dolar;

printf("Digite o valor de cambio atual:\n");
scanf("%f", &cambio);
printf("Digite o valor em dolares que deseja converter para o real:\n");
scanf("%f", &dolar);

real = dolar * cambio;

printf("%.2f dolares equivalem a %.2f reais na conversao atual.", dolar, real);
    return 0;
}