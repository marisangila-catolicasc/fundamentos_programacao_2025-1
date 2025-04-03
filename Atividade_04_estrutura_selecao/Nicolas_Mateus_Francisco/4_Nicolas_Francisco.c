/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    float n1;
    float n2;
    
    printf("Digite um numero: ");
    scanf("%f", &n1);
    
    printf("Digite outro numero: ");
    scanf("%f", &n2);
    
    if (n1 > n2) {
        printf("O primeiro numero eh maior que o segundo!");
    } else if (n1 == n2) {
        printf("Os dois numeros sao iguais!");
    } else {
        printf("O segundo numero eh maior que o primeiro!");
    }
    
    

    return 0;
}
