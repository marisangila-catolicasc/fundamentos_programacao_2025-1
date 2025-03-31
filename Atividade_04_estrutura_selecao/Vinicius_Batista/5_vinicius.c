#include <stdio.h>
#define IDA_OBRIGATORIA 18

int main()
{ 
    int idade_eleitor;
    printf("Digite sua idade:\n");
    scanf("%d", &idade_eleitor);

    if (idade_eleitor < IDA_OBRIGATORIA)
    {
        printf("Nao eleitor");
    }else if(idade_eleitor > 65){
        printf("Voto facultativo");
    }else if(idade_eleitor > IDA_OBRIGATORIA){
        printf("Voto obrigatorio");
    }
    
    
    return 0;
}
