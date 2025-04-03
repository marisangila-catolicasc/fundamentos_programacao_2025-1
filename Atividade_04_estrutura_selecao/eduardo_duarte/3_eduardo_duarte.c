#include <stdio.h>
#define DUZIA 12
#define desconto 1.95

 
int main ()
{
    int maca; 
    float resultado;

    printf("Digite a quantidade de macas: \n");
    scanf("%d", &maca);

if (maca < DUZIA){
    resultado = maca * 2.30;
    printf("o valor da compra e: %.2f\n", resultado);
    }else{
        resultado = maca * 2.30 - desconto;
        printf("o valor da compra e: %.2f\n", resultado);

    }
    
    return 0; 
}

    
