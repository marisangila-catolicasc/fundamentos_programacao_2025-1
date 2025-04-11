#include <stdio.h>

int main() {

	int number;
	int increment;

	printf("Digite um numero inteiro: ");
	scanf("%d", &number);
	printf("Agora digite o incremento: ");
	scanf("%d", &increment);

	for(int i=0; i<=number; i+=increment) {
		if (i != number) {
			printf("%d, ", i);
		} else {
			printf("%d.\n", i);
		}
	}

	return 0;
}
