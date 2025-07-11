#include <stdlib.h>
#include <stdio.h>

void limparTabuleiro(char t[3][3])
{
    t[0][0] = '1';
    t[0][1] = '2';
    t[0][2] = '3';
    t[1][0] = '4';
    t[1][1] = '5';
    t[1][2] = '6';
    t[2][0] = '7';
    t[2][1] = '8';
    t[2][2] = '9';
}

void mostrarTabuleiro(char tabuleiro[3][3]){
    printf("\n");
    printf("     %c | %c | %c \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("    ---|---|---\n");
    printf("     %c | %c | %c \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("    ---|---|---\n");
    printf("     %c | %c | %c \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
    printf("\n");

}

int alternarJogador(int n)
{
    if (n % 2 == 0)
    {
        n = 1;
    } else if (n % 2 != 0)
    {
        n = 2;
    } else
    {
        n = 0;
    }    

    return n;
}

int verSeGanhou(char tabuleiro[3][3], int repetir, int jogadas)
{
    if (jogadas == 9)
    {
        repetir = 3;
    }

    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][0] == tabuleiro[i][2])
        {
            repetir = 0;
        }

        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[0][i] == tabuleiro[2][i])
        {
            repetir = 0;
        }
    }
    
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[0][0] == tabuleiro[2][2])
    {
        repetir = 0;
    }

    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[0][2] == tabuleiro[2][0])
    {
        repetir = 0;
    } 

    return repetir;
}

int preencherCasa(char t[3][3], int linha, int coluna, int jogador, int jogadas)
{
    if (t[linha][coluna] != 'X' && t[linha][coluna] != 'O')
    {
        if (jogador == 1)
        {
            t[linha][coluna] = 'X';
            jogadas++;
        } else if (jogador == 2)
        {
            t[linha][coluna] = 'O';
            jogadas++;
        }
    } else 
    {
      printf("Jogada invalida! tente novamente.");
    }

    return jogadas;
}

int main()
{
    int jogador = 0, jogadas = 0, repetir = 1, opcao;
    char tabuleiro[3][3];

    limparTabuleiro(tabuleiro);

    do  
    {   
        repetir = verSeGanhou(tabuleiro, repetir, jogadas);
        opcao = 0;

        if (repetir == 1)
        {
            jogador = alternarJogador(jogadas);
            
            printf("\nVez do Jogador %d!\n", jogador);
            mostrarTabuleiro(tabuleiro);
            printf("0 - sair: \n");
            
            scanf("%d", &opcao);
            
            switch (opcao)
            {
            case 1:
                jogadas = preencherCasa(tabuleiro, 0, 0, jogador, jogadas);
                break;

            case 2:
                jogadas = preencherCasa(tabuleiro, 0, 1, jogador, jogadas);
                break;
            
            case 3:
                jogadas = preencherCasa(tabuleiro, 0, 2, jogador, jogadas);
                break;

            case 4:
                jogadas = preencherCasa(tabuleiro, 1, 0, jogador, jogadas);
                break;

            case 5:
                jogadas = preencherCasa(tabuleiro, 1, 1, jogador, jogadas);
                break;

            case 6:
                jogadas = preencherCasa(tabuleiro, 1, 2, jogador, jogadas);
                break;

            case 7:
                jogadas = preencherCasa(tabuleiro, 2, 0, jogador, jogadas);
                break;

            case 8:
                jogadas = preencherCasa(tabuleiro, 2, 1, jogador, jogadas);
                break;

            case 9:
                jogadas = preencherCasa(tabuleiro, 2, 2, jogador, jogadas);
                break;
            
            case 0:
                repetir = 0;
                break;
            
            default:
                printf("Essa casa nao existe! joga direito faz favor");
            }
        } else if (repetir == 0)
        {
            printf("\nParabens Jogador %d, voce ganhou!!!!\n", jogador);
            mostrarTabuleiro(tabuleiro);
            printf("\n");
        } else if (repetir == 3)
        {
            printf("\nEmpatou!\n");
            repetir = 0;
        }
        
    } while (repetir != 0);

    return 0;
}