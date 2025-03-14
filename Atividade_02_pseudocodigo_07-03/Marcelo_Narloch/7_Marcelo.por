programa {
  funcao inicio() {
    real cambio, dolares, reais

    escreva("Qual o valor do câmbio do dólar hoje?\n")
    leia(cambio)

    escreva("Quantos dólares deseja converter?\n")
    leia(dolares)

    reais = dolares * cambio

    escreva("é necessário",reais, "reais para converter em ", dolares, " dólares" )
  }
}
