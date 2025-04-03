/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int x;
    int y;
    int z;
    
    printf("Digite um lado do triangulo: ");
    scanf("%d", &x);
    
    printf("Digite o segundo lado do triangulo: ");
    scanf("%d", &y);
    
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%d", &z);
    
    if (y == x && x == z) {
        printf("Esse eh um triangulo equilatero!");
    } else if (y != x && y != z && x != z) {
        printf("Esse eh um triangulo escaleno!");
    } else {
        printf("Esse eh um triangulo isoceles!");
    }
    

    return 0;
}
