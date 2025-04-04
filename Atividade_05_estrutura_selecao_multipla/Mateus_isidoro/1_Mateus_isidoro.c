#include <stdlib.h>
#include <stdio.h>
int main() {
    int codigo;
    printf("|Codigo|\n");
    printf("|1254|\n");
    printf("|5698|\n");
    printf("|7114|\n");
    printf("Digite um codigo: ");
    scanf("%d",&codigo);
    switch (codigo){
        case 1254:
            printf("|1254|Sanduiche de presunto|R$8,00|\n");
            break;
        case 5698:
            printf("|5698|Churros|R$3,50|\n");
            break;
        case 7114:
            printf("|7114|Suco de laranja que parece de limao mas tem gosto de tamarindo|R$5,00|");
            break;
        default:
            printf("Código inválido");
            break;
    }
    return 0;
}