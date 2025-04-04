#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    if (num > 0) {
        printf("O seu número é positivo.\n", num);
    } 
    else if (num < 0) {
        printf("O seu número é negativo.\n", num);
    }

    return 0;
}
//!!!!!!!!!!!!!! AVISO !!!!!!!!!!!!!!

// Quis alterar algumas coisas aqui para poder escrever no printf usando acentos, gosto de escrever as coisas direito, então:
// O Shell utilizado é o CMD.
// O código também irá rodar em Powershell, mas com um símbolo no lugar de palavras com acento.
// Alterei meu settings.json para que a página de código ativa seja sempre: 65001.
// Dessa maneira, não preciso rodar "chcp 65001" sempre que for compilar meu código.
// Assim é possível utilizar acentos no printf sem aparecer símbolos estranhos no terminal.
// Compilador utilizado: gcc 1_BrunoSartortt.c -o 1_BrunoSartortt.exe
// Executador utilizado: .\1_BrunoSartortt.exe

/* ==================================================================
Meu User Settings (JSON) se encontra dessa maneira:
{
    "workbench.editor.empty.hint": "hidden",
    "terminal.integrated.defaultProfile.windows": "Command Prompt",
    "terminal.integrated.profiles.windows": {
        "Command Prompt": {
            "path": [
                "${env:windir}\\Sysnative\\cmd.exe",
                "${env:windir}\\System32\\cmd.exe"
            ],
            "args": ["/K", "chcp 65001"]
        }
    }
}
    ==================================================================*/