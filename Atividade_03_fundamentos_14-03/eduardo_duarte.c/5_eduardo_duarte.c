#include <stdio.h>

int main(){
int n1;
int n2;
int resultado;

printf("Digite um numero inteiro:\n");
scanf("%d", &n1);
printf("Digite mais um numero inteiro:\n");
scanf("%d", &n2);

resultado = n1 + n2;

printf("A soma desses numeros eh: %d.", resultado);
    return 0;
}