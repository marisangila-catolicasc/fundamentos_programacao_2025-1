#include <stdio.h>
#define PROMO 1.95
#define DUZIA 12

int main()
{
    int maca;
    float valor;
    printf("Digite quantas macas voce comprou:\n");
    scanf("%d", &maca);
    if(maca < DUZIA){
        valor = maca * 2.30;
        printf("Voce vai pagar %.2f reais por %d macas.", valor, maca);
    }else{
        valor = maca * PROMO;
        printf("Voce vai pagar %.2f reais por %d macas.", valor, maca);
    }
    return 0;
}
