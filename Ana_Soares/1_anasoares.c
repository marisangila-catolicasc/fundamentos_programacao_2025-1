#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

#define LINHA 3
#define COLUNA 3

// me inspirei em dois videos do youtube e pesquisei no reddit algumas coisas
//https://youtu.be/mhlar-crjUE?si=uUsY2zWI_sYjdtBV
//https://youtu.be/WPVrj4CyCvM?si=bMc6_G9XzzmcEGP7

void inicializarTabuleiro(char matriz[LINHA][COLUNA]) {
    for(int i = 0; i < LINHA; i++) {
        for(int j = 0; j < COLUNA; j++) {
            matriz[i][j] = ' ';
        }
    }
}

void exibirTabuleiro(char matriz[LINHA][COLUNA]) {
    printf("\n     1   2   3\n");
    printf("   -----------\n");
    for(int i = 0; i < LINHA; i++) {
        printf("%d |", i+1);
        for(int j = 0; j < COLUNA; j++) {
            printf(" %c |", matriz[i][j]);
        }
        printf("\n");
        printf("  |---|---|---|\n");
    }
}

int validarJogada(char matriz[LINHA][COLUNA], int linha, int coluna) {
    if(linha < 0 || linha >= LINHA || coluna < 0 || coluna >= COLUNA) {
        return 0;
    }
    if(matriz[linha][coluna] == ' ') {
        return 1;
    }
    return 0;
}

void fazerJogada(char matriz[LINHA][COLUNA], int linha, int coluna, char simbolo) {
    matriz[linha][coluna] = simbolo;
}

int verificarVitoria(char matriz[LINHA][COLUNA], char simbolo) {
    for(int i = 0; i < LINHA; i++) {
        if(matriz[i][0] == simbolo && matriz[i][1] == simbolo && matriz[i][2] == simbolo) return 1;
    }
    for(int j = 0; j < COLUNA; j++) {
        if(matriz[0][j] == simbolo && matriz[1][j] == simbolo && matriz[2][j] == simbolo) return 1;
    }
    if(matriz[0][0] == simbolo && matriz[1][1] == simbolo && matriz[2][2] == simbolo) return 1;
    if(matriz[0][2] == simbolo && matriz[1][1] == simbolo && matriz[2][0] == simbolo) return 1;

    return 0;
}

int verificarEmpate(char matriz[LINHA][COLUNA]) {
    for(int i = 0; i < LINHA; i++) {
        for(int j = 0; j < COLUNA; j++) {
            if(matriz[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    char matriz[LINHA][COLUNA]; 
    char entrada[10]; 
    int linha, coluna;
    int jogador; 
    char simboloAtual; 
    
    char resposta[10]; 
    char mensagem[100] = ""; 

    printf("JOGO DA VELHA\n");
    printf("Jogador 1: X\n");
    printf("Jogador 2: O\n");
    printf("Digite a jogada no formato linha,coluna (exemplo: 2,3). Digite 'sair' para encerrar.\n");
    printf("Pressione Enter para iniciar...\n");
    getchar(); 
    

    while(1) {
        inicializarTabuleiro(matriz);
        jogador = 1;
        

        while(1) {
            system("cls || clear");
        

            printf("JOGO DA VELHA\n");
            printf("Jogador 1: X\n");
            printf("Jogador 2: O\n");
            printf("Digite a jogada no formato linha,coluna (exemplo: 2,3). Digite 'sair' para encerrar.\n");

            if(strlen(mensagem) > 0) {
                printf("\n%s\n\n", mensagem);
                mensagem[0] = '\0'; 
               
            }

            exibirTabuleiro(matriz);

            simboloAtual = (jogador == 1) ? 'X' : 'O';

            printf("Jogador %d (%c), sua jogada: ", jogador, simboloAtual);
            fgets(entrada, sizeof(entrada), stdin);
            entrada[strcspn(entrada, "\n")] = 0; 
            

            if(strcmp(entrada, "sair") == 0 || strcmp(entrada, "SAIR") == 0) {
                printf("Jogo encerrado pelo jogador.\n");
                return 0; 
            }

            if(sscanf(entrada, "%d,%d", &linha, &coluna) != 2) {
                strcpy(mensagem, "Entrada inválida! Use o formato linha,coluna.");
                continue; 
            }

            linha--;
            coluna--;

            if(!validarJogada(matriz, linha, coluna)) {
                strcpy(mensagem, "Jogada inválida! Tente novamente.");
                continue; 
            }

            fazerJogada(matriz, linha, coluna, simboloAtual);

            if(verificarVitoria(matriz, simboloAtual)) {
                system("cls || clear");
                printf("JOGO DA VELHA\n");
                exibirTabuleiro(matriz);
                printf("Parabéns! Jogador %d (%c) venceu!\n", jogador, simboloAtual);
                
                break; 
            }

            if(verificarEmpate(matriz)) {
                system("cls || clear");
                printf("JOGO DA VELHA\n");
                exibirTabuleiro(matriz);
                printf("Deu velha!\n");
                break; 
            }

            jogador = (jogador == 1) ? 2 : 1;
        }

        printf("Gostaria de jogar novamente? (s/n): ");
        fgets(resposta, sizeof(resposta), stdin); 
        resposta[strcspn(resposta, "\n")] = 0; 
        if(strcmp(resposta, "n") == 0 || strcmp(resposta, "N") == 0) {
            printf("Obrigada por jogar!\n");
            break; 
        }
    }

    return 0;
}
