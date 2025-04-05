#include <stdio.h>

int main() {
    int estado;

    printf("Escolha um estado pelo número (1-26):\n");
    printf("1. Acre\n2. Alagoas\n3. Amazonas\n4. Bahia\n5. Ceará\n6. Espírito Santo\n");
    printf("7. Goiás\n8. Maranhão\n9. Mato Grosso\n10. Mato Grosso do Sul\n11. Minas Gerais\n");
    printf("12. Pará\n13. Paraíba\n14. Paraná\n15. Pernambuco\n16. Piauí\n17. Rio de Janeiro\n");
    printf("18. Rio Grande do Norte\n19. Rio Grande do Sul\n20. Rondônia\n21. Roraima\n22. Santa Catarina\n");
    printf("23. São Paulo\n24. Sergipe\n25. Tocantins\n26. Distrito Federal\n");

    printf("Digite o número do estado: ");
    scanf("%d", &estado);

    switch (estado) {
        case 1: case 3: case 12: case 20: case 21: case 25:
            printf("Região: Norte\n");
            break;
        case 2: case 4: case 5: case 8: case 13: case 15: case 16: case 18: case 24:
            printf("Região: Nordeste\n");
            break;
        case 7: case 9: case 10: case 11: case 26:
            printf("Região: Centro-Oeste\n");
            break;
        case 6: case 11: case 17: case 23:
            printf("Região: Sudeste\n");
            break;
        case 14: case 19: case 22:
            printf("Região: Sul\n");
            break;
        default:
            printf("Número inválido.\n");
    }
} return 0;







  
  

