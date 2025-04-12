#include <stdio.h>
#include<math.h>

int main(void){
    int i = 0;
    int valor_MAX = 0;
    int valor_INTERVALO = 0;

    printf("Qual o valor inteiro que gostaria de chegar?\n");
    scanf("%d", &valor_MAX);
    printf("Qual o intervalo entre números que gostaria de que fosse apresentado?\n");
    scanf("%d", &valor_INTERVALO);

    if (valor_MAX % valor_INTERVALO > 0)
    {
        printf("Nao eh possivel chegar no valor que voce quer com o intervalo exigido, digite outro intervalo: \n");
        scanf("%d", &valor_INTERVALO);
    }else if(valor_INTERVALO > valor_MAX){
        printf("Valor intervalo deve ser menor do que o valor maximo, digite outro intervalo: \n");
        scanf("%d", valor_INTERVALO);
    }
    int valorAtual = 0;
    for(i = 0; i*valor_INTERVALO <= valor_MAX; i++){
        valorAtual = i*valor_INTERVALO;
        printf("%d\n",valorAtual);
    }
    
}