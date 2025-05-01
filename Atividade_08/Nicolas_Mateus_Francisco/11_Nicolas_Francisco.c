/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int vector[20];
    int sum = 0;

	printf("Digite 15 valores inteiros para o vetor: ");
	for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
		scanf("%d", &vector[i]);
		
		if (i % 2 != 0) {
		    sum += vector[i];
		}
	}
	
	printf("A soma dos valores em posicoes impares do vetor eh igual a %d!", sum);

	return 0;
}