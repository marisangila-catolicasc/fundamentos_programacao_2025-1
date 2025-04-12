#include <stdio.h>
int main(){
    int par, impar, numero;
    par = 0;
    impar = 0;
    numero = 0;
    for ( int contador =0; contador<10; contador ++){
        printf("Escolha um numero \n");
        scanf("%d", &numero);
    {
        if (numero%2 == 0){
            par ++;
        } else{
            impar ++;
        }
    }    
        }
        printf("Voce escolheu %d numeros pares \n", par);
        printf("Voce escolheu %d numeros impar \n", impar);
    return 0;
}    
