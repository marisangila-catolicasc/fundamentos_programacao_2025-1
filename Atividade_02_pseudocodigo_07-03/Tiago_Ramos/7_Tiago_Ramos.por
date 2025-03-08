programa {
  funcao inicio() {
    real cambio
    real dolar
    real reais

    escreva("Digite o valor do cambio de hoje: \n")
    leia(cambio)
    escreva("Digite quantos dolares você deseja converter: \n")
    leia(dolar)

    reais = dolar * cambio

    escreva("Você precisa de ", reais, " para comprar ", dolar, " dolares")
  }
}
