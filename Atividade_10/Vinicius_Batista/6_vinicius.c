#include <stdio.h>

int verifica_par_impar(int numero){
    
    if (numero % 2 != 0)
    {
        return 0;
    }
    return 1;
    
}

int main()
{
    int num;
    printf("Digite um numero\n");
    scanf("%d", &num);
    printf("se sair 1 eh par, se sair 0 eh impar \n%d", verifica_par_impar(num));
    return 0;
    
}
