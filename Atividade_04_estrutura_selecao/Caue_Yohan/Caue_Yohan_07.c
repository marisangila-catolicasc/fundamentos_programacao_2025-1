#include <stdio.h>

int main(int argc, char const *argv[])
{

  float X, Y, Z;
    printf("Digite o comprimento de um dos lados:\n");
    scanf("%d", &X);
    printf("Digite o comprimento de um dos lados:\n");
    scanf("%d", &Y);
    printf("Digite o comprimento de um dos lados:\n");
    scanf("%d", &Z);
    
    if (X>0 && Y>0 && Z>0){
      if (X == Y && Y == Z){
        printf("O triângulo é equilátero");
      }
      else if (X != Y && Y != Z && X != Z){
        printf("O triângulo é escaleno");
          }
      else if (X == Y || Y == Z || X == Z){
        printf("O triângulo é isósceles");
      }
    }else{
      printf("Não é triângulo" );
    }
    
    
    return 0;
}
