#include <stdio.h>
#include <math.h>


int main() {

    int n, n2;

    printf("Digite o primeiro número: \n");
    scanf("%d", &n);
    printf("Digite o segundo número: \n");
    scanf("%d", &n2);

    if (n > n2) {
        printf("O número maior é: %d", n);
    }else if(n2 > n){
        printf("O %d é maior", n2);
    }else{
        printf("São iguais");
    }
}
