#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, inc;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    printf("Digite um incremento:\n");
    scanf("%d", &inc);
    printf("------------------------------\n");

    for (int i = 0; i <= num; i += inc)
    {    
        printf("%d\n", i);
    }



    return 0;
}