/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vector[10];
    int number;
    int validate = 0;
    
    printf("Digite 10 valores inteiros para o vetor: ");
    for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        scanf("%d", &vector[i]);
    }
    
    printf("Digite um numero: ");
    scanf("%d", &number);
    
    for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        if (number == vector[i]) {
            validate = 1;
            printf("O numeros digitado esta no vetor, na posicao %d!", i+1);
        }
    }
    
    if (validate == 0) {
        printf("O numero digitado nao esta no vetor!");
    }

    return 0;
}