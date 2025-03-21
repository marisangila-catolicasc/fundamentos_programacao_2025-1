#include <stdio.h>

int main(void){
    float dolar, real, cambio;

    printf("Digite o cambio atual do dolar: \n");
    scanf("%f", &cambio);

    printf("Digite a quantidade de dolares que deseja converter U$ \n");
    scanf("%f", &dolar);

    real = dolar * cambio;

    printf("Serão necessarios R$%.2f para comprar U$%.2f \n", real, dolar);

    return 0;
}