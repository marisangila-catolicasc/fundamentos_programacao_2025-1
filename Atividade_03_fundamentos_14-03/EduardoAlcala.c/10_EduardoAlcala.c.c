#include <stdio.h> 

float inv; 

 int anos; 

int main(void) { 

 printf("\nQual o valor investido? "); 

 scanf(" %f", &inv); 

printf("\n\nQuantos anos vai deixar? "); 

 scanf(" %d", &anos); 

printf("\n\nOs informações do investimento: \n"); 

 printf( "\nNesses anos, o dinheiro irá render: %.2f\n", inv + (inv * 0.05 * anos)); 

 return 0;  

} 