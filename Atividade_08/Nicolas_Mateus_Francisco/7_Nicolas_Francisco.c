/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vectorA[10];
    int vectorB[10];
    int sum = 0;
    
    printf("Digite 10 valores para o vetor A: ");
    for (int i=0; i < sizeof(vectorA) / sizeof(vectorA[0]); i++) {
        scanf("%d", &vectorA[i]);
    }
    
    for (int i=0; i < sizeof(vectorA) / sizeof(vectorA[0]); i++) {
        vectorB[sizeof(vectorA) / sizeof(vectorA[0]) - i-1] = vectorA[i];
    }
    
    printf("Vetor B = ");
    for (int i=0; i < sizeof(vectorA) / sizeof(vectorA[0]); i++) {
        printf("Posicao %d = %d! \n", i+1, vectorB[i]);
    }



    

    return 0;
}