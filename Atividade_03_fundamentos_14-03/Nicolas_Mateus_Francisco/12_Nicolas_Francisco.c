#include <stdio.h>
#include <math.h>

int main() {

	int n1, n2;
	float divisao;

	printf("Digite um numero inteiro: ");
	scanf("%d", &n1);

	printf("Digite outro numero inteiro: ");
	scanf("%d", &n2);

	divisao = n1 / n2;

	printf("A soma dos dois numeros eh igual a %d!\n", n1+n2);
	printf("A subtracao dos dois numeros eh igual a %d!\n", n1-n2);
	printf("A multiplicacao dos dois numeros eh igual a %d!\n", n1 * n2);
	printf("A diisao dos dois numeros eh igual a %.2f!\n", divisao);
	// Se nao funcionar coloque -lm ao final do comando de copilacao
	printf("O primeiro numero elevado ao segundo eh igual a %.1lf!\n", pow((double)n1, (double)n2));
	printf("O resto da divisao do primeiro numero pelo segundo numero eh igual a %d!\n", n1%n2);

	return 0;
}
