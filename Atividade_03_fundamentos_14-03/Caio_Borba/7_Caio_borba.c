#include <stdio.h>
int main(){
float real;
float cambio;
float dolar;

printf("Digite o valor do cambio atual:\n");
scanf("%f", &cambio);
printf("Digite o valor em dolares para fazer a conversão pro real:\n");
scanf("%f", &dolar);

real = dolar * cambio;

printf("%.2f dolares equivalem a %.2f reais na conversão atual.", dolar, real);
    return 0;
}