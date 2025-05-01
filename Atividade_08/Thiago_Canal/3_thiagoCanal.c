#include <stdio.h>
#include <stdlib.h>

float media(int vetor_inteiro[], int ns);
void fora_media(float media, int ns, int vetor_inteiro[]);

int main(void){
    int ns;

    printf("Numero de elementos: ");
    scanf("%d", &ns);

    int vetor_inteiro[ns];
    int index = 0;

    int numero;

    for(int i = 0; i < ns; i++){
        printf("Numero(%d): ", i + 1);
        scanf("%d", &numero);

        vetor_inteiro[index] = numero;
        index++;
    }

    float media_vetor = media(vetor_inteiro, ns);
    fora_media(media_vetor, ns, vetor_inteiro);
}

float media(int vetor_inteiro[], int ns){
    float soma = 0;

    for(int i = 0; i < ns; i++){
        soma += vetor_inteiro[i];
    }
    
    float media = soma / ns;
    system("cls");
    printf("Media: %.2f\n", media);

    return media;
}

void fora_media(float media, int ns, int vetor_inteiro[]){
    int num_fora_media = 0, valor;

    for(int i = 0; i < ns; i++){
        valor = vetor_inteiro[i];
        if(valor > media){
            num_fora_media++;
        }
    }

    int acima_media[num_fora_media];
    int index = 0;

    for(int i = 0; i < ns; i++){
        if(vetor_inteiro[i] > media){
            acima_media[index] = vetor_inteiro[i];
            index++;
        }
    }

    printf("Quantidade de numeros acima da media:\n%d\n", num_fora_media);

    printf("Numeros acima da media:\n");
    for(int i = 0; i <num_fora_media; i++){
        printf("%d\n", acima_media[i]);
    }
}