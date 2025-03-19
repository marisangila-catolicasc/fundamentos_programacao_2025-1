#include <stdio.h>

int main() {

	float a, b, c;

	printf("Digite algum numero: ");
	scanf("%f", &a);

	printf("Digite outro numero: ");
	scanf("%f", &b);

	c = a;
	a = b;
	b = c;

	printf("A variavel A agora vale %.1f e a B vale %.1f! Troca efetuada!\n", a, b);

	return 0;
}
