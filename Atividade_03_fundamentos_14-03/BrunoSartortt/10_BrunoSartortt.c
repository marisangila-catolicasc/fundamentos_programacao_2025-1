#include <stdio.h>

int main(void) {
float v_fin, c_jur, inv, juros = 0.05, anos = 3;
  
  printf("Digite o valor investido: \n");
scanf("%f", &inv);
  
c_jur = inv * juros * anos;
v_fin = inv + c_jur;
  
printf("O valor final é %.2f\n", v_fin);
  return 0;
}