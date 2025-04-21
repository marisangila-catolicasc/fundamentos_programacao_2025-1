#include <stdio.h>
int main(){

int num, inc;
    
printf("Digite um numero: ");
    scanf("%d", &num);
    
printf("Digite o incremento: ");
    scanf("%d", &inc);
    
    for (int i = 0; i <= num; i+=inc) {
printf("%d\n", i);
    }
    return 0;
}