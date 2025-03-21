#include <stdio.h>
int main() {

float raio, volume, altura; 
    
    printf("Me informe o raio de uma lata: \n");
    
    scanf("%f", &raio);
    printf("Me informe a altura dessa lata: \n");
    
    scanf("%f", &altura);
 volume = 3.14 * (raio * raio) * altura;
    printf("O volume da lata é: %f", volume);
  
    return 0;
}
