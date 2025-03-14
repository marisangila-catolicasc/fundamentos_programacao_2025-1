Troca de valores entre variáveis A e B
algoritmo "Troca"
var
    A, B, temp: inteiro
inicio
    escreva("Digite o valor de A: ")
    leia(A)
    escreva("Digite o valor de B: ")
    leia(B)
    temp <- A
    A <- B
    B <- temp
    escreva("Após a troca, A = ", A, " e B = ", B)
fimalgoritmo