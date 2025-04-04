#include <stdio.h>
int main() {
    int quant;
    float total;
    printf("Digite a quantidade de maçãs compradas: ");
    scanf("%d", &quant);

    if (quant < 12) {
        total = quant * 2.30;
    } else {
        total = quant * 1.95;
    }

    printf("O custo total da compra foi de: %.2f\n", total);

    return 0;
}