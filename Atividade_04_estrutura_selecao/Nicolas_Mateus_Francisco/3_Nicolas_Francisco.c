/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    double apples;
    
    printf("Digite quantas macas voce deseja comprar: ");
    scanf("%lf", &apples);
    
    if (apples >= 12) {
        printf("O preco total foi de %.2lf reais!", apples * 1.95);
    } else {
        printf("O preco total foi de %.2lf reais!", apples * 2.3);
    }

    return 0;
}
