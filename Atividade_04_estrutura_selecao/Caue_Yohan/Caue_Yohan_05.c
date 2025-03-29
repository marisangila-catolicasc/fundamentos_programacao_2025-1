#include <stdio.h>

int main(int argc, char const *argv[])
{

  int idade;
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    if (idade<18)
    {
      printf("Você é Não Eleitor", idade);
    }
    else if (idade>=18 && idade<=65)
    {
       printf("Você é Eleitor Obrigátorio ", idade);
    }    
    else if (idade>65)
    {
      printf(" Você é eleitor facultativo", idade);
    }
    return 0;
}
