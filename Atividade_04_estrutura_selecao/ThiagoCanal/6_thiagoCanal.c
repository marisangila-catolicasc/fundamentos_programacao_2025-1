#include <stdio.h>

void plus(int n1, int n2, int n3);

int main(void){
    int n1, n2, n3;

    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);
    printf("N3: ");
    scanf("%d", &n3);

    plus(n1, n2, n3);

}

void plus(int n1, int n2, int n3){
    if(n1 > n2 && n1 > n3){
        printf("%d e o maior", n1);
    }else if(n2 > n1 && n2 > n3){
        printf("%d e o maior", n2);
    }else if(n3 > n1 && n3 > n2){
        printf("%d e o maior", n3);
    }
}