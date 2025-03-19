#include <stdio.h>

void juros(int tempo, float dinheiro);

int main(void){
    int anos;
    float invest;

    printf("Quanto voce quer investir? ");
    scanf("%f", &invest);
    printf("Por quanto tempo? ");
    scanf("%d", &anos);
    juros(anos, invest);
}

void juros(int tempo, float dinheiro){
    float juro = tempo * dinheiro * 0.05;
    float montante = dinheiro + juro;

    printf("Investindo R$%.2f por %d anos tera R$%.2f de juros\nE tera um montante de R$%.2f", dinheiro, tempo, juro, montante);
}