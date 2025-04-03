#include <stdio.h>
#include <math.h>


int main() {

    int idade;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    if(idade < 16){
        printf("Não vota.");
    }else if(idade >= 16 && idade < 18 || idade > 65) {
        printf("Voto facultativo");
    }else{
        printf("Voto obrigatório");
    }
}
