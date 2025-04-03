#include <stdio.h>

int main(void){

    int m;
    float total;
    
    printf("Digite o numero de maçãs que foram compradas: \n");
    scanf("%d", &m);

    if (m >= 12){
        total = m * 2.30;
    }
    else{
        total = m * 1.95;
    }
    
    printf("O valor total das maçãs ficará R$%.2f \n", total);

    return 0;
}