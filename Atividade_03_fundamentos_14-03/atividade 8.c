#include <stdio.h>
int main(void)   { 

 float altura;
 float raio;
  
  printf("Informe a altura da lata\n");
  scanf("%f", &altura);
  printf("Informe o raio da lata\n");
  scanf("%f", &raio);

  printf("O volume da lata é: %f", 3.14 * raio * raio * altura);
    //Como faz ao quadrado?
  
  return 0;
} 