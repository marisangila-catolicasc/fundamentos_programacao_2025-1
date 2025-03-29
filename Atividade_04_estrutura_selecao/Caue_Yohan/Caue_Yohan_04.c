#include <stdio.h>

int main(int argc, char const *argv[])
{

  float n1, n2;
    printf("Digite um número:\n");
    scanf("%f", &n1);
    printf("Digite um número:\n");
    scanf("%f", &n2);

  
    if (n1>n2)
    {
      printf("O número %.2f é maior que o %.2f", n1, n2);
    }
    else if (n2>n1)
    {
       printf("O número %.2f é maior que o %.2f", n2, n1);
    }    
    else
    {
      printf(" Os números são iguais");
    }
    return 0;
}
