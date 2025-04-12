#include <stdio.h>

int main() {
  int num, par, impar;
  par = 0;
  impar = 0;
  for(int i = 1; i <= 10; i++)
  {
    printf("Insira o %d° número: \n", i);
    scanf("%d", &num);
    if(num % 2 == 0){
      par++;
    }
    else{
      impar++;
    }
  }
  printf("Quantidade de números pares: %d\n", par);
  printf("Quantidade de números ímpares: %d\n", impar);
  return 0;
}