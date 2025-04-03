#include <stdio.h>
#include <math.h>


int main() {
    int n;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Número negativo");
    }else{
        printf("Número positivo");
    }
    
}
