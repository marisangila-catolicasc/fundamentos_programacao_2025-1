#include <stdio.h>

 int main(){
 float c;
 float f;
   
 printf("Digite os graus em Fahrenheit (f):\n");
scanf("%f", &f);

 c = (5*(f-32))/9;

 printf("%.2f F são %.2f C.", f, c);
   
    return 0;
}