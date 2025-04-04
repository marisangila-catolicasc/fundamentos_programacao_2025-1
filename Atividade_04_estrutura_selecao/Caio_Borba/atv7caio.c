#include <stdio.h>

int main(void) {
 float valor_1, valor_2, valor_3;
  printf("adicione 3 valores: \n");
  scanf("%f", &valor_1);
  scanf("%f", &valor_2);
  scanf("%f", &valor_3);
  if(valor_1 != 0 && valor_2 != 0 && valor_3 != 0){
    printf("");
  }else{
    printf("Números invalidos!");
  }
  printf("Com os números adicionados, terá um ");
  if(valor_1 == valor_2 && valor_1 == valor_3){
    printf("triângulo equilátero");
  }else if(valor_1 == valor_2 || valor_1 == valor_3 || valor_2 == valor_3){
    printf("triângulo isósceles");
  }else{
    printf("triângulo escaleno");
  }
  return 0;
}
