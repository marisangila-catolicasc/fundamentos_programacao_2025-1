#include <stdio.h>
int main(){
 
int estados;
 
 
    printf ("\n escolha um estado pelo seu numero representado:");
 
    
 
        printf(" [1] - rio grande do sul\n");
        printf(" [2] - santa catarina\n");
        printf(" [3] - parana\n");
        printf(" [4] - acre\n");
        printf(" [5] - alagoas\n");
        printf(" [6] - amapá \n");
        printf(" [7] - amazonas\n");
        printf(" [8] - bahia \n");
        printf(" [9] - ceará\n");
        printf(" [10] - espírito santo \n");
        printf(" [11] - goiás \n");
        printf(" [12] - maranhão\n");
        printf(" [13] - mato grosso\n");
        printf(" [14] - mato grosso do sul\n"); 
        printf(" [15] - minas gerais\n");
        printf(" [16] - pará\n");
        printf(" [17] - paraíba\n");
        printf(" [18] - pernanbuco\n");
        printf(" [19] - piauí\n");
        printf(" [20] - rio de janeiro\n");
        printf(" [21] - rio grande do norte\n");
        printf(" [22] - rondônia \n");
        printf(" [23] - roraima\n");
        printf(" [24] - são paulo\n");
        printf(" [25] - sergipe\n");
        printf(" [26] - tocantins\n");
 
    scanf ("%i" , &estados);
    switch (estados)
    {
        case 1:
        case 2:
        case 3:
            printf ("região sul");
     break;
        case 24: 
        case 20:
        case 15: 
        case 10:
            printf ("região sudeste");
     break;
        case 13:  
        case 14:  
        case 11:
            printf ("região centro-oeste");
    break;
        case 7:
        case 16:  
        case 23:  
        case 6:  
        case 22:  
        case 4:
        case 26:
            printf ("região norte");
    break;    
        case 12:  
        case 19:  
        case 8:  
        case 25:  
        case 5:  
        case 9:
        case 17:  
        case 18: 
        case 21: 
            printf ("região nordeste");
        default:
         printf ("opção invalida");
        break;
    }  
        return 0;
    }