#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    int numero1;
    int numero2;

    printf("Digite o primeiro número: \n");
    scanf("%d", &numero1);
    printf("Digite o segundo número: \n");
    scanf("%d", &numero2);

    if (numero1 > numero2)
    {
        printf("%d é maior que %d\n", numero1, numero2);
    }

    else if (numero2 > numero1)
    {
        printf("%d é maior que %d\n", numero2, numero1);
    }

    else{
        printf("Os números são iguais\n");
    }
    

    return 0;
}
