/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int number;
    
    printf("Digite um numero e direi se ele eh par ou impar: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Esse numero eh par!");
    } else {
        printf("Esse numero eh impar");
    }

    return 0;
}
