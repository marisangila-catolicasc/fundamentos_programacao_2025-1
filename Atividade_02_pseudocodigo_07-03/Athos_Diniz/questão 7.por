programa {
  funcao inicio() {
    real cambio, reais, quantidade_dolares

    escreva("Qual o valor do câmbio hoje?:\n")
    leia(cambio)
    escreva("Quantos dólares você quer converter?\n")
    leia(quantidade_dolares)
    reais = quantidade_dolares * cambio
    escreva("Você precisa de ", reais," reais para converter em ", quantidade_dolares," dólares!")
  }
}
