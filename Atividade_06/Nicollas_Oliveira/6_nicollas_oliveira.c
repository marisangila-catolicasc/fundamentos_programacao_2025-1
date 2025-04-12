#include <stdio.h>

int main(int argc, char const *argv[])
{

    int numero, inclemento;

    printf("Coloque um numero \n");
    scanf("%d", &numero);


    printf("Coloque um incremento \n");
    scanf("%d", &inclemento);

    for (int i = 0; i <= numero; i+= inclemento)
    {
        printf("%d \n", i);
        /* code */
    }
    
    return 0;
}
