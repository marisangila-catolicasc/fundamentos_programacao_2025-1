#include <stdio.h>

int main (){
    float a, b, c;

    printf("Digite um lado do triangulo:\n");
    scanf ("%f", &a);

    printf("Digite outro lado do triangulo:\n");
    scanf ("%f", &b);

    printf("Digite mais um lado do triangulo:\n");
    scanf ("%f", &c);

    if(a <= 0 || b <= 0 || c <= 0){
        printf("nao pode 0 ou negativo");
        }

    else if (a + b <= c || a + c <= b || b + c <= a) {
        printf("nao pode\n");
    }

    else if (a == b && b == c){
         printf("o triangulo e equilatero");
       }
    else if (b == a || a == c || b == c){
         printf("o triangulo e isoceles");
       }
    else{
        printf("o triangulo e escaleno");
       }
}