/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vector[5];
    int sum = 0;
    float median;
    int biggerMedian[5];
    
    printf("Digite 5 valores para o vetor: ");
    
    for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        scanf("%d", &vector[i]);
        sum += vector[i];
    }
    
    median = sum / (sizeof(vector) / sizeof(vector[0]));
    
    sum = 0;
    
    for (int i=0; i < sizeof(vector) / sizeof(vector[0]); i++) {
        if (vector[i] > median) {
            sum++;
            printf("%d esta acima da media \n", vector[i]);
        }
    }
    
    printf("A media dos valores eh %.2f e %d valores estao acima da media!", median, sum);
    
    return 0;
}