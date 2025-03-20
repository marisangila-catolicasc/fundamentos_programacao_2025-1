#include <stdio.h>
int main(void) {

float cambio, qtde_dolares, real;

printf("Digite o valor do cambio");
scanf("%f", &cambio);
printf("Digite o valor de dólares");
scanf("%f", &qtde_dolares);


real = cambio * qtde_dolares;

printf("A quantidade de reais eh :\n %f ", real);

    return 0;

}