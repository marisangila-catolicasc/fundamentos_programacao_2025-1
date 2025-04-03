#include <stdio.h>

void maiorq(int n1, int n2);

int main(void){
    int n1, n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    maiorq(n1, n2);

}

void maiorq(int n1, int n2){
    if(n1 > n2){
        printf("%d maior que %d", n1, n2);
    }else{
        printf("%d maior que %d", n2, n1);
    }
}