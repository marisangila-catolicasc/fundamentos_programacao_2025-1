#include <stdio.h>

int main (){
    float numA, numB, numC;

    printf("fala um lado: ");
    scanf ("%f", &numA);

    printf("fala outro lado: ");
    scanf ("%f", &numB);

     printf("fala o outro lado: ");
    scanf ("%f", &numC);

    if(numA <= 0 || numB <= 0 || numC <= 0){
        printf("nao pode 0 ou negativo aqui nao");
        }

    else if (numA + numB <= numC || numA + numC <= numB || numB + numC <= numA) {
        printf("nao ta podendo\n");
    }

    else if (numA == numB && numB == numC){
         printf("o triangulo eh equilatero");
       }
    else if (numB == numA || numA == numC || numB == numC){
         printf("o triangulo é isoceles");
       }
    else{
        printf("o triangulo é escaleno");
       }

       return 0;
}
