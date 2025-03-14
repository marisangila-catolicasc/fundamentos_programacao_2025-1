Conversor de dólar para real
algoritmo "DolarxReal"
var
    cambio, dolares, reais: real
inicio
    escreva("Digite o valor do câmbio do dólar: ")
    leia(cambio)
    escreva("Digite a quantidade de dólares: ")
    leia(dolares)
    reais <- dolares * cambio
    escreva(dolares, " dólares equivalem a ", reais, " reais.")
fimalgoritmo