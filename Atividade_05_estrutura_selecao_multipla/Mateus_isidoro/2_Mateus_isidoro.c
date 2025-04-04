#include <stdlib.h>
#include <stdio.h>
int main() {
    int codigo;
    printf("|Codigo|Estado|\n");
    printf("|1|Rio Grande do sul| \n");
    printf("|2|Santa Catarina| \n");
    printf("|3|São Paulo| \n");
    printf("|4|Rio de Janeiro| \n");  
    printf("|5|Minas Gerais| \n");
    printf("|6|Espirito Santo| \n");
    printf("|7|Bahia| \n");
    printf("|8|Parana| \n");
    printf("|9|Rio Grande do Norte| \n");
    printf("|10|Acre| \n");
    printf("|11|Amazonas| \n");  
    printf("|12|Amapá| \n");
    printf("|13|Pará| \n");
    printf("|14|Rondônia| \n");
    printf("|15|Tocantins| \n");
    printf("|16|Roraima| \n");
    printf("|17|Alagoas| \n");
    printf("|18|Ceará| \n");
    printf("|19|Pernambuco| \n");
    printf("|20|Maranhão| \n");
    printf("|21|Paraíba| \n");
    printf("|22|Piauí| \n");
    printf("|23|Sergipe| \n");
    printf("|24|Mato Grosso| \n");
    printf("|25|Mato Grosso do Sul| \n");
    printf("|26|Goiás| \n");
    printf("|27|Distrito Federal| \n");
    printf("Digite um codigo: ");
    scanf("%d",&codigo);
    switch (codigo){
        case 1:
            printf("O estado do Rio grande do sul fica na regiao sul\n");
            break;
        case 2:
            printf("O estado da Santa Catarina fica na regiao sul\n");
            break;
        case 3:
            printf("O estado do São Paulo fica na regiao sudeste\n");
            break;
        case 4:
            printf("O estado do Rio de Janeiro fica na regiao sudeste\n");
            break;
        case 5:
            printf("O estado da Minas Gerais fica na regiao sudeste\n");
            break;
        case 6:
            printf("O estado do Espirito Santo fica na regiao sudeste\n");
            break;
        case 7:
            printf("O estado da Bahia fica na regiao centro-oeste\n");
            break;
        case 8:
            printf("O estado do Paraná fica na regiao nordeste\n");
            break;
        case 9:
            printf("O estado do Rio Grande do Norte fica na regiao nordeste\n");
            break;
        case 10:
            printf("O estado do Acre fica na regiao norte\n");
            break;
        case 11:
            printf("O estado da Amazonas fica na regiao norte\n");
            break;
        case 12:
            printf("O estado do Amapá fica na regiao norte\n");
            break;
        case 13:
            printf("O estado do Pará fica na regiao norte\n");
            break;
        case 14:
            printf("O estado da Rondônia fica na regiao norte\n");
            break;
        case 15:
            printf("O estado do Tocantins fica na regiao norte\n");
            break;
        case 16:
            printf("O estado da Roraima fica na regiao norte\n");
            break;
        case 17:
            printf("O estado da Alagoas fica na regiao nordeste\n");
            break;
        case 18:
            printf("O estado do Ceará fica na regiao nordeste\n");
            break;  
        case 19:
            printf("O estado do Pernambuco fica na regiao nordeste\n");
            break;
        case 20:
            printf("O estado do Maranhão fica na regiao nordeste\n");
            break;
        case 21:
            printf("O estado da Paraíba fica na regiao nordeste\n");
            break;
        case 22:  
            printf("O estado do Piauí fica na regiao nordeste\n");
            break;
        case 23:
            printf("O estado do Sergipe fica na regiao nordeste\n");
            break;
        case 24:
            printf("O estado do Mato Grosso fica na regiao centro-oeste\n");
            break;
        case 25:
            printf("O estado do Mato Grosso do Sul fica na regiao centro-oeste");
            break;
        case 26:
            printf("O estado do Goiás fica na regiao centro-oeste\n");
            break;
        case 27:  
            printf("O estado do Distrito Federal fica na regiao centro-oeste\n");
            break;
        default:
            printf("Código inválido");
            break;
    }
    return 0;
}

