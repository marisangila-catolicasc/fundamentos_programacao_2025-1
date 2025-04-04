#include <stdio.h>

int main (){
    float numA, numB;

    printf("fala um numero: ");
    scanf ("%f", &numA);

    printf("fala outro numero: ");
    scanf ("%f", &numB);

    if(numA > numB){
        printf("o primeiro numero eh maior");
        }
        else if (numB > numA){
         printf("o segundo numero eh maior");
       }
       else if (numA == numB){
         printf("os numeros sao inguais");
       }
       else{
        printf("deu tudo errado ai amigo");
       }

       return 0;
}
