#include <stdio.h>

int main ()
{
    int n1;

    printf("Digite um numero: \n");
    scanf("%d", &n1);

     if ( n1 % 2 == 0){
        printf("o numero %d e par\n", n1);
        }else{
            printf("o numero %d e impar\n", n1);
        }
        
        return 0;
    }


