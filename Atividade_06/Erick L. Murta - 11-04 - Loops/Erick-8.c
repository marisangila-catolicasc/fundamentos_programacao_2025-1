#include <stdio.h>
#include<math.h>

int main(void){
    int i = 0;
    int  tamanho = 10;

    int *array = (int*)malloc(tamanho*sizeof(int));
    if (array == NULL)
    {
        printf("Erro ao alocar a memoria");
        return 1;
    }
    printf("serao exigidos %d valores: \n", tamanho);
    int restante = 0;
    for(i;i<tamanho;i++){
        restante = tamanho - i;
        printf("Sao necessarios ainda %d valores, digite um valor:\n ", restante);
        scanf("%d", &array[i]);
    }
    int maior = 0;
    for ( i = 0; i < tamanho; i++)
    {
        if (maior < array[i])
        {
            maior = array[i];
        }
        
    }

    printf("O maior numero eh: %d",maior);
    
}