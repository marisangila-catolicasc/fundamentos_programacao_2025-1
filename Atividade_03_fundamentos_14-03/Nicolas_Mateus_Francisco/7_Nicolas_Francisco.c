#include <stdio.h>

int main() {

	float cambio, dolar, real;

	printf("Digite o valor do cambio no dia de hoje: ");
	scanf("%f", &cambio);
	
	printf("Digite quantos dolares voce deseja converter: ");
	scanf("%f", &dolar);

	real = dolar * cambio;

	printf("%.2f dolares convertido para real fica %.2f reais! \n", dolar, real);

	return 0;
}
