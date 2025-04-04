#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade;

    printf("Insira a sua idade: \n");
    scanf("%d", &idade);

    if(idade >= 18 && idade <= 65){
        printf("Voce eh eleitor obrigatorio!");
    }else if(idade < 18){
        printf("Voce nao eh eleitor!");
    }else if(idade > 65){
        printf("Voce eh eleitor facultativo!");
    }
    return 0;
}
