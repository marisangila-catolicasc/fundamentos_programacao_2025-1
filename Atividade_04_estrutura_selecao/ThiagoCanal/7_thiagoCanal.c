#include <stdio.h>

void triangular(int l1, int l2, int l3);

int main(void){
    int l1, l2, l3;

    printf("L1: ");
    scanf("%d", &l1);
    printf("L2: ");
    scanf("%d", &l2);
    printf("L3: ");
    scanf("%d", &l3);

    triangular(l1, l2, l3);
}

void triangular(int l1, int l2, int l3){
    if(l1 + l2 > l3 && l2 + l3 > l1 && l3 + l1 > l2){
        if(l1 == l2 && l2 == l3){
            printf("Triangulo equilatero");
        }else if(l1 != l2 && l2 != l3 && l1 != l3){
            printf("Triangulo escaleno");
        }else if(l1 == l2 || l2 == l3 || l1 == l3){
            printf("Triangulo isosceles");
        }
    }else{
        printf("Nao e um triangulo");
    }
}