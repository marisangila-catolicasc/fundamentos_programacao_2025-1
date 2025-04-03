/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int age;
    
    printf("Digite sua idade: ");
    scanf("%d", &age);
    
    if (age < 18) {
        printf("Voce eh um nao eleitor!");
    } else if (age >= 18 && age < 65) {
        printf("Voce eh um eleitor obrigatorio!");
    } else {
        printf("Voce eh um eleitor facultativo!");
    }

    return 0;
}
