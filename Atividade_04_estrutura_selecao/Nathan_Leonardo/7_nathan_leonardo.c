#include <stdio.h>

int main(void){

    float x, y, z;

    printf("Digite o valor do lado X: \n");
    scanf("%f", &x);

    printf("Digite o valor do lado Y: \n");
    scanf("%f", &y);

    printf("Digite o valor do lado Z: \n");
    scanf("%f", &z);

    if(x + y > z && y + z > x && x + z > y){
      if(x == y && y == z){
        printf("Os valores formam um Triangulo Equilátero \n");
      }  
    } else if(x == y, x == z, y == z){
        printf("Os valores formam um Triangulo Isósceles \n");
    }
    else{
        printf("Os valores formam um Triangulo Escaleno \n");
    }

    return 0;
}