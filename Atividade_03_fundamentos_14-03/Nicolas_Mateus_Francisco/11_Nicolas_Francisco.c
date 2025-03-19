#include <stdio.h>

int main() {
	
	float fah, cel;

	printf("Digite uma temperatura em graus Fahrenheit: ");
	scanf("%f", &fah);

	cel = 5 * (fah - 32) / 9;

	printf("%.2f graus Fahrenheit sao %.2f graus Celcius\n", fah, cel);



	return 0;
}
