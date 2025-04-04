/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    float n1;
    float n2;
    char choice;
    char trash;
    
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);
    scanf("%c", &trash);
    
    printf("Digite o operador desejado: +, -, /, *: ");
    scanf("%c", &choice);
    
    switch (choice) {
        case '+':
            printf("O resultado da soma eh %.2f!", n1 + n2);
            break;
        case '-':
            printf("O resultado da subtracao eh %.2f!", n1 - n2);
            break;
        case '/':
            if (n2 != 0) {
                printf("O resultado da divisao eh %.2f!", n1 / n2);
            } else {
                printf("Impossivel dividir por 0!");
            }
            break;
        case '*':
            printf("O resultado da multiplicacao eh %.2f!", n1 * n2);
            break;
        default:
            printf("Operador invalido, digite um dos seguintes: +, -, /, *!");
    }

    return 0;
}