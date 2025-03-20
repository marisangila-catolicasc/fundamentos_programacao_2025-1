#include <math.h>
int main(){
  float vInvestido, vFinal;
  int anos;

  printf("Digite o valor investido: \nR$");
  scanf("%f", &vInvestido);


  printf("Digite quantos anos você deseja investir este valor: \n");
  scanf("%d", &anos);

  vFinal = vInvestido + (vInvestido * 0.05 * anos);
    printf("Seu valor de R$%.2f após %d anos, resultará em R$%.2f", vInvestido, anos, vFinal);

  return 0;
  
  
}