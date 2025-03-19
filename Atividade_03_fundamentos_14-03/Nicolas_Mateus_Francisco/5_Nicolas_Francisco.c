#include <stdio.h>

int main() {

	float n1, n2, soma;

	printf("Digite um numero: ");
	scanf("%f", &n1);
	printf("Digite outro numero: ");
	scanf("%f", &n2);

	soma = n1 + n2;

	printf("A soma dos dois numero eh %.2f! \n", soma);
	return 0;
}
