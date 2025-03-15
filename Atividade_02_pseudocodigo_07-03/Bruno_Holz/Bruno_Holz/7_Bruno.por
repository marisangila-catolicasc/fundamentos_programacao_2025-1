programa {
  funcao inicio() {
    real cambio, reais
    inteiro quantidade_dolar
    escreva("Qual o valor do câmbio atual? ")
    leia(cambio)
    escreva("Quantos dólares deseja comprar? ")
    leia(quantidade_dolar)
    reais = quantidade_dolar*cambio
    escreva("A quantidade em reais para comprar a quantia em dólares que deseja é: ", reais, "R$")
  }
}
