#include <stdlib.h>
#include <stdio.h>
int main() {
    float comp1,comp2,comp3;
    printf("Digite 1º o comprimento do triangulo\n");
    scanf("%f",&comp1);
    printf("Digite 2º o comprimento do triangulo\n");
    scanf("%f",&comp2);
    printf("Digite 3º o comprimento do triangulo\n");
    scanf("%f",&comp3);
    if(comp1>0 && comp2>0 && comp2>0){
      if(comp1 == comp2 && comp1 == comp3){
        printf("O triangulo e Equilátero");
      }else if(comp1 != comp2 && comp1 != comp3){
        printf("O triangulo e Escaleno");
      }else if(comp1 == comp2 || comp1 == comp3 || comp3 == comp2){
        printf("O triangulo e Isósceles");
      }}else{
      printf("Nao é o comprimento de um triangulo");
    }
    return 0;
}
