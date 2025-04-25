#include <stdio.h>

int main(void){

    int n, p = 0, i = 0;

    for (int l = 1; l <= 10; l++){
        printf("Digite o primeiro numero: \n", l);
        scanf("%d", &n);
    }

    if (n % 2 == 0){
        p++;
    } else{
        i++;
    }

    printf("Impares: \n",i);
    printf("Pares: \n", p); 

    return 0;
}