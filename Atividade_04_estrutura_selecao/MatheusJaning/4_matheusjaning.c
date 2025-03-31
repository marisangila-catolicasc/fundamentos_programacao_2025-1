#include <stdio.h>
int main(void) {
  int numero_1, numero_2;
  printf("Insira dois numeros inteiros: \n");
  scanf("%d", &numero_1);
  scanf("%d", &numero_2);
  if(numero_1 > numero_2){
    printf("O %d é maior que %d", numero_1, numero_2);
  }else if(numero_1 < numero_2){
    printf("O %d é maior que %d", numero_2, numero_1);
  }else{
    printf("Os números são iguais");
  }
  return 0;
}