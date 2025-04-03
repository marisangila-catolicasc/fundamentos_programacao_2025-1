#include <stdio.h>
#include <math.h>


int main() {
    int n, n2, n3;

    printf("Digite o primeiro número: \n");
    scanf("%d", &n);
    printf("Digite o segundo número: \n");
    scanf("%d", &n2);
    printf("Digite o terceiro número: \n");
    scanf("%d", &n3);

    if (n > n2 && n > n3){
        printf("%d é o maior", n);
    }else if(n2 > n && n2 > n3){
        printf("%d é o maior", n2);
    }else if(n3 > n && n3 > n2){
        printf("%d é o maior", n3);
    }
}