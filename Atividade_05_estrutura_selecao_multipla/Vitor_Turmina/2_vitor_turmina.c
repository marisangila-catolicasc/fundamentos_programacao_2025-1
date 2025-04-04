#include <stdio.h>

int main(){

    int estado;

    printf("Informe seu estado: [1] = Roraima\n [2] Amapa\n [3] Amazonas\n [4] Para\n [5] Tocantins\n [6] Acre\n [7] Rondonia\n [8] Maranhao\n [9] Piaui\n [10] Ceara\n [11] Rio Grande do Norte\n [12] Paraiba\n [13] Pernambuco\n [14] Alagoas\n [15] Sergipe\n [16] Bahia\n [17] Espirito Santo\n [18] Rio de Janeiro\n [19] Sao Paulo\n [20] Minas Gerais\n [21] Mato Grosso\n [22] Mato Grosso do Sul\n [23] Goias\n [24] Distrito Federal\n [25] Parana\n [26] Santa Catarina\n [27] Rio Grande do Sul\n");
    scanf("%d", &estado);

    switch(estado){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            printf("Voce esta no norte do brasil");
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
            printf("Voce esta no nordesde do brasil");
        break;

        case 17:
        case 18:
        case 19:
        case 20:
            printf("Voce esta no sudeste do brasil");
        break;

        case 21:
        case 22:
        case 23:
        case 24:
            printf("Voce esta no centro-oeste do brasil");
        break;

        case 25:
        case 26:
        case 27:
            printf("Voce esta no sul do brasil");
        break;

    default: 
        printf("Voce nao esta em solo brasileiro");
        
    }
    return 0;
}