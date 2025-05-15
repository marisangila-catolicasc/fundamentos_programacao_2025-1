#include <stdio.h>

int meu_strcpy(char *copia, const char *nome){
    int armario = 0;
    while (nome[armario] != '\0')
    {
        copia[armario] = nome[armario];
        armario++;
    }
    copia[armario] = '\0';
    return 0;    
}

int main()
{
    char nome[10] = "Vinicius";
    char campo_vazio_e_triste[10];

    meu_strcpy(campo_vazio_e_triste, nome);
    printf("%s", campo_vazio_e_triste);

    return 0;
}
