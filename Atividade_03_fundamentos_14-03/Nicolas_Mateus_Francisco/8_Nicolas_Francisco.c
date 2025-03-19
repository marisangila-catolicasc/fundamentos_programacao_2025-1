#include <stdio.h>
#include <math.h>

int main() {

	float raio, altura, volume;

	printf("Digite o raio da lata: ");
	scanf("%f", &raio);

	printf("Digite a altura da lata: ");
	scanf("%f", &altura);
	

	// Caso o pow nao funcione no momento de compilacao, adicione -lm ao fim do comando
	volume = M_PI * pow(raio, 2) * altura;

	printf("O volume da lata eh igual a %.2f! \n", volume);

	return 0;
}
