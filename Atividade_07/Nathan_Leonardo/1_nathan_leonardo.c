#include <stdio.h>

int main(void){

    int n1, n2;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n1);

    printf("Digite outro numero inteiro: \n");
    scanf("%d", &n2);

    if( n1 < n2 )
    while(n1 < n2){
        printf("%d", n1);
        n1++;
    }

    else if( n1 > n2 ){
        while (n1 > n2)
        {
            printf("%d", n1);
            n1--;
        }
        
    }


    return 0;
}