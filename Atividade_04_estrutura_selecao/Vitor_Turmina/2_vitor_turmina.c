#include <stdio.h>

int main(){
     
    int num;

    printf("Informe um numero inteiro\n");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Esse numero eh par!\n");
    }
    else{
        printf("Esse numero eh impar!\n");
    }
return 0;
}
