#include <stdio.h>

void comparation(int n1, int n2);

int main(void){
    int a, b;

    printf("N1: ");
    scanf("%d", &a);

    printf("N2: ");
    scanf("%D", &b);

    comparation(a, b);
}

void comparation(int n1, int n2){
    if(n1 < n2){
        printf("n1: %d, n2: %d\n", n1, n2);
        while (n1 < n2){
            n1++;
            printf("n1: %d, n2: %d\n", n1, n2);
        }
    }else if(n1 > n2){
        printf("n1: %d, n2: %d\n", n1, n2);
        while (n1 > n2){
            n1--;
            printf("n1: %d, n2: %d\n", n1, n2);
        }
    }else{
        printf("Ja sao iguais");
    }
}