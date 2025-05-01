#include <stdio.h>

int main()
{
    int nums[5];
    int maior = -9999;
    int menor = 9999;
    for (int i = 0; i < 5; i++)
    {
      printf("Digite um numero inteiro:\n");
      scanf("%d", &nums[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] > maior)
        {
            maior = nums[i];
        }for (int j = 0; j < 5; j++)
        {
            if (nums[j] < menor)
            {
                menor = nums[j];
            }
            
        }
        
    }
    printf("O maior numero eh %d e o menor eh %d", maior, menor);
    
    return 0;
}
