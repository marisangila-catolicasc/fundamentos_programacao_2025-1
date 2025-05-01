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
    
    printf("Digite 20 valores para o vetor: ");
    for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        scanf("%d", &vector[i]);
        
        if (vector[i] % 2 == 0) {
            sum++;
        }
    }
    
    printf("%d numeros sao pares!", sum);

    

    return 0;
}