#include <stdio.h>
int main() {
    int codigo;
    printf("(1) - Acre\n");
    printf("(2) - Amapa\n");
    printf("(3) - Amazonas\n");
    printf("(4) - Para\n");
    printf("(5) - Rondonia\n");
    printf("(6) - Roraima\n");
    printf("(7) - Tocantins\n");
    printf("(8) - Alagoas\n");
    printf("(9) - Bahia\n");
    printf("(10) - Ceara\n");
    printf("(11) - Maranhao\n");
    printf("(12) - Paraiba\n");
    printf("(13) - Pernambuco\n");
    printf("(14) - Piaui\n");
    printf("(15) - Rio Grande do Norte\n");
    printf("(16) - Sergipe\n");
    printf("(17) - Goias\n");
    printf("(18) - Mato Grosso\n");
    printf("(19) - Mato Grosso do Sul\n");
    printf("(20) - Distrito Federal\n");
    printf("(21) - Espirito Santo\n");
    printf("(22) - Minas Gerais\n");
    printf("(23) - Rio de Janeiro\n");
    printf("(24) - Sao Paulo\n");
    printf("(25) - Parana\n");
    printf("(26) - Santa Catarina\n");
    printf("(27) - Rio Grande do Sul\n");
    
    printf("Digite o codigo do estado: ");
    scanf("%d", &codigo);
    switch (codigo){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            printf("Esse estado eh da Regiao Norte");
            break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
            printf("Esse estado eh da Regiao Nordeste");
            break;
        case 17:
        case 18:
        case 19:
        case 20:
            printf("Esse estado eh da Regiao Centro-Oeste");
            break;
        case 21:
        case 22:
        case 23:
        case 24:
            printf("Esse estado eh da Regiao Sudeste");
            break;
        case 25:
        case 26:
        case 27:
            printf("Esse estado eh da Regiao Sul");
            break;
        
    }

    return 0;
}