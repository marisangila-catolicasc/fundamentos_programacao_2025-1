#include <stdio.h>

int main() {
char categoria;

     printf("[C] - CHURROS\n");
     printf("[S] - SANDUICHE DE PRESUNTO\n");
     printf("[L] - SUCO DE LARANJA\n");
     printf("Escolha uma opcao: ");
     scanf("%c", &categoria );
    switch(categoria)    
        {
            case 'C':
                printf("Voce escolheu CHURROS no valor de R$ 3,50");
                break;
        
        
            case 'S':
                printf("Voce escolheu SANDUICHE DE PRESUNTO no valor de R$ 8,00");
                break;
        

    
            case 'L':     
                printf("Voce escolheu SUCO DE LARANJA no valor de R$ 5,00");
                break;    
    }
                
        
    
    return 0;
}
