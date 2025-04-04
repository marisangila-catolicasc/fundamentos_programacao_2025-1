/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int productCode;
    
    printf("Digite um codigo de produto: ");
    scanf("%d", &productCode);
    
    switch (productCode) {
        case 1254:
            printf("Sanduiche de presunto - 8.00 Reais!");
            break;
        
        case 5689:
            printf("Churros - 3.50 Reais!");
            break;
        
        case 7114:
            printf("Suco de laranja que tem gosto de limao mas tem gosto de tamarindo - 5.00 Reais!");
            break;
        
        default:
            printf("Valor invalido!");
    }
    

    return 0;
}