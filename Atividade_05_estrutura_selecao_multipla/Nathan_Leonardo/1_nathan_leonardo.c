#include <stdio.h>

int main(void){

    int code;

    printf("Digite o codigo do produto: \n");
    scanf("%d", &code);

    switch(code){

        case 1254:
        printf("Sanduiche de presunto - R$8,00 \n");

        break;

        case 5698:
        printf("Churros - R$3,50 \n");

        break;

        case 7114:
        printf("Suco de laranja que parece de limão mas tem gosto de tamarindo - R$5,00 \n");

        break;

        default:
        printf("Código não existente \n");
    }
    
    return 0;    
}