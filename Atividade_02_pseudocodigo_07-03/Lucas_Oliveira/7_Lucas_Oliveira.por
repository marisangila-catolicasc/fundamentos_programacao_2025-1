programa {
  funcao inicio() {
    real quantidade_de_dolares, cambio, real1
    escreva("Quantos dólares deseja comprar?\n")
    leia(quantidade_de_dolares)
    escreva("Quanto está o câmbio?\n")
    leia(cambio)
    real1 = quantidade_de_dolares * cambio
    escreva("Você vai precisar de R$", real1,".")
  }
}
