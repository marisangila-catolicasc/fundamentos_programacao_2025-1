#include <stdio.h>

int meu_strcat(char *nome, const char *sobrenome){
    int i = 0;
    while (nome[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while (sobrenome[j] != '\0')
    {
        nome[i] = sobrenome[j];
        i++;
        j++;
    }
    nome[i] = '\0';
    return 0;
}

int main()
{
    char nome[10] = "Vinicius";
    char sobrenome[10] = "Batista";
    meu_strcat(nome, " ");
    meu_strcat(nome, sobrenome);
    printf("%s", nome);
    return 0;
}
