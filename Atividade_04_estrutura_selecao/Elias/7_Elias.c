#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x, y, z;

    printf("insira um cumprimento");
    scanf("%d", &x );

    printf("insira outro cumprimento");
    scanf("%d", &y );

    printf("insira mais um cumprimento");
    scanf("%d", &z );

    if(x <= 0 || y <= 0|| z <= 0){
        printf("Um dos cumprimentos nao corresponde a medida de um triangulo");
    }else if( x == y && x == z){
        printf("eh um triangulo Equilatero");
    }else if (x == y || x==z || y==z){
        printf("eh um  triamgulo isosceles");
    }else{
        printf("O triangulo eh Escaleno");
    }

    return 0;
}
