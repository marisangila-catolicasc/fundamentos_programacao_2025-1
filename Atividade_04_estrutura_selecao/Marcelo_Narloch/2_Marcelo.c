#include <stdio.h>
int main(){
int numero;

printf("Informe um numero para descobrir se eh impar ou par: \n");
scanf("%d", &numero);
  
if (numero %2 == 0){
printf("O numero eh par!\n");
}else{
printf("O numero eh impar!");
}

return 0;
}