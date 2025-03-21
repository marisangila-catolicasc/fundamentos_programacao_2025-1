#include <stdio.h>
#include <math.h>

int main() {
  float v_inicial;
  float v_final;
  float juros;
  int ano;

  ano = 3;

  printf("Quanto voce quer investir?\n");
  scanf("%f", &v_inicial);

  juros = 5;
  v_final = v_inicial + (v_inicial * juros * ano);

  printf("O seu investimento deu: %.2f\n", v_final);
  
  
  return 0;
}