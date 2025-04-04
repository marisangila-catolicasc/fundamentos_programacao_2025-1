#include <stdio.h>

int main() {
  float l1;
  float l2;
  float l3;

  printf("Digite o valor do primeiro lado: ");
  scanf("%f", &l1);
  
  printf("Digite o valor do segundo lado: ");
  scanf("%f", &l2);
  
  printf("Digite o valor do terceiro lado: ");
  scanf("%f", &l3);


  
  if (l1 == l2 && l2 == l3) {
    printf("Triangulo equilatero");
    
  }else if (l1 == l2 || l2 == l3 || l3 == l1){
    printf("Triangulo escaleno");
  
  }else{
    printf("Triangulo escaleno");
  }

  return 0;
}