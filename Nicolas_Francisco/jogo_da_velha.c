#include <stdio.h>
#include <stdlib.h>

const int empate = 9; // caso for a 9 jogada vai dar empate
const int X = 1;      // definindo qual o valor que seria o X e o O na matriz criada
const int O = 2;

//Declarar as funções para melhor organização

void limpatela(void);

void jogo(int resp, int matriz[5][5], int *vez);
int  fimjogo(int matriz[5][5]);

int  validar_vertical (int matriz[5][5]);
int  validar_horizontal(int matriz[5][5]);
int  validar_diagonais (int matriz[5][5]);
int  validar_ganhador  (int matriz[5][5]);

void colocar_jog(int vez_x, int i, int j, int matriz[5][5]);
void colocar_bordas(int j);

int main() {
	int matriz[5][5] = {0};
	int vez = 0;
	int resp = 0;
	int verif_vez = 0; // verificar se vez tera mudanca

	while (1) {
		limpatela();

		verif_vez = vez;// defino o verif_vez com o valor da vez atual para ver se ocorreu mudanca depois
		jogo(resp, matriz, &vez); // aqui a funcao principal

		if (fimjogo(matriz)) {
			printf("Jogo finalizado! Vitoria de %s!\n", (vez - 1) % 2 == 0 ? "X" : "O");
			break;
		}
		if(vez == empate) {
			printf("Jogo finalizado! EMPATE!");
			break;
		}
        if(resp == 10) break;

		//apenas inprime a mensagem se o jogador selecionar uma posicao ja escolhida antes
		if(verif_vez == vez || resp > 10 || resp < 1) printf("* ESCOLHA UMA POSICAO VALIDA *\n");
        if(vez == 0) printf("CASO QUEIRA PARAR DE JOGAR DIGITE 10!\n");
		printf("Escolha um lugar JOGADOR %s: ", (vez % 2 == 0 ? "X" : "O"));

		scanf("%d", &resp);

	}

	return 0;
}

//validar verticais da matriz
int validar_vertical(int matriz[5][5]) {
	for (int i = 0; i < 5; i += 2) {
		if (matriz[0][i] != 0 && matriz[0][i] == matriz[2][i] && matriz[2][i] == matriz[4][i]) {
			return 1;
		}
	}
	return 0;
}

//validar horizontais da matriz
int validar_horizontal(int matriz[5][5]) {
	for (int i = 0; i < 5; i += 2) {
		if (matriz[i][0] != 0 && matriz[i][0] == matriz[i][2] && matriz[i][2] == matriz[i][4]) {
			return 1;
		}
	}
	return 0;
}

//validar as diagonais da matriz
int validar_diagonais(int matriz[5][5]) {
	if (matriz[0][0] != 0 && matriz[0][0] == matriz[2][2] && matriz[2][2] == matriz[4][4]) {
		return 1;
	}
	if (matriz[0][4] != 0 && matriz[0][4] == matriz[2][2] && matriz[2][2] == matriz[4][0]) {
		return 1;
	}
	return 0;
}


//validar o ganhador
int validar_ganhador(int matriz[5][5]) {

	if (validar_vertical(matriz)) return 1;
	if (validar_horizontal(matriz)) return 1;
	if (validar_diagonais(matriz)) return 1;

	return 0;
}


//validar se caso tenha ganhador finalizara o jogo
int fimjogo(int matriz[5][5]) {

	if (validar_ganhador(matriz)) return 1;

	return 0;
}

//coloca o devido jogador X ou O de acordo com a vez
void colocar_jog(int vez_x, int i, int j, int matriz[5][5]) {
	if (vez_x) {
		printf(" X ");
		matriz[i][j] = X;
	} else {
		printf(" O ");
		matriz[i][j] = O;
	}
}

// coloca as bordas " - " ou " | "
void colocar_bordas(int j) {
	if(j % 2 != 0) {
		printf(" | ");
	} else {
		printf(" - ");
	}
}

void jogo(int resp, int matriz[5][5], int *vez) {
	int posicao_valida = 1;
	int vez_x = (*vez % 2 == 0); // definindo a vez de X para usar como BOOL
	int jogada_valida = 0; // apenas delcarando a var o valor sera atribuido depois

	printf("\n");
	for( int i = 0; i < 5; i++) {
		for( int j = 0; j < 5; j++) {
			if(j % 2 != 0 || i % 2 != 0) {
				colocar_bordas(j); // montando as bordas
			} else {
				jogada_valida = (resp == posicao_valida); // definindo a jogada valida
				if(matriz[i][j] == 0) {
					if ((jogada_valida)) {
						colocar_jog(vez_x, i, j, matriz); //mostra a jogada do jogador
						(*vez)++; // passa a vez
					} else {
						printf(" %d ", posicao_valida); //mostra as posicoes disponiveis
					}
				} else {
					// caso for X imprimi X senao O verificando o que tem na matriz
					printf("%s", (matriz[i][j] == X ? " X " : " O "));
				}
				posicao_valida++; // a posicaoo valida sera os num de 1,2,3....9
			}
		}
		printf("\n");
	}
	printf("\n");
}

// funcao apenas para limpar a tela caso seja windows cls ou linux clear
void limpatela() {
	system("clear || cls");
}