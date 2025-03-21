#include <stdio.h> 

int fa; 

int main(void) { 

  printf("\nQuantos graus fahrenheit? "); 

  scanf(" %d", &fa); 

   printf("\n\nConvertendo para Celsius: \n\n"); 

printf( "\n %2.d graus fahrenheit, são equivalentes a: %2.d gruas Celsius!  ", fa, (fa - 32) * 5 / 9);  

return 0;   
} 