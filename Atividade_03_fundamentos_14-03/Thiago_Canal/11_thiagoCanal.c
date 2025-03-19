#include <stdio.h>
#include <string.h>
#include <math.h>

void cel();
void fahr();

int main(void){
    char tipo[1];

    printf("Voce quer fahrenheit ou celsius?\n(c/f): ");
    scanf("%s", tipo);
    
    if(strcmp(tipo, "f") == 0){
        cel();
    }else if(strcmp(tipo, "c") == 0){
        fahr();
    }else{
        printf("Valor invalido.");
    }
}

void cel(){
    float fah;

    printf("Quantos graus fahrenheit? ");
    scanf("%f", &fah);

    float celsius = round((5 * (fah - 32)) / 9);

    printf("Em celsius e %.1f graus\n", celsius);
}

void fahr(){
    float cels;

    printf("Quantos graus em celsius? ");
    scanf("%f", &cels);

    float fah = round(((cels * 9) / 5) + 32);
    printf("Em fahrenheit e %.1f graus\n", fah);
}