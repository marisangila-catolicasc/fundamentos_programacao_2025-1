#include <stdio.h>

int main() {
int numeros[20], pares = 0;

 printf("Digite 20 numeros inteiros:\n");
 for (int i = 0; i < 20; i++){
    scanf("%d", &numeros[i]);

    if (numeros[i] % 2 == 0){
         pares++;
    }
 }
 printf("\nQuantidade de numeros pares: %d\n", pares);
}
