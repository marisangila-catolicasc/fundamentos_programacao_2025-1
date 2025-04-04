#include <stdio.h>

#define DUZIA  12
int main(int argc, char const *argv[])
{

    int quantidade;
    

    float preco1, preco2, total;
    preco1 = 2.30;
    preco2 = 1.95;

    printf("Insira a quantidade de macas: \n");
    scanf("%d", &quantidade);

    if(quantidade >= DUZIA){
        total = quantidade * preco1;
        printf("O valor total da compra eh: %.2f", total);
    }
    if(quantidade < DUZIA){
        total = quantidade * preco2;
        printf("O valor total da compra eh: %.2f", total);
    }
    return 0;
}
