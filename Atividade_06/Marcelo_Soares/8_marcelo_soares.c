#include <stdio.h>
int main()   {

  int num, maior = 0;
  for (int i = 0; i < 10; i++) {
    printf("Digite 10 numeros: \n");
    scanf("%d", &num);
    if(num > maior){
      maior = num;
    }
  }
  printf("O maior numero eh: %d\n", maior);

  return 0;
}