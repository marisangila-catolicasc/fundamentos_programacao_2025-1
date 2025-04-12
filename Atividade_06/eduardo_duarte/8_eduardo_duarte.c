#include <stdio.h>

int main()

{
    int num, x = -9999999, maior;

    for (int i = 0; i < 10; i++)
    {
        printf("digite numeros diferentes: \n");
        scanf("%d", &num);
    }if (num > x)
        maior = num;
        
         printf("o maior numero e: %d", maior);    
        
   
    return 0;
}