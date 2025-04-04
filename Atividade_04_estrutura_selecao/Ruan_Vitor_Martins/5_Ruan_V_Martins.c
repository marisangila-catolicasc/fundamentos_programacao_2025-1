#include <stdio.h>

int main (){
    int idade;


    printf("qual sua idade: ");
    scanf ("%d", &idade);

    if(idade >=18 && idade < 65){
        printf("obrigatorio");
        }
    else if(idade >65){
       printf("facultativo");
        }
    else{
        printf("vc nao precisa");
       }
    return 0;
}
