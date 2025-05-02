#include <stdio.h>

int main() {

  int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("Ordem dos numeros \n");

  for (int i = 0; i < 10; i++) {
    printf("%d \n", nums[i]);
  }

  printf("\n Ordem contraria \n");

  for (int i = 9; i >= 0; i--) {
    printf("%d \n", nums[i]);
  }

  return 0;
}