#include <stdio.h>
int main(){
    int numero, incremento;
    printf("Digite um numero inteiro \n");
    scanf("%d", &numero);
    printf("Digite o incremento \n");
    scanf("%d", &incremento);
    for( int contador =0; contador<=numero; contador += incremento)
{
    printf("%d \n", contador);    
       
}
    
    return 0;
}    
