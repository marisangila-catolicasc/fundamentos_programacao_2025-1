#include <stdio.h>

int main() {
    int pares = 0, impares = 0;

    for (int i = 0; i < 10; i++){
        int num;
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num % 2 == 0){
                pares++;
        }else{
            impares++;
        }
    }
    
    printf("qnt de numeros pares: %d\n", pares);
    printf("qnt de numeros impares: %d\n", impares);
    
  return 0;
}