#include <stdio.h>
#include <math.h>
/*
Desenvolva um programa que receba um valor de
temperatura em graus Fahrenheit (ºF) e o converta para graus Celsius (ºC). Como
resultado, mostre a seguinte mensagem: “XXºF equivalem a YYºC.”. A f´ormula
de convers˜ao ´e:
celsius =
5×(fahrenheit−32)
9
.

*/
int main() {
  float faren, celc;
  printf("Digite a temperatura em graus Fahrenheit: ");
  scanf("%f", &faren);
  celc = (5 * (faren - 32)) / 9;
  printf("%.2fºF equivalem a %.2fºC.", faren, celc);  

  return 0;
}