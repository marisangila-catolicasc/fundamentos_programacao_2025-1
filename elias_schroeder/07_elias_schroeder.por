programa {
  funcao inicio() {
    inteiro cambio, realMoeda, quantidade_dolares

    escreva("Qual o valor do cambio Atual?\n")

    leia(cambio)

    escreva("Quantos Dolares voce quer converter?\n")
    leia(quantidade_dolares)

    realMoeda = cambio * quantidade_dolares

    escreva("Voce precisa de ", realMoeda, " Reais  para comprar ", quantidade_dolares, " Dolares")
  }
}
