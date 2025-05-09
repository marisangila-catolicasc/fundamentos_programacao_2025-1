#include <stdio.h>
int main()
{
  int matriz[3][3];
  int linha = 0;

  for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
     printf("Digite um valor: ");
    scanf("%d", &matriz[i][j]);
    }
  }

  printf("Digite o numero da linha que deseja ver:\n");
  scanf("%d", &linha);

  for (int i = 0; i < 3; i++)
printf("%d ", matriz[linha][i]);
  return 0;
}