#include <stdio.h>
#include <time.h>
#include <string.h>

void caso_s();
void caso_n();

char quiz[10];
time_t anao;
struct tm *anaoHJ;

int main(void){

    time(&anao);
    anaoHJ = localtime(&anao);
    printf("Otimo %04d\n", anaoHJ->tm_year + 1900);
    printf("O ano esta certo (s/n)? ");
    scanf("%s", quiz);
    if(strcmp(quiz, "s") == 0){
        caso_s();
    }else if(strcmp(quiz, "n") == 0){
        caso_n();
    } else{
        printf("Valor invalido");
    }
    return 0;
}

void caso_s(){
    char saber[3];
    int hora = anaoHJ->tm_hour;

    printf("Gostaria de saber a data e a hora?\n(s/n): ");
    scanf("%s", saber);

    if(strcmp(saber, "s") == 0){
        printf("Data: %02d/%02d/%04d %02d:%02d\n", anaoHJ->tm_mday, anaoHJ->tm_mon + 1, anaoHJ->tm_year + 1900, anaoHJ->tm_hour, anaoHJ->tm_min);
    } else if(strcmp(saber, "n") == 0){
        if(hora > 5 && hora <= 12){
            printf("Tenha um bom dia.");
        } else if(hora >= 13 && hora < 18){
            printf("Tenha uma boa tarde.");
        }else if(hora >= 18 && hora < 24){
            printf("Tenha uma boa noite.");
        }else{
            printf("Vai dormir.");
        }
    }else{
        printf("Valor invalido");
    }
}

void caso_n(){
    int yearr;
    int ano_real = anaoHJ->tm_year + 1900;

    printf("Qual o ano atual? ");
    scanf("%d", &yearr);
    if(yearr < ano_real){
        printf("Espero que %d tenha sido um otimo ano para voce", yearr);
    }else if(yearr > ano_real){
        printf("%d vai ser um otimo ano para voce", yearr);
    }else{
        printf("De novo, otimo %d", yearr);
    }
    return 0;
    
}