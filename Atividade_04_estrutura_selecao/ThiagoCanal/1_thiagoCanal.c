#include <stdio.h>

void posi(int n);

int main(void){
    int n;

    printf("Digie um numero: ");
    scanf("%d", &n);
    posi(n);
}

void posi(int n){
    if(n < 0){
        printf("E negativo");
    }else{
        printf("E positivo");
    }
}