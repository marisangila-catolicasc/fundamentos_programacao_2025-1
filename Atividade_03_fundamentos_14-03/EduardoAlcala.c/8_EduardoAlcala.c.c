#include <stdio.h> 

int altura, raio; 

int main(void) { 

 printf("Qual a altura da lata: "); 

 scanf(" %d", &altura); 

printf("\n\nQual o raio: "); 

 scanf(" %d", &raio); 

printf("\n\nA lata tem: \n"); 

 printf( "\nDe volume: %f \n", altura * (raio * raio) * 3.14);   

return 0; 

 } 