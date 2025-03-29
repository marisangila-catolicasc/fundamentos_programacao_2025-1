#include <stdlib.h>
#include <stdio.h>
int main() {
    int idade;
    printf("Digite a sua idade\n");
    scanf("%d",&idade);
    if(18>idade){
        printf("Não eleitor\n");
    }else if (idade>=18&&idade<=65){
        printf("Eleitor obrigatório\n");
    }else{
        printf("Eleitor facultativo\n");
    }
    return 0;
}
