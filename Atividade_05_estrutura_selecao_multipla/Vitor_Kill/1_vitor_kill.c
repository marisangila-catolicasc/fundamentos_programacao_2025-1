#include <stdio.h>

int main (){
    int código;
    printf("1254 - sanduiche de presunto");
    printf("5698 - churros");
    printf("7114 - suco de laranja que parece de limão mas tem gosto de tamarindo");
    printf("digite o código do produto:");
    scanf("%d", &código);
   
    switch (código) { 
        case 1254: 
        printf ("sanduiche de presunto - 8,00");
            break;
       
        case 5698:
        printf ("churros - 3,50");
            break;
       
        case 7114:
        printf ("suco de laranja que parece de limão mas tem gosto de tamarindo - 5,00");
            break;
    }

    return 0;
}