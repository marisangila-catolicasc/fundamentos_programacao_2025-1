#include <stdio.h>

void verificavoto(int ano);

int main(void){
    int idade;

    printf("Sua idade: ");
    scanf("%d", &idade);
    verificaVoto(idade);

}

void verificaVoto(int ano){
    if(ano >= 16 && ano < 18 || ano > 65){
        printf("Voto facultativo");
    }else if(ano < 16){
        printf("Nao pode votar");
    }else{
        printf("Voto obrigatorio");
    }
}