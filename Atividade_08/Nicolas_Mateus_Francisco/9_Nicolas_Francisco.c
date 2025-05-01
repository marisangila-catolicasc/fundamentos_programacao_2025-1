/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	float vectorA[5];
	float vectorB[5];
	float vectorC[10];

	printf("Digite 10 valores inteiros para o vetor A: ");
	for (int i=0; i < sizeof(vectorA) / sizeof(vectorA[0]); i++) {
		scanf("%f", &vectorA[i]);
	}

	printf("Agora digite 10 valores inteiros para o vetor B: ");
	for (int i=0; i < sizeof(vectorB) / sizeof(vectorB[0]); i++) {
		scanf("%f", &vectorB[i]);
	}
	
	for (int i=0; i < sizeof(vectorC) / sizeof(vectorC[0]); i++) {
		if (i % 2 == 0) {
		    vectorC[i] = vectorB[i / 2];
		} else {
		    vectorC[i] = vectorA[i / 2];
		}
		
		printf("Posicao %d = %.2f! \n", i+1, vectorC[i]);
		
	}

	return 0;
}