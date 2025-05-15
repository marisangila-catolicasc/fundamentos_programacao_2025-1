#include <stdio.h>

int verifica_palindromo(const char *palavra){
    int comeco = 0;
    int fim = 0;
    while (palavra[fim] != '\0')
    {
        fim++;
    }
    fim--;
    while (comeco < fim)
    {
        if (palavra[comeco] != palavra[fim]){return 0;}
        comeco++;
        fim--;
    }
    return 1;
    
}

int main()
{
    char nome[10];
    
    printf("Digite uma palavra:\n");
    scanf("%s", nome);
    printf("Se der 1 eh palindromo, se der 0 nao eh palindromo\n");
    printf("%d", verifica_palindromo(nome));
    return 0;
}
