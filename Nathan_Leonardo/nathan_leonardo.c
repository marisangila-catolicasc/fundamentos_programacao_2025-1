#include <stdio.h>   
#include <string.h>  
#include <stdlib.h>  

#define SIZE 3   

void paginaInicial();
void inicializarTabuleiro(char tabuleiro[SIZE][SIZE]);
void exibirTabuleiro(char tabuleiro[SIZE][SIZE]);
int verificarVitoria(char tabuleiro[SIZE][SIZE], char jogador);
int verificarEmpate(char tabuleiro[SIZE][SIZE]);
int fazerJogada(char tabuleiro[SIZE][SIZE], char jogador);

int main() {
    char tabuleiro[SIZE][SIZE];     
    char jogadorAtual = 'X';        
    int fimDoJogo = 0;              

    paginaInicial();                

    inicializarTabuleiro(tabuleiro); 

    // Loop principal do jogo
    while (!fimDoJogo) {
        exibirTabuleiro(tabuleiro);  

        // Solicita e realiza a jogada do jogador atual
        if (fazerJogada(tabuleiro, jogadorAtual)) {
            // Verifica se houve vitória após a jogada
            if (verificarVitoria(tabuleiro, jogadorAtual)) {
                exibirTabuleiro(tabuleiro);
                printf("Jogador %c venceu!\n", jogadorAtual);
                break; 
            }
            // Verifica se houve empate
            if (verificarEmpate(tabuleiro)) {
                exibirTabuleiro(tabuleiro);
                printf("O jogo terminou em empate!\n");
                break; 
            }
            // Troca o jogador atual: se era 'X', vira 'O', e vice-versa
            jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
        }
    }

    return 0;
}

void paginaInicial() {
    printf("=====================================\n");
    printf("         JOGO DA VELHA EM C\n");
    printf("=====================================\n");
    printf("Regras:\n");
    printf("- Dois jogadores: 'X' e 'O'\n");
    printf("- Jogadas no formato linha,coluna\n");
    printf("- Digite 'sair' para encerrar o jogo a qualquer momento\n");
    printf("- Vence quem alinhar 3 marcas em linha, coluna ou diagonal\n");
    printf("=====================================\n");
    printf("Pressione ENTER para iniciar...");
    getchar(); 
}

// Inicializa o tabuleiro preenchendo todos os espaços com ' '
void inicializarTabuleiro(char tabuleiro[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            tabuleiro[i][j] = ' ';
}

// Exibe o tabuleiro com as coordenadas das células
void exibirTabuleiro(char tabuleiro[SIZE][SIZE]) {
    printf("\n");
    printf("  0   1   2\n"); 
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", i); 
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", tabuleiro[i][j]); // Imprime o valor da célula
            if (j < SIZE - 1)
                printf("|"); 
        }
        printf("\n");
        if (i < SIZE - 1)
            printf("  -----------\n"); 
    }
    printf("\n");
}

// Verifica se o jogador atual venceu o jogo
int verificarVitoria(char tabuleiro[SIZE][SIZE], char jogador) {
    // Verifica linhas e colunas
    for (int i = 0; i < SIZE; i++) {
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)) {
            return 1; // Vitória encontrada
        }
    }
    // Verifica diagonais
    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) {
        return 1; 
    }

    return 0; 
}

// Verifica se todas as casas estão preenchidas sem vitória => empate
int verificarEmpate(char tabuleiro[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (tabuleiro[i][j] == ' ')
                return 0; 
    return 1; 
}

// Recebe e processa a jogada do jogador atual
int fazerJogada(char tabuleiro[SIZE][SIZE], char jogador) {
    char input[10];     
    int linha, coluna;

    printf("Jogador %c, digite sua jogada no formato linha,coluna ou 'sair': ", jogador);
    fgets(input, sizeof(input), stdin);                
    input[strcspn(input, "\n")] = '\0';               

    // Permite sair do jogo digitando "sair"
    if (strcmp(input, "sair") == 0) {
        printf("Jogo encerrado pelo jogador.\n");
        exit(0);
    }

    // Lê os valores da linha e coluna usando sscanf
    if (sscanf(input, "%d,%d", &linha, &coluna) != 2) {
        printf("Formato inválido. Use linha,coluna.\n");
        return 0; 
    }

    // Verifica se a posição está dentro dos limites do tabuleiro
    if (linha < 0 || linha >= SIZE || coluna < 0 || coluna >= SIZE) {
        printf("Posição fora do tabuleiro.\n");
        return 0; 
    }

    // Verifica se a posição já está ocupada
    if (tabuleiro[linha][coluna] != ' ') {
        printf("Posição já ocupada.\n");
        return 0; 
    }

    // Marca a jogada do jogador no tabuleiro
    tabuleiro[linha][coluna] = jogador;
    return 1; 
}
