/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float vector[4];
    float sum = 0;
    float result;
    printf("Digite 4 valores para o vetor: ");
    
    for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        scanf("%f", &vector[i]);
        sum += vector[i];
    }
    
    result = sum / (sizeof(vector) / sizeof(vector[0]));
    
    printf("A media dos valores digitados eh igual a %.2f!", result);

    return 0;
}