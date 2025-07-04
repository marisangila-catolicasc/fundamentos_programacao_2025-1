#include <stdio.h>
#include <ctype.h>

char board[3][3];
const char PLAYER = 'X';
const char PLAYER2 = 'O';
int quit = 0;

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void player2Move();
char checkWinner();
void printWinner(char);

int main()
{
    char winner = ' ';
    char repeat;

    printf("\nJogo da Velha  -  escreva '9' para encerrar\n");

    do
    {
        winner = ' ';
        repeat = ' ';
        quit = 0;
        resetBoard();

        while (winner == ' ' && checkFreeSpaces() != 0)
        {
            printBoard();

            playerMove();
            if (quit == 1)
            {
                printf("\nJogo encerrado pelo jogador.\n");
                break;
            }

            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0)
            {
                break;
            }

            printBoard();

            player2Move();
            if (quit == 1)
            {
                printf("\nJogo encerrado pelo jogador 2.\n");
                break;
            }

            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0)
            {
                break;
            }
        }

        if (quit == 0)
        {
            printBoard();
            printWinner(winner);
        }

        printf("\nGostaria de jogar novamente? (S/N): ");
        scanf(" %c", &repeat);
        repeat = toupper(repeat);

    } while (repeat == 'S');

    printf("\nObrigado por jogar!\n");

    return 0;
}

void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int checkFreeSpaces()
{
    int freeSpaces = 9;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void playerMove()
{
    int x, y;

    do
    {
        printf("\nJogador 1:\nDigite a linha #(1-3): ");
        scanf("%d", &x);
        if (x == 9)
        {
            quit = 1;
            return;
        }
        x--;

        printf("Digite a coluna #(1-3): ");
        scanf("%d", &y);
        if (y == 9)
        {
            quit = 1;
            return;
        }
        y--;

        if (board[x][y] != ' ')
        {
            printf("\n----Movimento invalido----\n");
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');
}

void player2Move()
{
    int x, y;

    do
    {
        printf("\nJogador 2:\nDigite a linha #(1-3): ");
        scanf("%d", &x);
        if (x == 9)
        {
            quit = 1;
            return;
        }
        x--;

        printf("Digite a coluna #(1-3): ");
        scanf("%d", &y);
        if (y == 9)
        {
            quit = 1;
            return;
        }
        y--;

        if (board[x][y] != ' ')
        {
            printf("\n----Movimento invalido----\n");
        }
        else
        {
            board[x][y] = PLAYER2;
            break;
        }
    } while (board[x][y] != ' ');
}

char checkWinner()
{
    // linha
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
    }
    // coluna
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
        {
            return board[0][i];
        }
    }
    // diagonal
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
    {
        return board[0][2];
    }

    return ' ';
}

void printWinner(char winner)
{
    if (winner == PLAYER)
    {
        printf("Vitoria do Jogador 1!");
    }
    else if (winner == PLAYER2)
    {
        printf("Vitoria do Jogador 2!");
    }
    else
    {
        printf("Empate!");
    }
}
