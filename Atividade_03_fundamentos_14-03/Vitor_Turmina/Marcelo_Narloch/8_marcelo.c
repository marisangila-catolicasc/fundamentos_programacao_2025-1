#include <stdio.h>

int main(){
float raio, altura, area; 

const float PI= 3.14;

printf("Digite o raio da lata:\n");
scanf("%f", &raio);
printf("Digite a altura da lata:\n");
scanf("%f", &altura);
area = PI * raio * raio * altura;
  
printf("O volume da lata eh\n: %.2f", area);


return 0;

}