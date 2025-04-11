#include <stdio.h>
#include <math.h>

int main() {

	int square;

	for (int i=0; i<=15; i++) {

		// Se der erro adicione -lm ao final do comando de compilacao
		square = pow(i, 2);
		if (square >= 15 && square <= 200) {
			printf("%d \n", square);
		}
	}

	return 0;
}
