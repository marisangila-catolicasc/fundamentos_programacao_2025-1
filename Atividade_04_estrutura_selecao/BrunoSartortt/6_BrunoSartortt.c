#include <stdio.h>

int main() {
int n1, n2, n3;
    
    printf("Digite um número:\n");
scanf("%d", &n1);   
    printf("Digite outro número:\n");
scanf("%d", &n2);
    printf("Digite mais um número:\n");
scanf("%d", &n3);
    

    if(n1 > n2 && n1 > n3) {
    printf("O número maior é: %d.\n", n1);
    }
    else if(n2 > n1 && n2 > n3) {
    printf("O número maior é: %d.\n", n2);
    }
    else if(n3 > n1 && n3 > n2) {
    printf("O número maior é: %d.\n", n3);
    }
    else {
    printf("Ambos os números são iguais.\n");
    }

    
    return 0;
}
// Compilador: gcc 6_BrunoSartortt.c -o 6_BrunoSartortt.exe
// Executador: .\6_BrunoSartortt.exe