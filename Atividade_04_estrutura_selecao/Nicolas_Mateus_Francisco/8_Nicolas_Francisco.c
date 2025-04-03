/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int year;
    
    printf("Digite o ano atual ou um ano aleatorio: ");
    scanf("%d", &year);
    
    if (year <= 0) {
        printf("Ano invalido!");
    } else if ((year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0)) {
        printf("Esse eh um ano bissexto!");
    } else {
        printf("Esse nao eh um ano bissexto!");
    }
    

    return 0;
}
