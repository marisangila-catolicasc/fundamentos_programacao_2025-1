#include <math.h>
int main(){
  float f, c;

  printf("Digite um valor em fahrenheit: \n");
  scanf("%f", &f);

  c = 5 * (f - 32) / 9;
    printf("%.2f graus fahrenheit, convertidos para celsius resultam em %.2f graus celsius.", f, c);

  return 0;
}