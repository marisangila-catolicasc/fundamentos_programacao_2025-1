#include <stdio.h>
#include <math.h>
int main(){
    int codigo;

    printf("[1254] - Sanduiche de presunto\n");
    printf("[5698] - Churros\n");
    printf("[7114] - Suco de laranja misterioso\n");
    printf("~");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1254:
        printf("Sanduiche de presunto - R$8,00");
        break;
    case 5698:
        printf("Churros - R$3,50");
        break;
    case 7114:
        printf("Suco de laranja que parece de limao mas tem gosto de tamarindo - R$5,00");
        break;
    default:
        printf("Codigo invalido!");
        break;
    }

    return 0;
}