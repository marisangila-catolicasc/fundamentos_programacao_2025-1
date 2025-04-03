/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    float number;
    
    printf("Digite um numero e direi se ele eh positivo ou negativo: ");
    scanf("%f", &number);

    if (number > 0) {
        printf("Esse numero eh positivo!");
    } else if (number < 0) {
        printf("Esse numero eh negativo!");
    } else if (number == 0) {
        printf("Esse numero eh neutro!");
    } else {
        printf("Input invalido!");
    }

    return 0;
}
