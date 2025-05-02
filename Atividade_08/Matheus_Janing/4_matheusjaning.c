#include <stdio.h>

int main(){
    int numeros[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++){
      scanf("%d", &numeros[i]);
    }

    printf("\nNumeros na ordem de entrada:\n");
    for (int i = 0; i < 10; i++){
      printf("%d ", numeros[i]);
    }

    printf("\n\nNumeros na ordem inversa:\n");
    for (int i = 9; i >= 0; i--){
      printf("%d ", numeros[i]);
    }

    printf("\n");
}