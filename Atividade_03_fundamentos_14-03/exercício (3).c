#include <stdio.h>
int main()   { 

float fahrenheit; 
float celsius;

  printf ("Forneça uma terperatura em graus Fahrenheit:\n");
  scanf("%f", &fahrenheit);

celsius = (fahrenheit - 32) * 5 / 9;
 
  printf("%f F equivalem a %f C\n", fahrenheit, celsius);
  
  
  return 0;
} 