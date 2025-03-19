#include <stdio.h>

int main() {

	int number, antecessor, sucessor;

	printf("Digite um numero inteiro: ");
	scanf("%d", &number);

	antecessor = number-1;
	sucessor = number+1;

	printf("O numero informado foi %d, o antecessor eh %d, o sucessor eh %d! \n", number, antecessor, sucessor);

	return 0;
}
