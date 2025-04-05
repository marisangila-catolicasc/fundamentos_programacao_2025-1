#include <stdio.h>
int printEstados();
int main() {
    int estado;
    printf("1 - Acre\n");
    printf("2 - Alagoas\n");
    printf("3 - Amapá\n");
    printf("4 - Amazonas\n");
    printf("5 - Bahia\n");
    printf("6 - Ceará\n");
    printf("7 - Espírito Santo\n");
    printf("8 - Goiás\n");
    printf("9 - Maranhão\n");
    printf("10 - Mato Grosso\n");
    printf("11 - Mato Grosso do Sul\n");
    printf("12 - Minas Gerais\n");
    printf("13 - Pará\n");
    printf("14 - Paraíba\n");
    printf("15 - Paraná\n");
    printf("16 - Pernambuco\n");
    printf("17 - Piauí\n");
    printf("18 - Rio de Janeiro\n");
    printf("19 - Rio Grande do Norte\n");
    printf("20 - Rio Grande do Sul\n");
    printf("21 - Rondônia\n");
    printf("22 - Roraima\n");
    printf("23 - Santa Catarina\n");
    printf("24 - São Paulo\n");
    printf("25 - Sergipe\n");
    printf("26 - Tocantins\n");
    printf("27 - Distrito Federal\n");
    printf("--===================--\n");
    printf("Digite o numero do estado: \n");
    scanf("%d", &estado);
    switch (estado){
        case 1:
            printf("Acre - Norte\n");
            break;
        case 2:
            printf("Alagoas - Nordeste\n");
            break;
        case 3:
            printf("Amapá - Norte\n");
            break;
        case 4:
            printf("Amazonas - Norte\n");
            break;
        case 5:
            printf("Bahia - Nordeste\n");
            break;
        case 6:
            printf("Ceará - Nordeste\n");
            break;
        case 7:
            printf("Espírito Santo - Sudeste\n");
            break;
        case 8:
            printf("Goiás - Centro-Oeste\n");
            break;
        case 9:
            printf("Maranhão - Nordeste\n");
            break;
        case 10:
            printf("Mato Grosso - Centro-Oeste\n");
            break;
        case 11:
            printf("Mato Grosso do Sul - Centro-Oeste\n");
            break;
        case 12:
            printf("Minas Gerais - Sudeste\n");
            break;
        case 13:
            printf("Pará - Norte\n");
            break;
        case 14:
            printf("Paraíba - Nordeste\n");
            break;
        case 15:
            printf("Paraná - Sul\n");
            break;
        case 16:
            printf("Pernambuco - Nordeste\n");
            break;
        case 17:
            printf("Piauí - Nordeste\n");
            break;
        case 18:
            printf("Rio de Janeiro - Sudeste\n");
            break;
        case 19:
            printf("Rio Grande do Norte - Nordeste\n");
            break;
        case 20:
            printf("Rio Grande do Sul - Sul\n");
            break;
        case 21:
            printf("Rondônia - Norte\n");
            break;
        case 22:
            printf("Roraima - Norte\n");
            break;
        case 23:
            printf("Santa Catarina - Sul\n");
            break;
        case 24:
            printf("São Paulo - Sudeste\n");
            break;
        case 25:
            printf("Sergipe - Nordeste\n");
            break;
        case 26:
            printf("Tocantins - Norte\n");
            break;
        case 27:
            printf("Distrito Federal - Centro-Oeste\n");
            break;
        default:
            printf("Estado invalido\n");
            break;
    }

    return 0; 
}
