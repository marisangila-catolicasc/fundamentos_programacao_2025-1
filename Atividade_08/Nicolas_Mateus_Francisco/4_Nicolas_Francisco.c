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
    
    printf("Digite 10 valores inteiros para o vetor: ");
    
    for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        scanf("%d", &vector[i]);
    }
    
    for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        printf("posicao %d = %d!", i+1, vector[i]);
    }
    
    for (int i = sizeof(vector) / sizeof(vector[0]) -1; i>=0 ; i--) {
        printf("posicao %d = %d!", i+1, vector[i]);
    }
    return 0;
}