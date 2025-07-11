#include <stdio.h>
#include <string.h>

char tabuleiro[3][3];

// Define o tabuleiro
void inicia_tabuleiro() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';
}

// Função da parte visual do tabuleiro
void mostra_tabuleiro() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Função que define a vitória em ordem de: linhas, colunas, diagonal esquerda p/ direita, diagonal direita p/ esquerda
char verifica_vencedor() {
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ')
            return tabuleiro[i][0];
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ')
            return tabuleiro[0][i];
    }
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ')
        return tabuleiro[0][0];
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ')
        return tabuleiro[0][2];
    return ' ';
}

// Função que define empate quando nenhuma condição for executada = velha
int empate() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (tabuleiro[i][j] == ' ')
                return 0;
    return 1;
}

// Cria função jogar com void por conta do char (responsável por retornar a mensagem de erro ao se colocar uma letra como coordenada)
void jogar() {
    int linha, coluna;
    char jogador_atual = 'X';
    char entrada[100];

    while (1) {
        mostra_tabuleiro();

        // Dentro da função jogar, mostra o tabuleiro ao jogador e pede o comando do jogador da vez 
        printf("Jogador %c, escolha linha e coluna (1-3 1-3): ", jogador_atual);

        // A função fgets lê uma entrada e armazena em uma variável (entrada)
        // sizeof define o tamanho do buffer
        // stdin é a fonte de entrada
        // == NULL verifica se a função retorna erro
        if (fgets(entrada, sizeof(entrada), stdin) == NULL) {
            printf("Erro! Tente novamente.\n");
            continue;
        }

        // strcspn remove o \n que o fgets pode ter englobado (evita erro)
        entrada[strcspn(entrada, "\n")] = 0;

        // Usando sscanf, extrai dois números da entrada. Caso contrário, retorna erro.
        if (sscanf(entrada, "%d %d", &linha, &coluna) != 2) {
            printf("Inválido! Digite dois números separados por espaço.\n");
            continue;
        }

        // linha--; coluna--; transforma entrada humana (1-3) em índice de array (0-2)
        linha--;
        coluna--;

        // Valida se os números estão dentro dos limites e se a posição está vazia
        if (linha < 0 || linha >= 3 || coluna < 0 || coluna >= 3 || tabuleiro[linha][coluna] != ' ') {
            printf("Jogada inválida! Tente novamente.\n");
            continue;
        }

        // Marca a jogada no tabuleiro
        tabuleiro[linha][coluna] = jogador_atual;

        // Verifica se houve vitória
        char vencedor = verifica_vencedor();
        if (vencedor == jogador_atual) {
            mostra_tabuleiro();
            printf("Parabéns! Jogador %c venceu!\n", jogador_atual);
            break;
        } 
        // Verifica se houve empate
        else if (empate()) {
            mostra_tabuleiro();
            printf("Velha!\n");
            break;
        }

        // Troca de jogador

if (jogador_atual == 'X') {
    jogador_atual = 'O';
} else {
    jogador_atual = 'X';
}

    }
}

// Define jogador inicial com “X” e segundo jogador com “O” e inicia o tabuleiro fazendo parte da função main.

int main() {
    printf("=== JOGO DA VELHA ===\n");
    inicia_tabuleiro();
    jogar();


return 0;
}
