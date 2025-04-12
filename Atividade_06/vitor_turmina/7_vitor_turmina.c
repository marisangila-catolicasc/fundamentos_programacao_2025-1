#include <stdio.h>

int main(){

    float num, soma;

    for(int i = 0; i < 8; i++){
        printf("Informe um numero:");
        scanf("%f", &num);
        soma += num;
    }

    printf("A media desses numeros eh: %.1f", soma / 8);


return 0;
}