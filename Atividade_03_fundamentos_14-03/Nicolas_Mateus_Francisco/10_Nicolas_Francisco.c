#include <stdio.h>

int main() {

	float inicial, final;

	printf("Digite o valor inicial do investimento: ");
	scanf("%f", &inicial);

	final = inicial + (inicial * 0.05 * 3);

	printf("O valor final apos 3 anos de investimento sera de %.2f reais!\n", final);


	return 0;
}
