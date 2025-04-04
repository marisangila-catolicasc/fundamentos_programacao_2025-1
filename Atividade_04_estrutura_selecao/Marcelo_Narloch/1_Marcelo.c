#include <stdio.h>
int main(){ 
int numero;

printf("Informe um numero: \n");
scanf("%d", &numero);

if (numero > 0){
printf("O numero digitado eh positivo!\n");
}else{
printf("O numero digitado eh negativo!\n");
}
return 0;
}
