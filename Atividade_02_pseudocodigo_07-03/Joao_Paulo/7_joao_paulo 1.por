programa {
  funcao inicio() {
    real reais
    real dolares
    real cotacao

    escreva("Digite a cotação atual do dólar:\n")
    leia(cotacao)
    escreva("Digite quantos dólares você deseja converter:\n")
    leia(dolares)

    reais = dolares * cotacao
    escreva("São necessários R$", reais, " para comprar ", dolares ," dólares.")
  }
}
