#include <stdio.h>

int main() {
  int num, num2;
  num = 0;
  num2 =0;

  printf("Insira o 1° Número: \n");
  scanf("%d", &num);

  for(int i = 2; i <=10; i++)
    {
        printf("Insira o %d° Número: \n", i);
        scanf("%d", &num2);
        if(num2 > num)
        {
            num = num2;
        }
    }
    printf("O maior número é: %d", num);
  return 0;
}