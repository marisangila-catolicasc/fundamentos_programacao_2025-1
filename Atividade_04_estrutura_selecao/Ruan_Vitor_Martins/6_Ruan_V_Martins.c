#include <stdio.h>

int main (){
    float numA, numB, numC;

    printf("fala um numero: ");
    scanf ("%f", &numA);

    printf("fala outro numero: ");
    scanf ("%f", &numB);

     printf("fala outro numero: ");
    scanf ("%f", &numC);

    if(numA > numB && numA > numC){
        printf("o primeiro numero eh maior");
        }
        else if (numB > numA && numB > numC){
         printf("o segundo numero eh maior");
       }
       else if (numC > numA && numC > numA){
         printf("o terceiro numero eh maior");
       }
       else{
        printf("os numeros sao iguais ou deu tudo errado");
       }

       return 0;
}
