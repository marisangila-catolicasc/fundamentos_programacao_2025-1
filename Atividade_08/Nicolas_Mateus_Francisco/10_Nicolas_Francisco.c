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
    int number;
    int sum = 0;

	printf("Digite 20 valores inteiros para o vetor: ");
	for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
		scanf("%d", &vector[i]);
	}
	
	printf("Agora digite um valor inteiro: ");
	scanf("%d", &number);

    for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        if (number == vector[i]) {
            sum++;
        }
	}
    
    printf("O numero digitado aparece %d vezes no vetor!", sum);

	return 0;
}