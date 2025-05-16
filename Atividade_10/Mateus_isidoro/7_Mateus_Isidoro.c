#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int verificar_primo(int num){
      if (num <= 1) return 0; 
      if (num <= 3) return 1;
      if (num % 2 == 0 || num % 3 == 0) return 0; 
      for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
      }
      return 1;
    }
int main(void){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("1 = primo\n0 = nao primo \nResultado = %d\n", verificar_primo(num));
    return 0;
}