
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(NULL));
  int aleatorio = rand() % 100;
  int num = 0;
  
  do {
    printf("Digite um numero de 0 a 100:\n");
    scanf("%d", &num);
    
    if (num < 0 || num > 100) {
      printf("O numero inserido eh invalido!\n");
      continue;
    }
    
    if (num < aleatorio) {
      while (num < aleatorio) {
        num++;
        printf("%d\n", num);
      }
    } else if (num > aleatorio) {
      while (num > aleatorio) {
        num--;
        printf("%d\n", num);
      }
    }
    
    if (num == aleatorio) {
      printf("Chegou ao numero aleatorio: %d\n", aleatorio);
      break;
    } else if (num > aleatorio) {
      printf("Passou do numero aleatorio que era: %d\n", aleatorio);
      break;
    }
  } while (1);
  
  return 0;
}
