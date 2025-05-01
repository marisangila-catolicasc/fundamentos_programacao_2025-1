/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int menor = 999999999;
    int maior = -999999999;
    int vector[5];
    
    printf("Digite 5 valores para o vetor: ");
    
    for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        scanf("%d", &vector[i]);
        if (vector[i] < menor) {
            menor = vector[i];
        }
        
        if (vector[i] > maior) {
            maior = vector[i];
        }
    }
    
    printf("O maior valor do vetor eh %d e o menor valor eh %d!", maior, menor);
    
    return 0;
}