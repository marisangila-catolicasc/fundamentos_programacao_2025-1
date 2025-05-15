#include <stdio.h>

int meu_strlen(const char *str)
{
    int tamanho = 0;
    while (str[tamanho] != '\0')
    {
        tamanho++;
    }
  return tamanho;
}

int main()
{
    char string[20];

    printf("Digite qualquer coisa:\n");
    fgets(string, sizeof(string), stdin);
    int tamanho = meu_strlen(string);
    printf("\nO tamanho eh %d", tamanho -1);

    return 0;
}
