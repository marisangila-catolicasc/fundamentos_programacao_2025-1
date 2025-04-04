#include <stdio.h>
#include <math.h>
int main(){

    int codigo;
    
    printf("DIGITE O CODIGO DO ESTADO:\n");
    //norte
    printf("[1] - Amazonas\n");
    printf("[2] - Pará\n");
    printf("[3] - Roraima\n");
    printf("[4] - Amapá\n");
    printf("[5] - Rondônia\n");
    printf("[6] - Acre\n");
    printf("[7] - Tocantins\n");
    //nordeste  
    printf("[8] - Piauí\n");
    printf("[9] - Maranhão\n");
    printf("[10] - Pernambuco\n");
    printf("[11] - Rio Grande do Norte\n");
    printf("[12] - Paraíba\n");
    printf("[13] - Ceará\n");
    printf("[14] - Bahia\n");
    printf("[15] - Alagoas\n");
    printf("[16] - Sergipe\n");
    //centro-oeste
    printf("[17] - Mato Grosso\n");
    printf("[18] - Mato Grosso do Sul\n");
    printf("[19] - Goiás\n");
    //sudeste
    printf("[20] - Minas Gerais\n");
    printf("[21] - São Paulo\n");
    printf("[22] - Rio de Janeiro\n");
    printf("[23] - Espírito Santo\n");
    //sul
    printf("[24] - Paraná\n");
    printf("[25] - Santa Catarina\n");
    printf("[26] - Rio Grande do Sul\n");

    scanf("%d", &codigo);

    switch (codigo)
    {
        case 1:
            printf("O estado pertence a Regiao Norte: Amazonas\n");
            break;
        case 2:
            printf("O estado pertence a Regiao Norte: Para\n");
            break;
        case 3:
            printf("O estado pertence a Regiao Norte: Roraima\n");
            break;
        case 4:
            printf("O estado pertence a Regiao Norte: Amapa\n");
            break;
        case 5:
            printf("O estado pertence a Regiao Norte: Rondonia\n");
            break;
        case 6:
            printf("O estado pertence a Regiao Norte: Acre\n");
            break;
        case 7:
            printf("O estado pertence a Regiao Norte: Tocantins\n");
            break;
        case 8:
            printf("O estado pertence a Regiao Nordeste: Piaui\n");
            break;
        case 9:
            printf("O estado pertence a Regiao Nordeste: Maranhao\n");
            break;
        case 10:
            printf("O estado pertence a Regiao Nordeste: Pernambuco\n");
            break;
        case 11:
            printf("O estado pertence a Regiao Nordeste: Rio Grande do Norte\n");
            break;
        case 12:
            printf("O estado pertence a Regiao Nordeste: Paraiba\n");
            break;
        case 13:
            printf("O estado pertence a Regiao Nordeste: Ceara\n");
            break;
        case 14:
            printf("O estado pertence a Regiao Nordeste: Bahia\n");
            break;
        case 15:
            printf("O estado pertence a Regiao Nordeste: Alagoas\n");
            break;
        case 16:
            printf("O estado pertence a Regiao Nordeste: Sergipe\n");
            break;
        case 17:
            printf("O estado pertence a Regiao Centro-Oeste: Mato Grosso\n");
            break;
        case 18:
            printf("O estado pertence a Regiao Centro-Oeste: Mato Grosso do Sul\n");
            break;
        case 19:
            printf("O estado pertence a Regiao Centro-Oeste: Goias\n");
            break;
        case 20:
            printf("O estado pertence a Regiao Sudeste: Minas Gerais\n");
            break;
        case 21:
            printf("O estado pertence a Regiao Sudeste: Sao Paulo\n");
            break;
        case 22:
            printf("O estado pertence a Regiao Sudeste: Rio de Janeiro\n");
            break;
        case 23:
            printf("O estado pertence a Regiao Sudeste: Espirito Santo\n");
            break;
        case 24:
            printf("O estado pertence a Regiao Sul: Parana\n");
            break;
        case 25:
            printf("O estado pertence a Regiao Sul: Santa Catarina\n");
            break;
        case 26:
            printf("O estado pertence a Regiao Sul: Rio Grande do Sul\n");
            break;
        default:
            printf("Codigo invalido!\n");
            break;
    }
    return 0;
}