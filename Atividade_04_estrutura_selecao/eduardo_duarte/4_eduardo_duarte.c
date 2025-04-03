#include <stdio.h>

int main ()
{
    int n1;
    int n2;
     
    printf("digite um numero: \n");
    scanf ("%d", &n1);
    printf("digite outro numero : \n");
    scanf ("%d", &n2);

    if (n1 > n2){
        printf("o numero %d e maior que o numero %d\n", n1, n2);
        }else if (n1 < n2){
            printf("o numero %d e menor que o numero %d \n", n1, n2);
            }else{
                printf("os numeros %d e %d sao iguais \n", n1, n2);
            }
            return 0;
        }
    

    
