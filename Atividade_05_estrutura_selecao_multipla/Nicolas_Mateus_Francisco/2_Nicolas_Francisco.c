/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int choice;
    
    char states[26][20] =  {
        "Acre",
        "Alagoas",
        "Amazonas",
        "Amapá",
        "Bahia",
        "Ceará",
        "Espírito Santo",
        "Goiás",
        "Maranhão",
        "Mato Grosso",
        "Mato Grosso do Sul",
        "Minas Gerais",
        "Pará",
        "Paraíba",
        "Paraná",
        "Pernambuco",
        "Piauí",
        "Rio de Janeiro",
        "Rio Grande do Norte",
        "Rio Grande do Sul",
        "Rondônia",
        "Roraima",
        "Santa Catarina",
        "São Paulo",
        "Sergipe",
        "Tocantins"
    };
    
    for (int i = 0; i < 26; i++) {
        
        printf("%d - %s", i+1, states[i]);
        
        printf("\n");
    }
    
    printf("Digite o numero do estado desejado: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
        case 3:
        case 4:
        case 13:
        case 21:
        case 22:
        case 26:
            printf("%s está na regiao Norte do Brasil.\n", states[choice - 1]);
            break;
        case 2:
        case 5:
        case 6:
        case 9:
        case 14:
        case 16:
        case 17:
        case 19:
        case 25:
            printf("%s está na regiao Nordeste do Brasil.\n", states[choice - 1]);
            break;
        case 7:
        case 12:
        case 18:
        case 24:
            printf("%s está na regiao Sudeste do Brasil.\n", states[choice - 1]);
            break;
        case 8:
        case 10:
        case 11:
            printf("%s está na regiao Centro-Oeste do Brasil.\n", states[choice - 1]);
            break;
        case 15:
        case 23:
        case 20:
            printf("%s está na regiao Sul do Brasil.\n", states[choice - 1]);
            break;
        default:
            printf("Valor inválido! Existem 26 estados.\n");
            break;
    }

    return 0;
}