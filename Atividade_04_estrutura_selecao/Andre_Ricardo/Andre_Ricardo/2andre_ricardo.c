#include <stdio.h>
#include <math.h>


int main() {
    int n;

    printf("Digite um número: \n");
    scanf("%d", &n);
    
    if ((n % 2) == 0){
        printf("Par");
    }else{
        printf("Ímpar");
    }
}
