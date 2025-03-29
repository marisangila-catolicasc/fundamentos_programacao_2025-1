#include <stdio.h>

int main(int argc, char const *argv[])
{

  int n1, n2, n3;
    printf("Digite um número:\n");
    scanf("%d", &n1);
    printf("Digite um número:\n");
    scanf("%d", &n2);
    printf("Digite um número:\n");
    scanf("%d", &n3);
    
    if (n1 > n2 && n1 > n3)
    {
     printf("O maoir número é: %d\n", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
     printf("O maoir número é: %d\n", n2);
    }
    else if (n3 > n1 && n3 > n2)
    {
       printf("O maoir número é: %d\n", n3);
    }
    return 0;
}
