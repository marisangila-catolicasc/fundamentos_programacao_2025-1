#include <stdio.h>

int main(){

    int codigo;

    printf("Informe o codigo do produto para saber seu preco:\n [1254] = Sanduiche de Presunto\n [5698] = Churros \n [7114] = Suco de laranja, que parece limão e tem sabor de tamarindo\n");
    scanf("%d", &codigo);

    switch(codigo){
        case 1254:
        printf("R$8,00");
        break;

        case 5698:
        printf("R$3,00");
        break;

        case 7114:
        printf("R$5,00");
        break;
    
    default:
    printf("Codigo invalido");

return 0;


    }

return 0;
}