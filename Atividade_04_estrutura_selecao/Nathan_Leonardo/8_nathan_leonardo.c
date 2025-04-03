#include <stdio.h>

int main(void){

    int ano;

    printf("Digite o ano atual com 4 digitos: \n");
    scanf("%d", &ano);

    if(ano <= 0){
        printf("O ano deve ser maior que 0 \n");
        return 1;
    }
    if((ano % 4 == 0, ano % 100 != 0),(ano % 400 == 0)){
        printf("O ano %d é Bissexto \n", ano);
    }
    else{
        printf("O ano %d Não é Bissexto \n", ano);
    }

    return 0;
}