#include <stdlib.h>
#include <stdio.h>
int main() {
    int idade;
    printf("Digite a sua idade\n");
    scanf("%d",&idade);
    if(18>idade){
        printf("Nao eleitor\n");
    }else if (idade>=18&&idade<=65){
        printf("Eleitor obrigatorio\n");
    }else{
        printf("Eleitor facultativo\n");
    }
    return 0;
}
