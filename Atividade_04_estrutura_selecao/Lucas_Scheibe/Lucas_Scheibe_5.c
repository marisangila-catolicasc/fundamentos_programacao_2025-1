#include <stdio.h>

int main (){
    int idd;

    printf("Quantos anos voce tem?:\n");
    scanf ("%d", &idd);

    if(idd >=18 && idd < 65){
        printf("obrigatorio");
        }
    else if(idd >65){
       printf("facultativo");
        }
    else{
        printf("voce nao precisa");
       }
}