#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int ano(void);
void bissexto(int ano);
void sair(void);

time_t anao;
struct tm *anaoHJ;

int main(void){
    int user;
    int anoHJ;

    while (1){
        printf("\n\nMenu\n");
        printf("1 - Verificar ano autal\n");
        printf("2 - Escolher ano\n");
        printf("3 - Sair\n");
        printf("4 - Limpar Terminal\n");

        printf("User: ");
        scanf("%d", &user);

        if(user == 1){
            anoHJ = ano();
            system("cls");
            printf("\n");
            bissexto(anoHJ);
        }else if(user == 3){
            sair();
            break;
        }else if(user == 2){
            int data;
            printf("Ano: ");
            scanf("%d", &data);
            system("cls");
            bissexto(data);
        }else if(user == 4){
            system("cls");
        }
    }
}

int ano(void){
    time(&anao);
    anaoHJ = localtime(&anao);
    int ano_atual = anaoHJ->tm_year + 1900;
    return ano_atual;
}

void bissexto(int ano){
    if (((ano % 4) == 0 && (ano % 100) != 0) || (ano % 400) == 0 ){
        printf("%d e bissexto", ano);
    }else{
        printf("%d nao e bissexto", ano);
    }
}

void sair(void){
    int hora = anaoHJ->tm_hour;

    if(hora > 5 && hora <= 12){
        printf("Tenha um bom dia.");
    }else if(hora >= 13 && hora < 18){
        printf("Tenha uma boa tarde.");
    }else if(hora >= 18 && hora < 24){
        printf("Tenha uma boa noite.");
    }else{
        printf("Vai dormir.");
    }
}