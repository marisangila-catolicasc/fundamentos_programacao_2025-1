#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void soma(int n1, int n2);
void sub(int n1, int n2);
void mult(int n1, int n2);
void divi(int n1, int n2);
void poten(int n1, int n2);
void rest(int n1, int n2);


int main(void){
    int user, n1, n2;

    printf("Escolha o primeiro numero: ");
    scanf("%d", &n1);
    printf("Escolha o segundo: ");
    scanf("%d", &n2);

    while(1){
        printf("\nMenu\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Potencia\n");
        printf("6 - Resto\n");
        printf("7 - Sair\n");
        printf("8 - Limpar Terminal")

        printf("User: ");
        scanf("%d", &user);

        if(user == 1){
            soma(n1, n2);
        }else if(user == 2){
            sub(n1, n2);
        }else if(user == 3){
            mult(n1, n2);
        }else if(user == 4){
            divi(n1, n2);
        }else if(user == 5){
            poten(n1, n2);
        }else if(user == 6){
            rest(n1, n2);
        }else if(user == 7){
            printf("Saindo...\n");
            break;
        }else if(user == 8){
            system("cls");
        }
    }
    
}

void soma(int n1, int n2){
    int soma = n1 + n2;
    system("cls");
    printf("\n\n%d + %d = %d\n", n1, n2, soma);
}

void sub(int n1, int n2){
    int su = n1 - n2;
    system("cls");
    printf("\n\n%d - %d = %d\n", n1, n2, su);
}

void mult(int n1, int n2){
    int mul = n1 * n2;
    system("cls");
    printf("\n\n%d X %d = %d\n", n1, n2, mul);
}

void divi(int n1, int n2){
    int div = n1 / n2;
    system("cls");
    printf("\n\n%d / %d = %d\n", n1, n2, div);
}
void poten(int n1, int n2){
    int pot = pow(n1, n2);
    system("cls");
    printf("\n\n%d elevado a  %d = %d\n", n1, n2, pot);
}
void rest(int n1, int n2){
    int res = n1 % n2;
    system("cls");
    printf("\n\nResto de %d dividido por %d = %d\n", n1, n2, res);
}