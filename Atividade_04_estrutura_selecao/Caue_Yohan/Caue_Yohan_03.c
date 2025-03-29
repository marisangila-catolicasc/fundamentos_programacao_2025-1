#include <stdio.h>

int main(int argc, char const *argv[])
{

  int macas;
  float preco;
    printf("Quantas maças você quer comprar?\n");
    scanf("%d", &macas);

    if (macas>=12)
    {
     preco = macas * 2.30;
      printf("O total do preço das maças é: R$ %.2f", preco);
    }
    else
    {
      preco = macas * 1.95;  
        printf("O total do preço das maças é: R$ %.2f", preco);
    }    

    return 0;
}
