#include <stdio.h>

/*
7. Dados trˆes valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados
de um triˆangulo e, se forem verificar se ´e um triˆangulo equil´atero, is´osceles ou
escalenos. Se eles n˜ao formarem um triˆangulo, escrever a mensagem. Considere as
seguintes propriedades:
1
Profª Marisangila Alves, MSc
• Equil´ateros: tem os comprimentos dos trˆes lados iguais;
• Is´osceles: tem os comprimentos de quaisquer dois lados iguais;
• Escaleno: tem os comprimentos dos trˆes lados diferentes.
*/

int main() {
  float l1, l2, l3;

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
