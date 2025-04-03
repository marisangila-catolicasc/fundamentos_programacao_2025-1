#include <stdio.h>

int main(){

    int idade;

    printf("Informe sua idade: \n");
    scanf("%d", &idade);

    if(idade > 65){
        printf("Voce tem a opcao de votar ou nao\n");
    }
    else if(idade < 18){
        printf("voce ainda nao vota\n");
    }
    else{
        printf("voce tem o dever de votar!");
    }
}