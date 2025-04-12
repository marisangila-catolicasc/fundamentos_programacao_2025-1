#include <stdio.h>
int main(){
    float nota, somatorio;
    nota = 0;
    somatorio = 0;
    
    for( int contador =0; contador<8; contador ++)
{
    printf("Insira a nota \n");
    scanf("%f", &nota);    
    somatorio = somatorio + nota;
       
}
    somatorio = somatorio / 8;
    printf("A media das notas e %.2f", somatorio);
    return 0;
}    
