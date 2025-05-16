#include <stdio.h>

int verifica_par_impar(int numero){
  if(numero % 2 == 0){
  return 1;
}else{
    return 0;
}
  }

int main(){
  int num1 = 2;
  int num2 = 7;

printf("O número %d é par? %d\n", num1, verifica_par_impar(num1));
printf("O número %d é par? %d\n", num2, verifica_par_impar(num2));
  
  return 0;
}
