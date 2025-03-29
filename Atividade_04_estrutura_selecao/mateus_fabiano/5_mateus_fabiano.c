#include <stdio.h>
int main(){

    int idade;

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

    if(idade >=65){
        printf("Voto facultativo");
    } else if (idade<18)
        {
            printf("Nao eleitor");
        }
        else{
            printf("Eleitor obrigatorio");
        }

        return 0;
    }
    

