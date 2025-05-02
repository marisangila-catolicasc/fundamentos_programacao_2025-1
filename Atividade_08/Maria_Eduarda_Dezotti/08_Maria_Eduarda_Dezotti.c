include <stdio.h>

int main() {
  int numv[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, num;
  int conf = 0;

  printf("Digite um numero para ser encontrado\n");
  scanf("%d", &num);

  for (int i = 0; i < 10; i++) {
    if (numv[i] == num) {
      printf("O numero %d esta na posicao %d da lista", num, i);
      conf = 1;
    }
  }
    
  if (conf != 1) {
    printf("\n O numero digitado nao esta presente na lista");
  }

  return 0;
}
