#include <stdio.h>

int main(){
	
    int idade;

    printf("Insira a sua idade: \n");
    scanf("%d", &idade);

    if(idade >= 18 && idade <= 65){
        printf("Voce e eleitor obrigatorio!");
    }else if(idade < 18){
        printf("Voce nao e eleitor!");
    }else if(idade > 65){
        printf("Voce e eleitor facultativo!");
    }
    
}
