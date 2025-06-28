#include <stdio.h> // Para usar a função printf(), scanf()
#include <string.h> // Para usar a função strcpy()
#include <ctype.h> // Para usar a função toupper()
#include <unistd.h> // Para usar a função sleep()
#include <stdbool.h> // Para usar o tipo bool
#include <stdlib.h> // Para usar exit()

#define MAX_JOGADORES 10
#define TAM_NOME 25

char jogoDaVelha[3][3];
bool jogoEncerrado = false;
int jogador1, jogador2;

char jogadores[MAX_JOGADORES][TAM_NOME];
int numJogadores = 0;
int pontuacao[MAX_JOGADORES] = {0}; 

void limparTela() {
    printf("\033[2J\033[H");
}

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int exibirMenu() {
    int opc = 0;
        printf("\n--------------------------------------------------------------------- ");
        printf("\n           ░░░░░░░░░░██╗░█████╗░░██████╗░░█████╗░░░░░░");
        printf("\n           ░░░░░░░░░░██║██╔══██╗██╔════╝░██╔══██╗░░░░░");
        printf("\n           ░░░░░░░░░░██║██║░░██║██║░░██╗░██║░░██║░░░░░");
        printf("\n           ░░░░░██╗░░██║██║░░██║██║░░╚██╗██║░░██║░░░░░");
        printf("\n           ░░░░░╚█████╔╝╚█████╔╝╚██████╔╝╚█████╔╝░░░░░");
        printf("\n           ░░░░░░╚════╝░░╚════╝░░╚═════╝░░╚════╝░░░░░░");
        printf("\n░░░░░██████╗░░█████╗░░░░░░██╗░░░██╗███████╗██╗░░░░░██╗░░██╗░█████╗░░░░░░");
        printf("\n░░░░░██╔══██╗██╔══██╗░░░░░██║░░░██║██╔════╝██║░░░░░██║░░██║██╔══██╗░░░░░");
        printf("\n░░░░░██║░░██║███████║░░░░░╚██╗░██╔╝█████╗░░██║░░░░░███████║███████║░░░░░");
        printf("\n░░░░░██║░░██║██╔══██║░░░░░░╚████╔╝░██╔══╝░░██║░░░░░██╔══██║██╔══██║░░░░░");
        printf("\n░░░░░██████╔╝██║░░██║░░░░░░░╚██╔╝░░███████╗███████╗██║░░██║██║░░██║░░░░░");
        printf("\n░░░░░╚═════╝░╚═╝░░╚═╝░░░░░░░░╚═╝░░░╚══════╝╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝░░░░░");
        printf("\n------------------------------------------------------------------------ ");
        printf("\n                    BEM VINDO AO JOGO DA VELHA!  ");
        printf("\n                 ------------------------------- ");
        printf("\n                      INSIRA UMA DAS OPÇÕES     ");
        printf("\n                             DO MENU             ");
        printf("\n                 -------------------------------");
        printf("\n                     1- JOGAR");
        printf("\n                     2- RANKING");
        printf("\n                     3- GERENCIAMENTO DE JOGADORES");
        printf("\n                     4- REGRAS DO JOGO");
        printf("\n                     5- SAIR");
        printf("\n                  -------------------------------\n");
        printf("\n                    -> ");
        scanf("%d", &opc);
        limparBufferEntrada();
        return opc;
    }

void inicializarJogoDaVelha() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            jogoDaVelha[i][j] = ' ';
        }
    }
    jogoEncerrado = false;
}

void tabelaJogo() {
    printf("\n  +---+---+---+");
    for (int i = 0; i < 3; i++) {
        printf("\n  | %c | %c | %c |", jogoDaVelha[i][0], jogoDaVelha[i][1], jogoDaVelha[i][2]);
        printf("\n  +---+---+---+");
    }
}

int verificarJogo() {
    if (verificarVencedor() != 0) {
        return 0;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (jogoDaVelha[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

int verificarVencedor() {
    // LINHAS
    for (int i = 0; i < 3; i++) {
        if (jogoDaVelha[i][0] == jogoDaVelha[i][1] && jogoDaVelha[i][1] == jogoDaVelha[i][2] && jogoDaVelha[i][0] != ' ') {
            return jogoDaVelha[i][0] == 'X' ? 1 : 2;
        }
    }

    // COLUNAS
    for (int i = 0; i < 3; i++) {
        if (jogoDaVelha[0][i] == jogoDaVelha[1][i] && jogoDaVelha[1][i] == jogoDaVelha[2][i] && jogoDaVelha[0][i] != ' ') {
            return jogoDaVelha[0][i] == 'X' ? 1 : 2;
        }
    }

    // DIAGONAIS
    if (jogoDaVelha[0][0] == jogoDaVelha[1][1] && jogoDaVelha[1][1] == jogoDaVelha[2][2] && jogoDaVelha[0][0] != ' ') {
        return jogoDaVelha[0][0] == 'X' ? 1 : 2;
    }

    if (jogoDaVelha[0][2] == jogoDaVelha[1][1] && jogoDaVelha[1][1] == jogoDaVelha[2][0] && jogoDaVelha[0][2] != ' ') {
        return jogoDaVelha[0][2] == 'X' ? 1 : 2;
    }

    return 0;
}

void logicaJogo(int jogadorAtualIndice, char simbolo) {
    int linha, coluna;
    printf("\n JOGADOR %d: %s (%c), É SUA VEZ DE JOGAR! ", jogadorAtualIndice + 1, jogadores[jogadorAtualIndice], simbolo);

    while (true) {
        printf("\n INSIRA A LINHA E A COLUNA ONDE DESEJA JOGAR (1-3): ");
        printf("\n LINHA: ");
        while (scanf("%d", &linha) != 1 || linha < 1 || linha > 3) {
            printf("\nLinha inválida! Digite novamente (1-3): ");
            limparBufferEntrada();
        }
        printf("\n COLUNA: ");
        while (scanf("%d", &coluna) != 1 || coluna < 1 || coluna > 3) {
            printf("\nColuna inválida! Digite novamente (1-3): ");
            limparBufferEntrada();
        }
        limparBufferEntrada();

        linha--;
        coluna--;

        if (jogoDaVelha[linha][coluna] == ' ') {
            jogoDaVelha[linha][coluna] = simbolo;
            break;
        } else {
            printf("\n POSIÇÃO JÁ OCUPADA! TENTE NOVAMENTE. ");
        }
    }
}

void ordenarRanking() {
    char tempNome[TAM_NOME];
    int tempPontuacao;

    for (int i = 0; i < numJogadores - 1; i++) {
        for (int j = 0; j < numJogadores - i - 1; j++) {
            if (pontuacao[j] < pontuacao[j+1]) {
                tempPontuacao = pontuacao[j];
                pontuacao[j] = pontuacao[j+1];
                pontuacao[j+1] = tempPontuacao;

                strcpy(tempNome, jogadores[j]);
                strcpy(jogadores[j], jogadores[j+1]);
                strcpy(jogadores[j+1], tempNome);
            }
        }
    }
}

int opcao1() {
    printf("\n OPÇÃO 1 SELECIONADA - JOGAR! ");
    printf("\n------------------------------");

    if (numJogadores < 2) {
        printf("\n------------------------------------");
        printf("\n     O NÚMERO MÍNIMO DE JOGADORES    ");
        printf("\n            NÃO FOI ATINGIDO!        ");
        printf("\n  CADASTRE PELO MENOS DOIS JOGADORES ");
        printf("\n            PARA PODER JOGAR!        ");
        printf("\n------------------------------------");
        printf("\n------------------------------------");
        sleep(4);
        limparTela();
        return 0;
    }

    printf("\n SELECIONE O 1º JOGADOR (X):");
    for (int i = 0; i < numJogadores; i++) {
        printf("\n%d - %s", i + 1, jogadores[i]);
    }
    printf("\n-> ");
    while (scanf("%d", &jogador1) != 1 || jogador1 < 1 || jogador1 > numJogadores) {
        printf("\nSeleção inválida! Digite novamente: ");
        limparBufferEntrada();
    }
    limparBufferEntrada();

    printf("\n SELECIONE O 2º JOGADOR (O):");
    for (int i = 0; i < numJogadores; i++) {
        if (i != jogador1 - 1) {
            printf("\n%d - %s", i + 1, jogadores[i]);
        }
    }
    printf("\n-> ");
    while (scanf("%d", &jogador2) != 1 || jogador2 < 1 || jogador2 > numJogadores || jogador2 == jogador1) {
        printf("\nSeleção inválida! Digite novamente: ");
        limparBufferEntrada();
    }
    limparBufferEntrada();

    jogador1--;
    jogador2--;

    limparTela();
    printf("\n-------------------");
    printf("\n  %s (X) VS %s (O)", jogadores[jogador1], jogadores[jogador2]);
    printf("\n-------------------");

    inicializarJogoDaVelha();
    tabelaJogo();
    printf("\n VAMOS COMEÇAR! ");

    int turno = 0;
    int resultado = 0;

    while (true) {
        limparTela();
        printf("\n-------------------");
        printf("\n  %s (X) VS %s (O)", jogadores[jogador1], jogadores[jogador2]);
        printf("\n-------------------");
        tabelaJogo();

        if (turno % 2 == 0) {
            logicaJogo(jogador1, 'X');
        } else {
            logicaJogo(jogador2, 'O');
        }

        resultado = verificarVencedor();
        if (resultado != 0) {
            limparTela();
            printf("\n-------------------");
            printf("\n  FIM DE JOGO! ");
            tabelaJogo();
            if (resultado == 1) {
                printf("\n  %s VENCEU! ", jogadores[jogador1]);
                pontuacao[jogador1]++;
            } else {
                printf("\n  %s VENCEU! ", jogadores[jogador2]);
                pontuacao[jogador2]++;
            }
            printf("\n-------------------");
            break;
        }

        if (verificarJogo() == 1) {
            limparTela();
            printf("\n-------------------");
            printf("\n  FIM DE JOGO! ");
            tabelaJogo();
            printf("\n  EMPATE! ");
            printf("\n-------------------");
            break;
        }

        turno++;
    }

    printf("\nPressione Enter para continuar...");
    getchar();
    limparTela();
    return 0;
}

int opcao2() {
    printf("\n OPÇÃO 2 SELECIONADA - RANKING! ");
    printf("\n-------------------------------");

    if (numJogadores == 0) {
        printf("\nNenhum jogador cadastrado ainda.\n");
    } else {
        ordenarRanking();
        printf("\nRANKING DE JOGADORES:\n");
        printf("-------------------------------\n");
        for (int i = 0; i < numJogadores; i++) {
            printf("%d. %s - Pontuação: %d\n", i + 1, jogadores[i], pontuacao[i]);
        }
        printf("-------------------------------\n");
    }

    printf("\nPressione Enter para continuar...");
    getchar();
    limparTela();
    return 0;
}

int opcao3() {
    int opc = 0;
    int opcJogadores = 0;
    printf("\n       OPÇÃO 3 SELECIONADA     ");
    printf("\n     GERENCIAMENTO DE JOGADORES ");
    while (opc != 5) {
        printf("\n+-----------------------------+");
        printf("\n| SELECIONE A OPÇÃO DESEJADA: |");
        printf("\n+-----------------------------+");
        printf("\n 1- CADASTRAR JOGADOR");
        printf("\n 2- EDITAR JOGADOR");
        printf("\n 3- EXCLUIR JOGADOR");
        printf("\n 4- LISTAR JOGADORES");
        printf("\n 5- VOLTAR AO MENU");
        printf("\n->");
        scanf("%d", &opc);
        limparBufferEntrada();

        if (opc == 1) {
            if (numJogadores < MAX_JOGADORES) {
                printf("\n+-----------------------+");
                printf("\n| CADASTRO DE JOGADORES |");
                printf("\n+-----------------------+");
                printf("\nInsira o nome do novo jogador (máx %d caracteres): ", TAM_NOME-1);
                fgets(jogadores[numJogadores], TAM_NOME, stdin);
                jogadores[numJogadores][strcspn(jogadores[numJogadores], "\n")] = '\0'; // Remove newline
                pontuacao[numJogadores] = 0;
                printf("\n-----------------------");
                printf("\n  JOGADOR CADASTRADO   ");
                printf("\n    COM SUCESSO!       ");
                numJogadores++;
                printf("\nPressione Enter para continuar...");
                getchar();
                limparTela();
            } else {
                printf("\n-------------------------------");
                printf("\n O NÚMERO MÁXIMO DE JOGADORES  ");
                printf("\n        FOI ATINGIDO!          ");
                printf("\n FAÇA A EXCLUSÃO DE UM JOGADOR ");
                printf("\n    PARA CADASTRAR UM NOVO!    ");
                printf("\n-------------------------------");
                printf("\nPressione Enter para continuar...");
                getchar();
                limparTela();
            }
        } else if (opc == 2) {
            if (numJogadores == 0) {
                printf("\nNenhum jogador cadastrado para editar.\n");
                printf("\nPressione Enter para continuar...");
                getchar();
                limparTela();
                continue;
            }
            printf("\n+-----------------------+");
            printf("\n|  EDIÇÃO DE JOGADORES  |");
            printf("\n+-----------------------+");
            printf("\nDIGITE O NÚMERO DE UM DOS JOGADORES PARA EDITAR (0 para voltar):");
            for (int i = 0; i < numJogadores; i++) {
                printf("\n%d - %s", i + 1, jogadores[i]);
            }
            printf("\n-> ");
            scanf("%d", &opcJogadores);
            limparBufferEntrada();

            if (opcJogadores == 0) {
                limparTela();
                continue;
            } else if (opcJogadores > 0 && opcJogadores <= numJogadores) {
                printf("\nInsira o novo nome do jogador: ");
                fgets(jogadores[opcJogadores - 1], TAM_NOME, stdin);
                jogadores[opcJogadores - 1][strcspn(jogadores[opcJogadores - 1], "\n")] = '\0';
                printf("\n-----------------------");
                printf("\n  JOGADOR EDITADO      ");
                printf("\n    COM SUCESSO!       ");
                printf("\nPressione Enter para continuar...");
                getchar();
                limparTela();
            } else {
                 printf("\nOPÇÃO INVÁLIDA! Tente novamente.\n");
                 sleep(2);
                 limparTela();
            }
        } else if (opc == 3) {
            if (numJogadores == 0) {
                printf("\nNenhum jogador cadastrado para excluir.\n");
                printf("\nPressione Enter para continuar...");
                getchar();
                limparTela();
                continue;
            }
            printf("\n+-------------------------+");
            printf("\n|  EXCLUSÃO DE JOGADORES  |");
            printf("\n+-------------------------+");
            printf("\nDIGITE O NÚMERO DE UM DOS JOGADORES PARA EXCLUIR (0 para voltar):");
            for (int i = 0; i < numJogadores; i++) {
                printf("\n%d - %s", i + 1, jogadores[i]);
            }
            printf("\n-> ");
            scanf("%d", &opcJogadores);
            limparBufferEntrada();

            if (opcJogadores == 0) {
                limparTela();
                continue;
            } else if (opcJogadores > 0 && opcJogadores <= numJogadores) {
                for (int i = opcJogadores - 1; i < numJogadores - 1; i++) {
                    strcpy(jogadores[i], jogadores[i + 1]);
                    pontuacao[i] = pontuacao[i + 1];
                }
                numJogadores--;
                printf("\n-----------------------");
                printf("\n  JOGADOR EXCLUÍDO     ");
                printf("\n    COM SUCESSO!       ");
                printf("\nPressione Enter para continuar...");
                getchar();
                limparTela();
            } else {
                printf("\nOPÇÃO INVÁLIDA! Tente novamente.\n");
                sleep(2);
                limparTela();
            }
        } else if (opc == 4) {
            printf("\n+--------------------------+");
            printf("\n|    LISTA DE JOGADORES    |");
            printf("\n+--------------------------+");
            if (numJogadores < 1) {
                printf("\nNENHUM JOGADOR CADASTRADO!");
            }
            for (int i = 0; i < numJogadores; i++) {
                printf("\n%d - %s (Pontuação: %d)", i + 1, jogadores[i], pontuacao[i]);
            }
            printf("\n+--------------------------+");
            printf("\nPressione Enter para continuar...");
            getchar();
            limparTela();
        } else if (opc == 5) {
            printf("\nVoltando ao menu principal...");
            sleep(2);
            limparTela();
            return 0;
        } else {
            printf("\nOPÇÃO INVÁLIDA! Tente novamente.\n");
            sleep(2);
            limparTela();
        }
    }
    return 0;
}

int opcao4() {
    printf("\n OPÇÃO 4 SELECIONADA - REGRAS ");
    printf("\n+---------------------------------------------------------------------------------------------+");
    printf("\n|   1- CADASTRE PELO MENOS DOIS JOGADORES                                                     |");
    printf("\n|   2- SELECIONE OS JOGADORES QUE IRÃO JOGAR                                                  |");
    printf("\n|   3- O JOGO IRÁ INICIAR E O PRIMEIRO JOGADOR IRÁ JOGAR COM 'X'                              |");
    printf("\n|   4- O SEGUNDO JOGADOR IRÁ JOGAR COM 'O'                                                    |");
    printf("\n|   5- O JOGO IRÁ TERMINAR QUANDO UM DOS JOGADORES CONSEGUIR 3 SIMBOLOS EM LINHA             |");
    printf("\n|   6- CASO NENHUM DOS JOGADORES CONSIGA 3 SIMBOLOS EM LINHA, O JOGO IRÁ TERMINAR EM EMPATE   |");
    printf("\n+---------------------------------------------------------------------------------------------+");
    printf("\nPressione Enter para continuar...");
    getchar();
    limparTela();
    return 0;
}

int opcao5() {
    printf("\n  OPÇÃO 5 SELECIONADA - SAIR! ");
    printf("\n------------------------------");
    printf("\n      OBRIGADO POR JOGAR!     ");
    printf("\n------------------------------");
    printf("\n------------------------------");
    sleep(2);
    limparTela();
    exit(0);
    return 0;
}

int outraOpcao() {
    printf("\nOPÇÃO INVÁLIDA! TENTE NOVAMENTE.\n");
    sleep(2);
    limparTela();
    return 0;
}

int main() {
    int opc = 0;
    while (opc != 5) {
        opc = exibirMenu();
        switch (opc) {
            case 1:
                limparTela();
                opcao1();
                break;
            case 2:
                limparTela();
                opcao2();
                break;
            case 3:
                limparTela();
                opcao3();
                break;
            case 4:
                limparTela();
                opcao4();
                break;
            case 5:
                limparTela();
                opcao5();
                break;
            default:
                outraOpcao();
        }
    }

    return 0;
}
