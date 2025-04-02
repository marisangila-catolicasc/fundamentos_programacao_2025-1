#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    int numero_maca;
    

    printf("Digite o número de maçãs: \n");
    scanf("%d", &numero_maca);

    float somamenosduzia = 2.30 * numero_maca;
    float somamaisduzia = 1.95 * numero_maca;

    if (numero_maca < 6){
        printf("Você comprou %d maçãs e gastou: %.2f reais", numero_maca, somamenosduzia);
    }
    else {
        printf("Você comprou %d maçãs e gastou: %.2f reais", numero_maca, somamaisduzia);
    }

    return 0;
}