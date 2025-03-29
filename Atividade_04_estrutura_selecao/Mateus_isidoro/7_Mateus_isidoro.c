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
        printf("O triangulo é Equilátero");
      }else if(comp1 != comp2 && comp1 != comp3){
        printf("O triangulo é Escaleno");
      }else if(comp1 == comp2 || comp1 == comp3 || comp3 == comp2){
        printf("O triangulo é Isósceles");
      }}else{
      printf("Não é o comprimento de um triangulo");
    }
    return 0;
}
