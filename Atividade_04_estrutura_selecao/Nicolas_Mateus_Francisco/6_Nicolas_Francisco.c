/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int n1;
    int n2;
    int n3;
    
    printf("Digite um numero: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    
    if (n1 > n2 && n1 > n3) {
        printf("O numero %d eh o maior entre os 3!", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("O numero %d eh o maior entre os 3!", n2);
    } else if (n3 > n1 && n3 > n2) {
        printf("O numero %d eh o maior entre os 3!", n3);
    } else if (n1 == n2 && n2 == n3) {
        printf("Os tres numeros sao iguais!");
    } else {
        printf("input invalido!");
    }

    return 0;
}
