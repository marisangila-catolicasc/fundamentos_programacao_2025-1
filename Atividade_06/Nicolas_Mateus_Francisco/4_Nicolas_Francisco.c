#include <stdio.h>

int main() {
	
	int par = 0;
	int impar = 0;
	int number = 0;

	printf("Digite 10 numeros: \n");
	for(int i=0; i<10; i++) {
		scanf("%d", &number);
		if (number % 2 == 0) {
			par++;
		} else {
			impar++;
		}
	}

	printf("%d numeros sao par e %d numeros sao impar! \n", par, impar);

	return 0;
}
