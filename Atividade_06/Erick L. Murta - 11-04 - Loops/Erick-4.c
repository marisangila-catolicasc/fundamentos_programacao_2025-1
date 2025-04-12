#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i = 0;
    int  tamanho = 10;

    int *array = (int*)malloc(tamanho*sizeof(int));



    if (array == NULL)
    {
        printf("Erro ao alocar a memória");
        return 1;
    }


    for(i; i < tamanho; i++){
        printf("Digite um número: \n");
        scanf("%d", &array[i]);
    }


    i = 0;
    int countP = 0,countI = 0;


    for(i;i <tamanho ;i++){
        if (array[i] % 2 == 0){
            countP++;
        }else{
            countI++;
        }
    }

    int *arrayP = (int*)malloc(countP*sizeof(int));
    int *arrayI = (int*)malloc(countI*sizeof(int));

    if (arrayP == NULL || arrayI == NULL) {
        printf("Erro ao alocar memória para os arrays de pares ou ímpares\n");
        free(array);
        return 1;
    }

    int indexI = 0, indexP = 0;
    for ( i = 0; i < tamanho; i++) 
    {
        if(array[i] % 2 == 0 ){
            arrayP[indexP] = array[i];
            printf("%d\n", arrayP[indexP]);
            indexP++;

        }else{
            arrayI[indexI] = array[i];
            printf("%d\n", arrayI[indexI]);
            indexI++;

        }
    }
    printf("Voce digitou esses numeros: \n");
    for ( i = 0; i < tamanho; i++)
    {
        printf("%d\n", array[i]);
    }

    printf("Onde, desses 10 numeros, %d, foram impares:\n ",countI);
    for ( i = 0; i < countI; i++)
    {
        printf("%d\n", arrayI[i]);
    }

    printf("E %d foram pares: \n", countP);
    for ( i = 0; i < countP; i++)
    {
        printf("%d\n", arrayP[i]);
    }
    
    free(array);
    free(arrayP);
    free(arrayI);

    return 0;
}