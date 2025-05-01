#include <stdio.h>
#include <stdlib.h>

void somar(void);
void sub(void);
void mult(void);
void divi(void);

int main(void){
    int user;

    while (1){
        printf("\n--MENU--\n");
        printf("1 - Somar\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("6 - CLS");

        printf("\nUser: ");
        scanf("%d", &user);

        if(user == 5){
            printf("Saindo...");
            break;
        }else if(user == 1){
            system("cls");
            somar();
        }else if(user == 6){
            system("cls");
        }else if(user == 2){
            system("cls");
            sub();
        }else if(user == 3){
            system("cls");
            mult();
        }else if(user == 4){
            system("cls");
            divi();
        }
    }
}

void somar(void){
    int n1, n2;

    printf("N1: ");
    scanf("%d", &n1);

    printf("n2: ");
    scanf("%d", &n2);

    printf("%d + %d = %d", n1, n2, n1 + n2);
}

void sub(void){
    int n1, n2;

    printf("N1: ");
    scanf("%d", &n1);

    printf("n2: ");
    scanf("%d", &n2);

    printf("%d - %d = %d", n1, n2, n1 - n2);
}

void mult(void){
    int n1, n2;

    printf("N1: ");
    scanf("%d", &n1);

    printf("n2: ");
    scanf("%d", &n2);

    printf("%d x %d = %d", n1, n2, n1 * n2);
}

void divi(void){
    int n1, n2;

    printf("N1: ");
    scanf("%d", &n1);

    printf("n2: ");
    scanf("%d", &n2);

    printf("%d / %d = %d", n1, n2, n1 / n2);
}


