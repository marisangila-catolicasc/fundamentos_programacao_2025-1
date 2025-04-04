#include <stdio.h>

int main() {
int n1, n2;
    
    printf("Digite um número:\n");
scanf("%d", &n1);   
    printf("Digite outro um número:\n");
scanf("%d", &n2);
    
    if(n1 > n2) {
    printf("%d é maior que %d.\n", n1, n2);
    }
    else if(n2 > n1) {
    printf("%d é maior que %d.\n", n2, n1);
    }
    else {
    printf("Ambos são iguais.\n", n1);
    }
    
    return 0;
}
// Compilador: gcc 4_BrunoSartortt.c -o 4_BrunoSartortt.exe
// Executador: .\4_BrunoSartortt.exe