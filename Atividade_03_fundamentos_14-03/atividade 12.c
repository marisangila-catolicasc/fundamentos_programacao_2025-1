#include <stdio.h>
int main(){ 

  float numero1;
  float numero2;

    
    printf ("digite o primeiro numero: ", numero1);
      scanf ("%f" , &numero1);
    printf ("digite o segundo numero:\n ", numero2);
      scanf ("%f" , &numero2);

  float soma;
  soma = numero1 + numero2;
  
  float subtração;
  subtração = numero1 - numero2;
 
  float multiplicação;
  multiplicação = numero1 * numero2;
 
  float divisao_primeiro_pelo_segundo;
  divisao_primeiro_pelo_segundo = numero1 / numero2;
  
  float primeiro_elevado_pelo_segundo; 
  primeiro_elevado_pelo_segundo = pow(numero1 , numero2);

  float resto_da_divisao_do_primeiro_pelo_segundo;
  // nao sei como fazer isso srry
  
    
    printf ("a soma é: %f\n" , soma);
  
    printf ("a subtração é: %f\n" , subtração);

    printf ("a multiplicação é: %f\n" , multiplicação);

    printf ("a divisão do primeiro pelo segundo é: %f\n" , divisao_primeiro_pelo_segundo);

    printf ("o primeiro numero elevado pelo segundo: %f\n" , primeiro_elevado_pelo_segundo);
     
    
   
   
    
  return 0;
} 
