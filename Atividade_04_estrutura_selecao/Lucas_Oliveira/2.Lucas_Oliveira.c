#include <stdio.h>
int main() {
    int num;
    printf("Escolha um numero:");
    scanf("%d", &num);
    if(num%2 == 0){
        printf("O seu numero eh par");
    }else{
        printf("O seu numero eh impar");
    }
    return 0;
}