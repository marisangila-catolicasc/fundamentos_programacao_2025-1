    #include <stdio.h>
    #include <stdlib.h> 
    #include <string.h> // usar string
    #include <windows.h> // para usar o sleep

    void telaVazia();
    void iniciarGame();
    void mostrarLateralTabuleiro(char tabuleiro[3][3]);
    void inicializadorTabuleiro(char tabuleiro[3][3]);
    int fazJogada(char tabuleiro[3][3], int linha, int coluna, char jogador);
    int mostrarVitoria(char tabuleiro[3][3]);
    int mostrarEmpate(char tabuleiro[3][3]);
    void jogar();

    int main() {
    int opcaoInicioGame;

    do {
        iniciarGame();
        scanf("%d", &opcaoInicioGame);
        switch (opcaoInicioGame){

        case 1:
        jogar();
        break;
        case 2:
        printf("\n\nSAINDO.... Ateh logo!!\n");
        break;
        default:
        printf("\nOPÇÃO INVÁLIDA PARCEIRO(A)!\n");
        printf("DIGITE QUALQUER TECLA PARA VOLTAR, POR FAVOR: ");
        getchar();
        getchar();
        break;
        }
    } while (opcaoInicioGame != 2) ;

    return 0;
    }
    void iniciarGame(){
    telaVazia();
    printf("  ____   ___    ____   ___       ___     ____      __ __    ___  _      __ __   ____  __ \n");
    printf(" |    | /   \\  /    | /   \\     |   \\   /    |    |  |  |  /  _]| |    |  |  | /    ||  |\n");
    printf(" |__  ||     ||   __||     |    |    \\ |  o  |    |  |  | /  [_ | |    |  |  ||  o  ||  |\n");
    printf(" __|  ||  O  ||  |  ||  O  |    |  D  ||     |    |  |  ||    _]| |___ |  _  ||     ||__|\n");
    printf("/  |  ||     ||  |_ ||     |    |     ||  _  |    |  :  ||   [_ |     ||  |  ||  _  | __ \n");
    printf("\\  `  ||     ||     ||     |    |     ||  |  |     \\   / |     ||     ||  |  ||  |  ||  |\n");
    printf(" \\____j \\___/ |___,_| \\___/     |_____||__|__|      \\_/  |_____||_____|\\__|__||__|__||__|\n\n\n");

    printf("1 - JOGAR\n");
    printf("2 - SAIR\n");
    printf("ESCOLHA UMA OPCAO: ");
    }

    void telaVazia() { system("cls || clear");}

    void jogar() {
    char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int linha, coluna, posicaoOk, vitoria = 0;
    char player = 'X';
    char opSair[5];

    while (!vitoria && !mostrarEmpate(tabuleiro)) {
        telaVazia();
        printf("----- JOGO DA VELHA -----\n");
        mostrarLateralTabuleiro(tabuleiro);

        printf("Vez do jogador %c!\n", player);
        printf("Digite '9' para SAIR!\n");
        printf("\nDigite linha e coluna (0,2): ");
        scanf("%d,%d", &linha, &coluna);
        getchar();

        if (linha == 9 || coluna == 9) {
            printf("\nDeseja sair? Digite 'SIM' para confirmar: ");
            scanf("%s", opSair);
            getchar();

            if (strcmp(opSair, "SIM") == 0 || strcmp(opSair, "sim") == 0) { 
                printf("\nSaindo em 2 segundos!...\n");
                Sleep(2000);
                return; 
            } else {
                printf("\nSaida cancelada! Pressione ENTER para voltar ao jogo...");
                getchar();
                continue;
            }
        }
        posicaoOk = fazJogada(tabuleiro, linha, coluna, player);

        if (!posicaoOk){
            printf("\nJOGADA INVALIDA! Este lugar jah estah ocupado ou fora do tabuleiro...\n");
            printf("\nPressione ENTER para continuar...");
            getchar();
            continue;
        }

        vitoria = mostrarVitoria(tabuleiro);
        
        if (!vitoria) {
        if (player == 'X')
            player = 'O';
        else
            player = 'X';
        }
    }
    telaVazia();
    mostrarLateralTabuleiro(tabuleiro);

    if (vitoria) {
        printf("\nJogador %c venceu o jogo!!!\n", vitoria);
    } else {
    
   printf("\n");
printf(" _______ .___  ___. .______      ___   .___________. _______  __      _______   _______  __    __     ____    ____  _______  __       __    __       ___       __  \n");
printf("|   ____||   \\/   | |   _  \\    /   \\  |           ||   ____||  |    |       \\ |   ____||  |  |  |    \\   \\  /   / |   ____||  |     |  |  |  |     /   \\     |  | \n");
printf("|  |__   |  \\  /  | |  |_)  |  /  ^  \\ `---|  |----`|  |__   |  |    |  .--.  ||  |__   |  |  |  |     \\   \\/   /  |  |__   |  |     |  |__|  |    /  ^  \\    |  | \n");
printf("|   __|  |  |\\/|  | |   ___/  /  /_\\  \\    |  |     |   __|  |  |    |  |  |  ||   __|  |  |  |  |      \\      /   |   __|  |  |     |   __   |   /  /_\\  \\   |  | \n");
printf("|  |____ |  |  |  | |  |     /  _____  \\   |  |     |  |____ |__|    |  '--'  ||  |____ |  `--'  |       \\    /    |  |____ |  `----.|  |  |  |  /  _____  \\  |__| \n");
printf("|_______||__|  |__| | _|    /__/     \\__\\  |__|     |_______|(__)    |_______/ |_______| \\______/         \\__/     |_______||_______||__|  |__| /__/     \\__\\ (__) \n");
printf("\n");
}
    printf("\nPressione ENTER para voltar ao menu...");
    getchar();
}
    void mostrarLateralTabuleiro(char tabuleiro[3][3]){
    printf("\n    0   1   2 \n");
    for (int i = 0; i < 3; i++) {
        printf(" %d  %c | %c | %c \n", i, tabuleiro[i][0], tabuleiro[i][1],
            tabuleiro[i][2]);
        if (i < 2) {
        printf("   -----------\n");
        }
    }
    printf("\n");
    }
    void inicializadorTabuleiro(char tabuleiro[3][3]){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        tabuleiro[i][j] = ' ';
        }
    }
    }
    int fazJogada(char tabuleiro[3][3], int linha, int coluna, char jogador) {

    if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {

        return 0;
    }
    if (tabuleiro[linha][coluna] != ' ')
        return 0;

    tabuleiro[linha][coluna] = jogador;
    return 1;
    }
    int mostrarVitoria(char tabuleiro[3][3]){
        // linhas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] &&
            tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ') {
        return tabuleiro[i][0];
        }
    }   // colunas
    for (int j = 0; j < 3; j++) {
        if (tabuleiro[0][j] == tabuleiro[1][j] &&
            tabuleiro[1][j] == tabuleiro[2][j] && tabuleiro[0][j] != ' ') {
        return tabuleiro[0][j];
        }
    }   //Diagonall
    if (tabuleiro[0][0] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ') {
        return tabuleiro[0][0];
    }
    if (tabuleiro[0][2] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ') {
        return tabuleiro[0][2];
    }

    return 0;
    }

    int mostrarEmpate(char tabuleiro[3][3]){ 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        if (tabuleiro[i][j] == ' ') {
            return 0;
        }
        }
    }
    return 1;
    }