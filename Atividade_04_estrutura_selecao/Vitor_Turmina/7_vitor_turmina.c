#include <stdio.h>

int main(){

    float a, b, c;

    printf("Informe 3 valores:\n");
    scanf("%f %f %f", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        if(a == b && a == c){
            printf("Eh um triangulo equilatero");
        }
        else if (a == b || a == c || b == c){
            printf("Eh um triangulo isosceles");
        }
        else{
            printf("Eh um triangulo escaleno");
        }
    }
    else{
        printf("Esses valores nao podem formar um triangulo");
    }
}