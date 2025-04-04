#include <stdio.h>
int main() {
    float comp1, comp2, comp3;
    printf("Digite 1º o comprimento do triangulo: ");
    scanf("%f", &comp1);
    printf("\nDigite 2º o comprimento do triangulo: ");
    scanf("%f", &comp2);
    printf("\nDigite 3º o comprimento do triangulo: ");
    scanf("%f", &comp3);
    if(comp1>0 && comp2>0 && comp2>0){
      if(comp1 == comp2 && comp1 == comp3){
        printf("\nO triangulo e Equilatero");
      }else if(comp1 != comp2 && comp1 != comp3){
        printf("\nO triangulo e Escaleno");
      }else if(comp1 == comp2 || comp1 == comp3 || comp3 == comp2){
        printf("\nO triangulo e Isosceles");
      }}else{
      printf("Nao eh o comprimento de um triangulo");
    }
    return 0;
}